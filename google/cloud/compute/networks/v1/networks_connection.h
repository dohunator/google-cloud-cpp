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
// source: google/cloud/compute/networks/v1/networks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H

#include "google/cloud/compute/networks/v1/internal/networks_retry_traits.h"
#include "google/cloud/compute/networks/v1/networks_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/networks/v1/networks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_networks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using NetworksRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    compute_networks_v1_internal::NetworksRetryTraits>;

using NetworksLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_networks_v1_internal::NetworksRetryTraits>;

using NetworksLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_networks_v1_internal::NetworksRetryTraits>;

/**
 * The `NetworksConnection` object for `NetworksClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworksClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NetworksClient`.
 *
 * To create a concrete instance, see `MakeNetworksConnection()`.
 *
 * For mocking, see `compute_networks_v1_mocks::MockNetworksConnection`.
 */
class NetworksConnection {
 public:
  virtual ~NetworksConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddPeering(google::cloud::cpp::compute::networks::v1::AddPeeringRequest const&
                 request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNetworks(
      google::cloud::cpp::compute::networks::v1::DeleteNetworksRequest const&
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Network> GetNetworks(
      google::cloud::cpp::compute::networks::v1::GetNetworksRequest const&
          request);

  virtual StatusOr<
      google::cloud::cpp::compute::v1::NetworksGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(google::cloud::cpp::compute::networks::v1::
                            GetEffectiveFirewallsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNetworks(
      google::cloud::cpp::compute::networks::v1::InsertNetworksRequest const&
          request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Network> ListNetworks(
      google::cloud::cpp::compute::networks::v1::ListNetworksRequest request);

  virtual StreamRange<google::cloud::cpp::compute::v1::ExchangedPeeringRoute>
  ListPeeringRoutes(
      google::cloud::cpp::compute::networks::v1::ListPeeringRoutesRequest
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchNetworks(
      google::cloud::cpp::compute::networks::v1::PatchNetworksRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemovePeering(
      google::cloud::cpp::compute::networks::v1::RemovePeeringRequest const&
          request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SwitchToCustomMode(google::cloud::cpp::compute::networks::v1::
                         SwitchToCustomModeRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdatePeering(
      google::cloud::cpp::compute::networks::v1::UpdatePeeringRequest const&
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_networks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORKS_V1_NETWORKS_CONNECTION_H
