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
// source: google/cloud/dialogflow/v2/context.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/context.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContextsConnectionIdempotencyPolicy {
 public:
  virtual ~ContextsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ContextsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListContexts(
      google::cloud::dialogflow::v2::ListContextsRequest request);

  virtual google::cloud::Idempotency GetContext(
      google::cloud::dialogflow::v2::GetContextRequest const& request);

  virtual google::cloud::Idempotency CreateContext(
      google::cloud::dialogflow::v2::CreateContextRequest const& request);

  virtual google::cloud::Idempotency UpdateContext(
      google::cloud::dialogflow::v2::UpdateContextRequest const& request);

  virtual google::cloud::Idempotency DeleteContext(
      google::cloud::dialogflow::v2::DeleteContextRequest const& request);

  virtual google::cloud::Idempotency DeleteAllContexts(
      google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request);
};

std::unique_ptr<ContextsConnectionIdempotencyPolicy>
MakeDefaultContextsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_CONTEXTS_CONNECTION_IDEMPOTENCY_POLICY_H
