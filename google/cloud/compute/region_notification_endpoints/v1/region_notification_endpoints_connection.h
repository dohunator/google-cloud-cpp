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
// google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_H

#include "google/cloud/compute/region_notification_endpoints/v1/internal/region_notification_endpoints_retry_traits.h"
#include "google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_notification_endpoints/v1/region_notification_endpoints.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_notification_endpoints_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionNotificationEndpointsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_region_notification_endpoints_v1_internal::
            RegionNotificationEndpointsRetryTraits>;

using RegionNotificationEndpointsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_region_notification_endpoints_v1_internal::
            RegionNotificationEndpointsRetryTraits>;

using RegionNotificationEndpointsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_notification_endpoints_v1_internal::
            RegionNotificationEndpointsRetryTraits>;

/**
 * The `RegionNotificationEndpointsConnection` object for
 * `RegionNotificationEndpointsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionNotificationEndpointsClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionNotificationEndpointsClient`.
 *
 * To create a concrete instance, see
 * `MakeRegionNotificationEndpointsConnection()`.
 *
 * For mocking, see
 * `compute_region_notification_endpoints_v1_mocks::MockRegionNotificationEndpointsConnection`.
 */
class RegionNotificationEndpointsConnection {
 public:
  virtual ~RegionNotificationEndpointsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          DeleteRegionNotificationEndpointsRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::NotificationEndpoint>
  GetRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          GetRegionNotificationEndpointsRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          InsertRegionNotificationEndpointsRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::NotificationEndpoint>
  ListRegionNotificationEndpoints(
      google::cloud::cpp::compute::region_notification_endpoints::v1::
          ListRegionNotificationEndpointsRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_notification_endpoints_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NOTIFICATION_ENDPOINTS_V1_REGION_NOTIFICATION_ENDPOINTS_CONNECTION_H
