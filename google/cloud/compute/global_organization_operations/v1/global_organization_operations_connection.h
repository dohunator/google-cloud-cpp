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
// source:
// google/cloud/compute/global_organization_operations/v1/global_organization_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_H

#include "google/cloud/compute/global_organization_operations/v1/global_organization_operations_connection_idempotency_policy.h"
#include "google/cloud/compute/global_organization_operations/v1/internal/global_organization_operations_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_organization_operations/v1/global_organization_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_organization_operations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GlobalOrganizationOperationsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_global_organization_operations_v1_internal::
            GlobalOrganizationOperationsRetryTraits>;

using GlobalOrganizationOperationsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_global_organization_operations_v1_internal::
            GlobalOrganizationOperationsRetryTraits>;

using GlobalOrganizationOperationsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_global_organization_operations_v1_internal::
            GlobalOrganizationOperationsRetryTraits>;

/**
 * The `GlobalOrganizationOperationsConnection` object for
 * `GlobalOrganizationOperationsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GlobalOrganizationOperationsClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `GlobalOrganizationOperationsClient`.
 *
 * To create a concrete instance, see
 * `MakeGlobalOrganizationOperationsConnection()`.
 *
 * For mocking, see
 * `compute_global_organization_operations_v1_mocks::MockGlobalOrganizationOperationsConnection`.
 */
class GlobalOrganizationOperationsConnection {
 public:
  virtual ~GlobalOrganizationOperationsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual Status DeleteGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          DeleteGlobalOrganizationOperationsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  GetGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          GetGlobalOrganizationOperationsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Operation>
  ListGlobalOrganizationOperations(
      google::cloud::cpp::compute::global_organization_operations::v1::
          ListGlobalOrganizationOperationsRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_organization_operations_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_ORGANIZATION_OPERATIONS_V1_GLOBAL_ORGANIZATION_OPERATIONS_CONNECTION_H
