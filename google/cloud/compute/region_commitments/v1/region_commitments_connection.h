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
// source: google/cloud/compute/region_commitments/v1/region_commitments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CONNECTION_H

#include "google/cloud/compute/region_commitments/v1/internal/region_commitments_retry_traits.h"
#include "google/cloud/compute/region_commitments/v1/region_commitments_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_commitments/v1/region_commitments.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionCommitmentsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_region_commitments_v1_internal::RegionCommitmentsRetryTraits>;

using RegionCommitmentsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_region_commitments_v1_internal::RegionCommitmentsRetryTraits>;

using RegionCommitmentsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_commitments_v1_internal::RegionCommitmentsRetryTraits>;

/**
 * The `RegionCommitmentsConnection` object for `RegionCommitmentsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionCommitmentsClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionCommitmentsClient`.
 *
 * To create a concrete instance, see `MakeRegionCommitmentsConnection()`.
 *
 * For mocking, see
 * `compute_region_commitments_v1_mocks::MockRegionCommitmentsConnection`.
 */
class RegionCommitmentsConnection {
 public:
  virtual ~RegionCommitmentsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::CommitmentAggregatedList>
  AggregatedListRegionCommitments(
      google::cloud::cpp::compute::region_commitments::v1::
          AggregatedListRegionCommitmentsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::Commitment>
  GetRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                           GetRegionCommitmentsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                              InsertRegionCommitmentsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::Commitment>
  ListRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                            ListRegionCommitmentsRequest request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateRegionCommitments(google::cloud::cpp::compute::region_commitments::v1::
                              UpdateRegionCommitmentsRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_REGION_COMMITMENTS_CONNECTION_H
