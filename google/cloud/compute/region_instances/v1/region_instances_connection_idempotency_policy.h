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
// source: google/cloud/compute/region_instances/v1/region_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_instances/v1/region_instances.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionInstancesConnectionIdempotencyPolicy {
 public:
  virtual ~RegionInstancesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RegionInstancesConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency BulkInsert(
      google::cloud::cpp::compute::region_instances::v1::
          BulkInsertRequest const& request);
};

std::unique_ptr<RegionInstancesConnectionIdempotencyPolicy>
MakeDefaultRegionInstancesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instances_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCES_V1_REGION_INSTANCES_CONNECTION_IDEMPOTENCY_POLICY_H
