// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/redis/v1/cloud_redis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_H

#include "google/cloud/redis/v1/cloud_redis_connection_idempotency_policy.h"
#include "google/cloud/redis/v1/internal/cloud_redis_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/redis/v1/cloud_redis.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace redis_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudRedisRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    redis_v1_internal::CloudRedisRetryTraits>;

using CloudRedisLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        redis_v1_internal::CloudRedisRetryTraits>;

using CloudRedisLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        redis_v1_internal::CloudRedisRetryTraits>;

/**
 * The `CloudRedisConnection` object for `CloudRedisClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudRedisClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudRedisClient`.
 *
 * To create a concrete instance, see `MakeCloudRedisConnection()`.
 *
 * For mocking, see `redis_v1_mocks::MockCloudRedisConnection`.
 */
class CloudRedisConnection {
 public:
  virtual ~CloudRedisConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::redis::v1::Instance> ListInstances(
      google::cloud::redis::v1::ListInstancesRequest request);

  virtual StatusOr<google::cloud::redis::v1::Instance> GetInstance(
      google::cloud::redis::v1::GetInstanceRequest const& request);

  virtual StatusOr<google::cloud::redis::v1::InstanceAuthString>
  GetInstanceAuthString(
      google::cloud::redis::v1::GetInstanceAuthStringRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> CreateInstance(
      google::cloud::redis::v1::CreateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> UpdateInstance(
      google::cloud::redis::v1::UpdateInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> UpgradeInstance(
      google::cloud::redis::v1::UpgradeInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> ImportInstance(
      google::cloud::redis::v1::ImportInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> ExportInstance(
      google::cloud::redis::v1::ExportInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>> FailoverInstance(
      google::cloud::redis::v1::FailoverInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::OperationMetadata>>
  DeleteInstance(
      google::cloud::redis::v1::DeleteInstanceRequest const& request);

  virtual future<StatusOr<google::cloud::redis::v1::Instance>>
  RescheduleMaintenance(
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudRedisConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudRedisClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudRedisConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::redis_v1::CloudRedisPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudRedisConnection` created by
 * this function.
 */
std::shared_ptr<CloudRedisConnection> MakeCloudRedisConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_CLOUD_REDIS_CONNECTION_H
