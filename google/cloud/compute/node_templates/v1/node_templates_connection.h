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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H

#include "google/cloud/compute/node_templates/v1/internal/node_templates_retry_traits.h"
#include "google/cloud/compute/node_templates/v1/node_templates_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_templates/v1/node_templates.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using NodeTemplatesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_node_templates_v1_internal::NodeTemplatesRetryTraits>;

using NodeTemplatesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_node_templates_v1_internal::NodeTemplatesRetryTraits>;

using NodeTemplatesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_node_templates_v1_internal::NodeTemplatesRetryTraits>;

/**
 * The `NodeTemplatesConnection` object for `NodeTemplatesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NodeTemplatesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NodeTemplatesClient`.
 *
 * To create a concrete instance, see `MakeNodeTemplatesConnection()`.
 *
 * For mocking, see
 * `compute_node_templates_v1_mocks::MockNodeTemplatesConnection`.
 */
class NodeTemplatesConnection {
 public:
  virtual ~NodeTemplatesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>
  AggregatedListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::
          AggregatedListNodeTemplatesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteNodeTemplates(google::cloud::cpp::compute::node_templates::v1::
                          DeleteNodeTemplatesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NodeTemplate>
  GetNodeTemplates(google::cloud::cpp::compute::node_templates::v1::
                       GetNodeTemplatesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          GetIamPolicyRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertNodeTemplates(google::cloud::cpp::compute::node_templates::v1::
                          InsertNodeTemplatesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NodeTemplate>
  ListNodeTemplates(
      google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest
          request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::node_templates::v1::
          SetIamPolicyRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::node_templates::v1::
                         TestIamPermissionsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_NODE_TEMPLATES_CONNECTION_H
