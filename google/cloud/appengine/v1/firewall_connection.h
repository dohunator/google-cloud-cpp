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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CONNECTION_H

#include "google/cloud/appengine/v1/firewall_connection_idempotency_policy.h"
#include "google/cloud/appengine/v1/internal/firewall_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/appengine/v1/appengine.pb.h>
#include <google/appengine/v1/operation.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using FirewallRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    appengine_v1_internal::FirewallRetryTraits>;

using FirewallLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        appengine_v1_internal::FirewallRetryTraits>;

using FirewallLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        appengine_v1_internal::FirewallRetryTraits>;

/**
 * The `FirewallConnection` object for `FirewallClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FirewallClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `FirewallClient`.
 *
 * To create a concrete instance, see `MakeFirewallConnection()`.
 *
 * For mocking, see `appengine_v1_mocks::MockFirewallConnection`.
 */
class FirewallConnection {
 public:
  virtual ~FirewallConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::appengine::v1::FirewallRule> ListIngressRules(
      google::appengine::v1::ListIngressRulesRequest request);

  virtual StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request);

  virtual StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      google::appengine::v1::CreateIngressRuleRequest const& request);

  virtual StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      google::appengine::v1::GetIngressRuleRequest const& request);

  virtual StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      google::appengine::v1::UpdateIngressRuleRequest const& request);

  virtual Status DeleteIngressRule(
      google::appengine::v1::DeleteIngressRuleRequest const& request);
};

/**
 * A factory function to construct an object of type `FirewallConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of FirewallClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FirewallConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::appengine_v1::FirewallPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `FirewallConnection` created by
 * this function.
 */
std::shared_ptr<FirewallConnection> MakeFirewallConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_FIREWALL_CONNECTION_H
