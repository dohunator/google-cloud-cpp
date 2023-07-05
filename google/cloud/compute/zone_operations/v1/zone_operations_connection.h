// Copyright 2023 Google LLC
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
// source: google/cloud/compute/zone_operations/v1/zone_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_ZONE_OPERATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_ZONE_OPERATIONS_CONNECTION_H

#include "google/cloud/compute/zone_operations/v1/internal/zone_operations_retry_traits.h"
#include "google/cloud/compute/zone_operations/v1/zone_operations_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_zone_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ZoneOperationsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_zone_operations_v1_internal::ZoneOperationsRetryTraits>;

using ZoneOperationsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_zone_operations_v1_internal::ZoneOperationsRetryTraits>;

using ZoneOperationsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_zone_operations_v1_internal::ZoneOperationsRetryTraits>;

/**
 * The `ZoneOperationsConnection` object for `ZoneOperationsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ZoneOperationsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ZoneOperationsClient`.
 *
 * To create a concrete instance, see `MakeZoneOperationsConnection()`.
 *
 * For mocking, see
 * `compute_zone_operations_v1_mocks::MockZoneOperationsConnection`.
 */
class ZoneOperationsConnection {
 public:
  virtual ~ZoneOperationsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual Status DeleteZoneOperations(
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetZoneOperations(google::cloud::cpp::compute::zone_operations::v1::
                        GetZoneOperationsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListZoneOperations(google::cloud::cpp::compute::zone_operations::v1::
                         ListZoneOperationsRequest request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> Wait(
      google::cloud::cpp::compute::zone_operations::v1::WaitRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zone_operations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_ZONE_OPERATIONS_CONNECTION_H
