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
// google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_GLOBAL_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_GLOBAL_NETWORK_ENDPOINT_GROUPS_CONNECTION_H

#include "google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups_connection_idempotency_policy.h"
#include "google/cloud/compute/global_network_endpoint_groups/v1/internal/global_network_endpoint_groups_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_network_endpoint_groups/v1/global_network_endpoint_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_network_endpoint_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using GlobalNetworkEndpointGroupsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_global_network_endpoint_groups_v1_internal::
            GlobalNetworkEndpointGroupsRetryTraits>;

using GlobalNetworkEndpointGroupsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_global_network_endpoint_groups_v1_internal::
            GlobalNetworkEndpointGroupsRetryTraits>;

using GlobalNetworkEndpointGroupsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_global_network_endpoint_groups_v1_internal::
            GlobalNetworkEndpointGroupsRetryTraits>;

/**
 * The `GlobalNetworkEndpointGroupsConnection` object for
 * `GlobalNetworkEndpointGroupsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `GlobalNetworkEndpointGroupsClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `GlobalNetworkEndpointGroupsClient`.
 *
 * To create a concrete instance, see
 * `MakeGlobalNetworkEndpointGroupsConnection()`.
 *
 * For mocking, see
 * `compute_global_network_endpoint_groups_v1_mocks::MockGlobalNetworkEndpointGroupsConnection`.
 */
class GlobalNetworkEndpointGroupsConnection {
 public:
  virtual ~GlobalNetworkEndpointGroupsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AttachNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteGlobalNetworkEndpointGroups(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DeleteGlobalNetworkEndpointGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DetachNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetGlobalNetworkEndpointGroups(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          GetGlobalNetworkEndpointGroupsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertGlobalNetworkEndpointGroups(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          InsertGlobalNetworkEndpointGroupsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  ListGlobalNetworkEndpointGroups(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListGlobalNetworkEndpointGroupsRequest request);

  virtual StreamRange<
      google::cloud::cpp::compute::v1::NetworkEndpointWithHealthStatus>
  ListNetworkEndpoints(
      google::cloud::cpp::compute::global_network_endpoint_groups::v1::
          ListNetworkEndpointsRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_network_endpoint_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_NETWORK_ENDPOINT_GROUPS_V1_GLOBAL_NETWORK_ENDPOINT_GROUPS_CONNECTION_H
