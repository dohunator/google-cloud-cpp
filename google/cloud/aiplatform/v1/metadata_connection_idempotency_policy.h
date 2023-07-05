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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/metadata_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetadataServiceConnectionIdempotencyPolicy {
 public:
  virtual ~MetadataServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateMetadataStore(
      google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request);

  virtual google::cloud::Idempotency GetMetadataStore(
      google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request);

  virtual google::cloud::Idempotency ListMetadataStores(
      google::cloud::aiplatform::v1::ListMetadataStoresRequest request);

  virtual google::cloud::Idempotency DeleteMetadataStore(
      google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request);

  virtual google::cloud::Idempotency CreateArtifact(
      google::cloud::aiplatform::v1::CreateArtifactRequest const& request);

  virtual google::cloud::Idempotency GetArtifact(
      google::cloud::aiplatform::v1::GetArtifactRequest const& request);

  virtual google::cloud::Idempotency ListArtifacts(
      google::cloud::aiplatform::v1::ListArtifactsRequest request);

  virtual google::cloud::Idempotency UpdateArtifact(
      google::cloud::aiplatform::v1::UpdateArtifactRequest const& request);

  virtual google::cloud::Idempotency DeleteArtifact(
      google::cloud::aiplatform::v1::DeleteArtifactRequest const& request);

  virtual google::cloud::Idempotency PurgeArtifacts(
      google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request);

  virtual google::cloud::Idempotency CreateContext(
      google::cloud::aiplatform::v1::CreateContextRequest const& request);

  virtual google::cloud::Idempotency GetContext(
      google::cloud::aiplatform::v1::GetContextRequest const& request);

  virtual google::cloud::Idempotency ListContexts(
      google::cloud::aiplatform::v1::ListContextsRequest request);

  virtual google::cloud::Idempotency UpdateContext(
      google::cloud::aiplatform::v1::UpdateContextRequest const& request);

  virtual google::cloud::Idempotency DeleteContext(
      google::cloud::aiplatform::v1::DeleteContextRequest const& request);

  virtual google::cloud::Idempotency PurgeContexts(
      google::cloud::aiplatform::v1::PurgeContextsRequest const& request);

  virtual google::cloud::Idempotency AddContextArtifactsAndExecutions(
      google::cloud::aiplatform::v1::
          AddContextArtifactsAndExecutionsRequest const& request);

  virtual google::cloud::Idempotency AddContextChildren(
      google::cloud::aiplatform::v1::AddContextChildrenRequest const& request);

  virtual google::cloud::Idempotency RemoveContextChildren(
      google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
          request);

  virtual google::cloud::Idempotency QueryContextLineageSubgraph(
      google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
          request);

  virtual google::cloud::Idempotency CreateExecution(
      google::cloud::aiplatform::v1::CreateExecutionRequest const& request);

  virtual google::cloud::Idempotency GetExecution(
      google::cloud::aiplatform::v1::GetExecutionRequest const& request);

  virtual google::cloud::Idempotency ListExecutions(
      google::cloud::aiplatform::v1::ListExecutionsRequest request);

  virtual google::cloud::Idempotency UpdateExecution(
      google::cloud::aiplatform::v1::UpdateExecutionRequest const& request);

  virtual google::cloud::Idempotency DeleteExecution(
      google::cloud::aiplatform::v1::DeleteExecutionRequest const& request);

  virtual google::cloud::Idempotency PurgeExecutions(
      google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request);

  virtual google::cloud::Idempotency AddExecutionEvents(
      google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request);

  virtual google::cloud::Idempotency QueryExecutionInputsAndOutputs(
      google::cloud::aiplatform::v1::
          QueryExecutionInputsAndOutputsRequest const& request);

  virtual google::cloud::Idempotency CreateMetadataSchema(
      google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
          request);

  virtual google::cloud::Idempotency GetMetadataSchema(
      google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request);

  virtual google::cloud::Idempotency ListMetadataSchemas(
      google::cloud::aiplatform::v1::ListMetadataSchemasRequest request);

  virtual google::cloud::Idempotency QueryArtifactLineageSubgraph(
      google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
          request);
};

std::unique_ptr<MetadataServiceConnectionIdempotencyPolicy>
MakeDefaultMetadataServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_METADATA_CONNECTION_IDEMPOTENCY_POLICY_H
