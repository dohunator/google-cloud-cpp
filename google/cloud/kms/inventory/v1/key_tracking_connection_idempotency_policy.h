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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/kms/inventory/v1/key_tracking_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class KeyTrackingServiceConnectionIdempotencyPolicy {
 public:
  virtual ~KeyTrackingServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<KeyTrackingServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency GetProtectedResourcesSummary(
      google::cloud::kms::inventory::v1::
          GetProtectedResourcesSummaryRequest const& request);

  virtual google::cloud::Idempotency SearchProtectedResources(
      google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest
          request);
};

std::unique_ptr<KeyTrackingServiceConnectionIdempotencyPolicy>
MakeDefaultKeyTrackingServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_IDEMPOTENCY_POLICY_H
