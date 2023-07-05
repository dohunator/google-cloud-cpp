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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_SUBNETWORKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_SUBNETWORKS_CONNECTION_H

#include "google/cloud/compute/subnetworks/v1/internal/subnetworks_retry_traits.h"
#include "google/cloud/compute/subnetworks/v1/subnetworks_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/subnetworks/v1/subnetworks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_subnetworks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using SubnetworksRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_subnetworks_v1_internal::SubnetworksRetryTraits>;

using SubnetworksLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_subnetworks_v1_internal::SubnetworksRetryTraits>;

using SubnetworksLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_subnetworks_v1_internal::SubnetworksRetryTraits>;

/**
 * The `SubnetworksConnection` object for `SubnetworksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SubnetworksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SubnetworksClient`.
 *
 * To create a concrete instance, see `MakeSubnetworksConnection()`.
 *
 * For mocking, see `compute_subnetworks_v1_mocks::MockSubnetworksConnection`.
 */
class SubnetworksConnection {
 public:
  virtual ~SubnetworksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
  AggregatedListSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::
          AggregatedListSubnetworksRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSubnetworks(google::cloud::cpp::compute::subnetworks::v1::
                        DeleteSubnetworksRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ExpandIpCidrRange(google::cloud::cpp::compute::subnetworks::v1::
                        ExpandIpCidrRangeRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Subnetwork> GetSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::GetSubnetworksRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSubnetworks(google::cloud::cpp::compute::subnetworks::v1::
                        InsertSubnetworksRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Subnetwork>
  ListSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork>
  ListUsable(
      google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchSubnetworks(google::cloud::cpp::compute::subnetworks::v1::
                       PatchSubnetworksRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetPrivateIpGoogleAccess(google::cloud::cpp::compute::subnetworks::v1::
                               SetPrivateIpGoogleAccessRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::subnetworks::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_SUBNETWORKS_CONNECTION_H
