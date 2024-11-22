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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_RESOURCE_SETTINGS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_RESOURCE_SETTINGS_CLIENT_H

#include "google/cloud/resourcesettings/v1/resource_settings_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace resourcesettings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// An interface to interact with resource settings and setting values
/// throughout the resource hierarchy.
///
/// Services may surface a number of settings for users to control how their
/// resources behave. Values of settings applied on a given Cloud resource are
/// evaluated hierarchically and inherited by all descendants of that resource.
///
/// For all requests, returns a `google.rpc.Status` with
/// `google.rpc.Code.PERMISSION_DENIED` if the IAM check fails or the `parent`
/// resource is not in a Cloud Organization.
/// For all requests, returns a `google.rpc.Status` with
/// `google.rpc.Code.INVALID_ARGUMENT` if the request is malformed.
/// (== deprecation_description Resource Settings is deprecated. As of November
/// 7, 2023, no organizations will be onboarded for any of the enabled settings,
/// and the service will be shut down on October 1, 2024. ==)
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class GOOGLE_CLOUD_CPP_DEPRECATED(
    "ResourceSettingsService has been deprecated and will be turned down in "
    "the future.") ResourceSettingsServiceClient {
 public:
  explicit ResourceSettingsServiceClient(
      std::shared_ptr<ResourceSettingsServiceConnection> connection,
      Options opts = {});
  ~ResourceSettingsServiceClient();

  ///@{
  /// @name Copy and move support
  ResourceSettingsServiceClient(ResourceSettingsServiceClient const&) = default;
  ResourceSettingsServiceClient& operator=(
      ResourceSettingsServiceClient const&) = default;
  ResourceSettingsServiceClient(ResourceSettingsServiceClient&&) = default;
  ResourceSettingsServiceClient& operator=(ResourceSettingsServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ResourceSettingsServiceClient const& a,
                         ResourceSettingsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ResourceSettingsServiceClient const& a,
                         ResourceSettingsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists all the settings that are available on the Cloud resource `parent`.
  ///
  /// @param parent  Required. The Cloud resource that parents the setting. Must be in one of
  ///  the following forms:
  ///  @n
  ///  * `projects/{project_number}`
  ///  * `projects/{project_id}`
  ///  * `folders/{folder_id}`
  ///  * `organizations/{organization_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.resourcesettings.v1.Setting], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcesettings.v1.ListSettingsRequest]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L243}
  /// [google.cloud.resourcesettings.v1.Setting]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L112}
  ///
  // clang-format on
  StreamRange<google::cloud::resourcesettings::v1::Setting> ListSettings(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists all the settings that are available on the Cloud resource `parent`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.resourcesettings.v1.ListSettingsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.resourcesettings.v1.Setting], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcesettings.v1.ListSettingsRequest]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L243}
  /// [google.cloud.resourcesettings.v1.Setting]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L112}
  ///
  // clang-format on
  StreamRange<google::cloud::resourcesettings::v1::Setting> ListSettings(
      google::cloud::resourcesettings::v1::ListSettingsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a setting.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// setting does not exist.
  ///
  /// @param name  Required. The name of the setting to get. See
  ///  [Setting][google.cloud.resourcesettings.v1.Setting] for naming
  ///  requirements.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.resourcesettings.v1.Setting])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcesettings.v1.GetSettingRequest]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L276}
  /// [google.cloud.resourcesettings.v1.Setting]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L112}
  ///
  // clang-format on
  StatusOr<google::cloud::resourcesettings::v1::Setting> GetSetting(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a setting.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// setting does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.resourcesettings.v1.GetSettingRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.resourcesettings.v1.Setting])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcesettings.v1.GetSettingRequest]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L276}
  /// [google.cloud.resourcesettings.v1.Setting]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L112}
  ///
  // clang-format on
  StatusOr<google::cloud::resourcesettings::v1::Setting> GetSetting(
      google::cloud::resourcesettings::v1::GetSettingRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a setting.
  ///
  /// Returns a `google.rpc.Status` with `google.rpc.Code.NOT_FOUND` if the
  /// setting does not exist.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.FAILED_PRECONDITION` if
  /// the setting is flagged as read only.
  /// Returns a `google.rpc.Status` with `google.rpc.Code.ABORTED` if the etag
  /// supplied in the request does not match the persisted etag of the setting
  /// value.
  ///
  /// On success, the response will contain only `name`, `local_value` and
  /// `etag`.  The `metadata` and `effective_value` cannot be updated through
  /// this API.
  ///
  /// Note: the supplied setting will perform a full overwrite of the
  /// `local_value` field.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.resourcesettings.v1.UpdateSettingRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.resourcesettings.v1.Setting])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.resourcesettings.v1.Setting]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L112}
  /// [google.cloud.resourcesettings.v1.UpdateSettingRequest]: @googleapis_reference_link{google/cloud/resourcesettings/v1/resource_settings.proto#L292}
  ///
  // clang-format on
  StatusOr<google::cloud::resourcesettings::v1::Setting> UpdateSetting(
      google::cloud::resourcesettings::v1::UpdateSettingRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ResourceSettingsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_RESOURCE_SETTINGS_CLIENT_H
