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
// google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_REGION_SSL_CERTIFICATES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_REGION_SSL_CERTIFICATES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_ssl_certificates/v1/region_ssl_certificates.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_ssl_certificates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionSslCertificatesConnectionIdempotencyPolicy {
 public:
  virtual ~RegionSslCertificatesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RegionSslCertificatesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency DeleteRegionSslCertificates(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          DeleteRegionSslCertificatesRequest const& request);

  virtual google::cloud::Idempotency GetRegionSslCertificates(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          GetRegionSslCertificatesRequest const& request);

  virtual google::cloud::Idempotency InsertRegionSslCertificates(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          InsertRegionSslCertificatesRequest const& request);

  virtual google::cloud::Idempotency ListRegionSslCertificates(
      google::cloud::cpp::compute::region_ssl_certificates::v1::
          ListRegionSslCertificatesRequest request);
};

std::unique_ptr<RegionSslCertificatesConnectionIdempotencyPolicy>
MakeDefaultRegionSslCertificatesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_certificates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_CERTIFICATES_V1_REGION_SSL_CERTIFICATES_CONNECTION_IDEMPOTENCY_POLICY_H
