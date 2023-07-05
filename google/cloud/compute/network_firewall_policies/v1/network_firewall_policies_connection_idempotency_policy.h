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
// google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_firewall_policies/v1/network_firewall_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkFirewallPoliciesConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkFirewallPoliciesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworkFirewallPoliciesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AddAssociation(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddAssociationRequest const& request);

  virtual google::cloud::Idempotency AddRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          AddRuleRequest const& request);

  virtual google::cloud::Idempotency CloneRules(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          CloneRulesRequest const& request);

  virtual google::cloud::Idempotency DeleteNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          DeleteNetworkFirewallPoliciesRequest const& request);

  virtual google::cloud::Idempotency GetNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetNetworkFirewallPoliciesRequest const& request);

  virtual google::cloud::Idempotency GetAssociation(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetAssociationRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          GetRuleRequest const& request);

  virtual google::cloud::Idempotency InsertNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          InsertNetworkFirewallPoliciesRequest const& request);

  virtual google::cloud::Idempotency ListNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          ListNetworkFirewallPoliciesRequest request);

  virtual google::cloud::Idempotency PatchNetworkFirewallPolicies(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchNetworkFirewallPoliciesRequest const& request);

  virtual google::cloud::Idempotency PatchRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          PatchRuleRequest const& request);

  virtual google::cloud::Idempotency RemoveAssociation(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          RemoveAssociationRequest const& request);

  virtual google::cloud::Idempotency RemoveRule(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          RemoveRuleRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::network_firewall_policies::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<NetworkFirewallPoliciesConnectionIdempotencyPolicy>
MakeDefaultNetworkFirewallPoliciesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_FIREWALL_POLICIES_V1_NETWORK_FIREWALL_POLICIES_CONNECTION_IDEMPOTENCY_POLICY_H
