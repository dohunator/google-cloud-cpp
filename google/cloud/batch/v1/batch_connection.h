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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H

#include "google/cloud/batch/v1/batch_connection_idempotency_policy.h"
#include "google/cloud/batch/v1/internal/batch_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/batch/v1/batch.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace batch_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using BatchServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        batch_v1_internal::BatchServiceRetryTraits>;

using BatchServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        batch_v1_internal::BatchServiceRetryTraits>;

using BatchServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        batch_v1_internal::BatchServiceRetryTraits>;

/**
 * The `BatchServiceConnection` object for `BatchServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BatchServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BatchServiceClient`.
 *
 * To create a concrete instance, see `MakeBatchServiceConnection()`.
 *
 * For mocking, see `batch_v1_mocks::MockBatchServiceConnection`.
 */
class BatchServiceConnection {
 public:
  virtual ~BatchServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::batch::v1::Job> CreateJob(
      google::cloud::batch::v1::CreateJobRequest const& request);

  virtual StatusOr<google::cloud::batch::v1::Job> GetJob(
      google::cloud::batch::v1::GetJobRequest const& request);

  virtual future<StatusOr<google::cloud::batch::v1::OperationMetadata>>
  DeleteJob(google::cloud::batch::v1::DeleteJobRequest const& request);

  virtual StreamRange<google::cloud::batch::v1::Job> ListJobs(
      google::cloud::batch::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::batch::v1::Task> GetTask(
      google::cloud::batch::v1::GetTaskRequest const& request);

  virtual StreamRange<google::cloud::batch::v1::Task> ListTasks(
      google::cloud::batch::v1::ListTasksRequest request);
};

/**
 * A factory function to construct an object of type `BatchServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of BatchServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BatchServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::batch_v1::BatchServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BatchServiceConnection` created by
 * this function.
 */
std::shared_ptr<BatchServiceConnection> MakeBatchServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_V1_BATCH_CONNECTION_H
