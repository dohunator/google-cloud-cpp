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
// source: google/cloud/vmwareengine/v1/vmwareengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H

#include "google/cloud/vmwareengine/v1/internal/vmware_engine_retry_traits.h"
#include "google/cloud/vmwareengine/v1/vmware_engine_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/vmwareengine/v1/vmwareengine.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vmwareengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using VmwareEngineRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        vmwareengine_v1_internal::VmwareEngineRetryTraits>;

using VmwareEngineLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        vmwareengine_v1_internal::VmwareEngineRetryTraits>;

using VmwareEngineLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        vmwareengine_v1_internal::VmwareEngineRetryTraits>;

/**
 * The `VmwareEngineConnection` object for `VmwareEngineClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `VmwareEngineClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `VmwareEngineClient`.
 *
 * To create a concrete instance, see `MakeVmwareEngineConnection()`.
 *
 * For mocking, see `vmwareengine_v1_mocks::MockVmwareEngineConnection`.
 */
class VmwareEngineConnection {
 public:
  virtual ~VmwareEngineConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::vmwareengine::v1::PrivateCloud>
  ListPrivateClouds(
      google::cloud::vmwareengine::v1::ListPrivateCloudsRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>
  GetPrivateCloud(
      google::cloud::vmwareengine::v1::GetPrivateCloudRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  CreatePrivateCloud(
      google::cloud::vmwareengine::v1::CreatePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UpdatePrivateCloud(
      google::cloud::vmwareengine::v1::UpdatePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  DeletePrivateCloud(
      google::cloud::vmwareengine::v1::DeletePrivateCloudRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  UndeletePrivateCloud(
      google::cloud::vmwareengine::v1::UndeletePrivateCloudRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::Cluster> ListClusters(
      google::cloud::vmwareengine::v1::ListClustersRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Cluster> GetCluster(
      google::cloud::vmwareengine::v1::GetClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
  CreateCluster(
      google::cloud::vmwareengine::v1::CreateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Cluster>>
  UpdateCluster(
      google::cloud::vmwareengine::v1::UpdateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteCluster(
      google::cloud::vmwareengine::v1::DeleteClusterRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::Subnet> ListSubnets(
      google::cloud::vmwareengine::v1::ListSubnetsRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Subnet> GetSubnet(
      google::cloud::vmwareengine::v1::GetSubnetRequest const& request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::Subnet>>
  UpdateSubnet(
      google::cloud::vmwareengine::v1::UpdateSubnetRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::NodeType> ListNodeTypes(
      google::cloud::vmwareengine::v1::ListNodeTypesRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::NodeType> GetNodeType(
      google::cloud::vmwareengine::v1::GetNodeTypeRequest const& request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Credentials>
  ShowNsxCredentials(
      google::cloud::vmwareengine::v1::ShowNsxCredentialsRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::Credentials>
  ShowVcenterCredentials(
      google::cloud::vmwareengine::v1::ShowVcenterCredentialsRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetNsxCredentials(
      google::cloud::vmwareengine::v1::ResetNsxCredentialsRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateCloud>>
  ResetVcenterCredentials(
      google::cloud::vmwareengine::v1::ResetVcenterCredentialsRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>>
  CreateHcxActivationKey(
      google::cloud::vmwareengine::v1::CreateHcxActivationKeyRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::HcxActivationKey>
  ListHcxActivationKeys(
      google::cloud::vmwareengine::v1::ListHcxActivationKeysRequest request);

  virtual StatusOr<google::cloud::vmwareengine::v1::HcxActivationKey>
  GetHcxActivationKey(
      google::cloud::vmwareengine::v1::GetHcxActivationKeyRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>
  GetNetworkPolicy(
      google::cloud::vmwareengine::v1::GetNetworkPolicyRequest const& request);

  virtual StreamRange<google::cloud::vmwareengine::v1::NetworkPolicy>
  ListNetworkPolicies(
      google::cloud::vmwareengine::v1::ListNetworkPoliciesRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  CreateNetworkPolicy(
      google::cloud::vmwareengine::v1::CreateNetworkPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::NetworkPolicy>>
  UpdateNetworkPolicy(
      google::cloud::vmwareengine::v1::UpdateNetworkPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteNetworkPolicy(
      google::cloud::vmwareengine::v1::DeleteNetworkPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  CreateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::CreateVmwareEngineNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>>
  UpdateVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::UpdateVmwareEngineNetworkRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeleteVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::DeleteVmwareEngineNetworkRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  GetVmwareEngineNetwork(
      google::cloud::vmwareengine::v1::GetVmwareEngineNetworkRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::VmwareEngineNetwork>
  ListVmwareEngineNetworks(
      google::cloud::vmwareengine::v1::ListVmwareEngineNetworksRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::vmwareengine::v1::CreatePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::vmwareengine::v1::GetPrivateConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::vmwareengine::v1::ListPrivateConnectionsRequest request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::PrivateConnection>>
  UpdatePrivateConnection(
      google::cloud::vmwareengine::v1::UpdatePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::vmwareengine::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::vmwareengine::v1::DeletePrivateConnectionRequest const&
          request);

  virtual StreamRange<google::cloud::vmwareengine::v1::PeeringRoute>
  ListPrivateConnectionPeeringRoutes(
      google::cloud::vmwareengine::v1::ListPrivateConnectionPeeringRoutesRequest
          request);
};

/**
 * A factory function to construct an object of type `VmwareEngineConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of VmwareEngineClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `VmwareEngineConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::vmwareengine_v1::VmwareEnginePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `VmwareEngineConnection` created by
 * this function.
 */
std::shared_ptr<VmwareEngineConnection> MakeVmwareEngineConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmwareengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMWAREENGINE_V1_VMWARE_ENGINE_CONNECTION_H
