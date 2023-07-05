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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/knowledge_base.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class KnowledgeBasesConnectionIdempotencyPolicy {
 public:
  virtual ~KnowledgeBasesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<KnowledgeBasesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListKnowledgeBases(
      google::cloud::dialogflow::v2::ListKnowledgeBasesRequest request);

  virtual google::cloud::Idempotency GetKnowledgeBase(
      google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request);

  virtual google::cloud::Idempotency CreateKnowledgeBase(
      google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request);

  virtual google::cloud::Idempotency DeleteKnowledgeBase(
      google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request);

  virtual google::cloud::Idempotency UpdateKnowledgeBase(
      google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request);
};

std::unique_ptr<KnowledgeBasesConnectionIdempotencyPolicy>
MakeDefaultKnowledgeBasesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CONNECTION_IDEMPOTENCY_POLICY_H
