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
// google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/public_advertised_prefixes/v1/public_advertised_prefixes.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_advertised_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PublicAdvertisedPrefixesConnectionIdempotencyPolicy {
 public:
  virtual ~PublicAdvertisedPrefixesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<PublicAdvertisedPrefixesConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency DeletePublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          DeletePublicAdvertisedPrefixesRequest const& request);

  virtual google::cloud::Idempotency GetPublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          GetPublicAdvertisedPrefixesRequest const& request);

  virtual google::cloud::Idempotency InsertPublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          InsertPublicAdvertisedPrefixesRequest const& request);

  virtual google::cloud::Idempotency ListPublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          ListPublicAdvertisedPrefixesRequest request);

  virtual google::cloud::Idempotency PatchPublicAdvertisedPrefixes(
      google::cloud::cpp::compute::public_advertised_prefixes::v1::
          PatchPublicAdvertisedPrefixesRequest const& request);
};

std::unique_ptr<PublicAdvertisedPrefixesConnectionIdempotencyPolicy>
MakeDefaultPublicAdvertisedPrefixesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_advertised_prefixes_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_ADVERTISED_PREFIXES_V1_PUBLIC_ADVERTISED_PREFIXES_CONNECTION_IDEMPOTENCY_POLICY_H
