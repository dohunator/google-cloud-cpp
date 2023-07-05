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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CONNECTION_H

#include "google/cloud/beyondcorp/appconnections/v1/app_connections_connection_idempotency_policy.h"
#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/beyondcorp/appconnections/v1/app_connections_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AppConnectionsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        beyondcorp_appconnections_v1_internal::
            AppConnectionsServiceRetryTraits>;

using AppConnectionsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        beyondcorp_appconnections_v1_internal::
            AppConnectionsServiceRetryTraits>;

using AppConnectionsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        beyondcorp_appconnections_v1_internal::
            AppConnectionsServiceRetryTraits>;

/**
 * The `AppConnectionsServiceConnection` object for
 * `AppConnectionsServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AppConnectionsServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `AppConnectionsServiceClient`.
 *
 * To create a concrete instance, see `MakeAppConnectionsServiceConnection()`.
 *
 * For mocking, see
 * `beyondcorp_appconnections_v1_mocks::MockAppConnectionsServiceConnection`.
 */
class AppConnectionsServiceConnection {
 public:
  virtual ~AppConnectionsServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>
  ListAppConnections(
      google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
          request);

  virtual StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
  GetAppConnection(google::cloud::beyondcorp::appconnections::v1::
                       GetAppConnectionRequest const& request);

  virtual future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  CreateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          CreateAppConnectionRequest const& request);

  virtual future<
      StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
  UpdateAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          UpdateAppConnectionRequest const& request);

  virtual future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                              AppConnectionOperationMetadata>>
  DeleteAppConnection(google::cloud::beyondcorp::appconnections::v1::
                          DeleteAppConnectionRequest const& request);

  virtual StreamRange<google::cloud::beyondcorp::appconnections::v1::
                          ResolveAppConnectionsResponse::AppConnectionDetails>
  ResolveAppConnections(google::cloud::beyondcorp::appconnections::v1::
                            ResolveAppConnectionsRequest request);
};

/**
 * A factory function to construct an object of type
 * `AppConnectionsServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * AppConnectionsServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AppConnectionsServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::beyondcorp_appconnections_v1::AppConnectionsServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AppConnectionsServiceConnection`
 * created by this function.
 */
std::shared_ptr<AppConnectionsServiceConnection>
MakeAppConnectionsServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_APPCONNECTIONS_V1_APP_CONNECTIONS_CONNECTION_H
