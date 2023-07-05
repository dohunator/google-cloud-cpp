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
// source: google/cloud/networksecurity/v1/network_security.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H

#include "google/cloud/networksecurity/v1/internal/network_security_retry_traits.h"
#include "google/cloud/networksecurity/v1/network_security_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/networksecurity/v1/common.pb.h>
#include <google/cloud/networksecurity/v1/network_security.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using NetworkSecurityRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        networksecurity_v1_internal::NetworkSecurityRetryTraits>;

using NetworkSecurityLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        networksecurity_v1_internal::NetworkSecurityRetryTraits>;

using NetworkSecurityLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        networksecurity_v1_internal::NetworkSecurityRetryTraits>;

/**
 * The `NetworkSecurityConnection` object for `NetworkSecurityClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetworkSecurityClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NetworkSecurityClient`.
 *
 * To create a concrete instance, see `MakeNetworkSecurityConnection()`.
 *
 * For mocking, see `networksecurity_v1_mocks::MockNetworkSecurityConnection`.
 */
class NetworkSecurityConnection {
 public:
  virtual ~NetworkSecurityConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::networksecurity::v1::AuthorizationPolicy>
  ListAuthorizationPolicies(
      google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
          request);

  virtual StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
  GetAuthorizationPolicy(
      google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  CreateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>>
  UpdateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request);

  virtual StreamRange<google::cloud::networksecurity::v1::ServerTlsPolicy>
  ListServerTlsPolicies(
      google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request);

  virtual StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
  GetServerTlsPolicy(
      google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  CreateServerTlsPolicy(
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>>
  UpdateServerTlsPolicy(
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteServerTlsPolicy(
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request);

  virtual StreamRange<google::cloud::networksecurity::v1::ClientTlsPolicy>
  ListClientTlsPolicies(
      google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request);

  virtual StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
  GetClientTlsPolicy(
      google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  CreateClientTlsPolicy(
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request);

  virtual future<StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>>
  UpdateClientTlsPolicy(
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networksecurity::v1::OperationMetadata>>
  DeleteClientTlsPolicy(
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request);
};

/**
 * A factory function to construct an object of type
 * `NetworkSecurityConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of NetworkSecurityClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `NetworkSecurityConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::networksecurity_v1::NetworkSecurityPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `NetworkSecurityConnection` created
 * by this function.
 */
std::shared_ptr<NetworkSecurityConnection> MakeNetworkSecurityConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_H
