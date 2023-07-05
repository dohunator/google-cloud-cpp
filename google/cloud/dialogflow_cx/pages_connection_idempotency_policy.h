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
// source: google/cloud/dialogflow/cx/v3/page.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/page.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PagesConnectionIdempotencyPolicy {
 public:
  virtual ~PagesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PagesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListPages(
      google::cloud::dialogflow::cx::v3::ListPagesRequest request);

  virtual google::cloud::Idempotency GetPage(
      google::cloud::dialogflow::cx::v3::GetPageRequest const& request);

  virtual google::cloud::Idempotency CreatePage(
      google::cloud::dialogflow::cx::v3::CreatePageRequest const& request);

  virtual google::cloud::Idempotency UpdatePage(
      google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request);

  virtual google::cloud::Idempotency DeletePage(
      google::cloud::dialogflow::cx::v3::DeletePageRequest const& request);
};

std::unique_ptr<PagesConnectionIdempotencyPolicy>
MakeDefaultPagesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_IDEMPOTENCY_POLICY_H
