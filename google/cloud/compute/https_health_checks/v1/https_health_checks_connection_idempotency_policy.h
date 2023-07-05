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
// source: google/cloud/compute/https_health_checks/v1/https_health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_HTTPS_HEALTH_CHECKS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_HTTPS_HEALTH_CHECKS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/https_health_checks/v1/https_health_checks.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_https_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class HttpsHealthChecksConnectionIdempotencyPolicy {
 public:
  virtual ~HttpsHealthChecksConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<HttpsHealthChecksConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency DeleteHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          DeleteHttpsHealthChecksRequest const& request);

  virtual google::cloud::Idempotency GetHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          GetHttpsHealthChecksRequest const& request);

  virtual google::cloud::Idempotency InsertHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          InsertHttpsHealthChecksRequest const& request);

  virtual google::cloud::Idempotency ListHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          ListHttpsHealthChecksRequest request);

  virtual google::cloud::Idempotency PatchHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          PatchHttpsHealthChecksRequest const& request);

  virtual google::cloud::Idempotency UpdateHttpsHealthChecks(
      google::cloud::cpp::compute::https_health_checks::v1::
          UpdateHttpsHealthChecksRequest const& request);
};

std::unique_ptr<HttpsHealthChecksConnectionIdempotencyPolicy>
MakeDefaultHttpsHealthChecksConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_https_health_checks_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HTTPS_HEALTH_CHECKS_V1_HTTPS_HEALTH_CHECKS_CONNECTION_IDEMPOTENCY_POLICY_H
