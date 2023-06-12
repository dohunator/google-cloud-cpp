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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CLIENT_H

#include "google/cloud/composer/v1/environments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Managed Apache Airflow Environments.
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
class EnvironmentsClient {
 public:
  explicit EnvironmentsClient(
      std::shared_ptr<EnvironmentsConnection> connection, Options opts = {});
  ~EnvironmentsClient();

  ///@{
  /// @name Copy and move support
  EnvironmentsClient(EnvironmentsClient const&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient const&) = default;
  EnvironmentsClient(EnvironmentsClient&&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Create a new environment.
  ///
  /// @param parent  The parent must be of the form
  ///  "projects/{projectId}/locations/{locationId}".
  /// @param environment  The environment to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.Environment] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.CreateEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L129}
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  ///
  // clang-format on
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(
      std::string const& parent,
      google::cloud::orchestration::airflow::service::v1::Environment const&
          environment,
      Options opts = {});

  // clang-format off
  ///
  /// Create a new environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.CreateEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.Environment] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.CreateEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L129}
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  ///
  // clang-format on
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        CreateEnvironmentRequest const& request,
                    Options opts = {});

  // clang-format off
  ///
  /// Get an existing environment.
  ///
  /// @param name  The resource name of the environment to get, in the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.orchestration.airflow.service.v1.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.GetEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L139}
  ///
  // clang-format on
  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Get an existing environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.GetEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.orchestration.airflow.service.v1.Environment])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.GetEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L139}
  ///
  // clang-format on
  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request,
                 Options opts = {});

  // clang-format off
  ///
  /// List environments.
  ///
  /// @param parent  List environments in the given project and location, in the form:
  ///  "projects/{projectId}/locations/{locationId}"
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
  ///     [google.cloud.orchestration.airflow.service.v1.Environment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.ListEnvironmentsRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L146}
  ///
  // clang-format on
  StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// List environments.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.ListEnvironmentsRequest].
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
  ///     [google.cloud.orchestration.airflow.service.v1.Environment], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.ListEnvironmentsRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L146}
  ///
  // clang-format on
  StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest request,
                   Options opts = {});

  // clang-format off
  ///
  /// Update an environment.
  ///
  /// @param name  The relative resource name of the environment to update, in the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param environment  A patch environment. Fields specified by the `updateMask` will be copied
  ///  from the patch environment into the environment under update.
  /// @param update_mask  Required. A comma-separated list of paths, relative to `Environment`, of
  ///  fields to update.
  ///  For example, to set the version of scikit-learn to install in the
  ///  environment to 0.19.0 and to remove an existing installation of
  ///  numpy, the `updateMask` parameter would include the following two
  ///  `paths` values: "config.softwareConfig.pypiPackages.scikit-learn" and
  ///  "config.softwareConfig.pypiPackages.numpy".
  ///  @n
  ///  For more information, see [UpdateEnvironmentRequest][google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.Environment] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L175}
  ///
  // clang-format on
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(
      std::string const& name,
      google::cloud::orchestration::airflow::service::v1::Environment const&
          environment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Update an environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.Environment] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.Environment]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1083}
  /// [google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L175}
  ///
  // clang-format on
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        UpdateEnvironmentRequest const& request,
                    Options opts = {});

  // clang-format off
  ///
  /// Delete an environment.
  ///
  /// @param name  The environment to delete, in the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.DeleteEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L168}
  /// [google.cloud.orchestration.airflow.service.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Delete an environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.DeleteEnvironmentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.OperationMetadata] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.DeleteEnvironmentRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L168}
  /// [google.cloud.orchestration.airflow.service.v1.OperationMetadata]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(google::cloud::orchestration::airflow::service::v1::
                        DeleteEnvironmentRequest const& request,
                    Options opts = {});

  // clang-format off
  ///
  /// Creates a snapshots of a Cloud Composer environment.
  ///
  /// As a result of this operation, snapshot of environment's state is stored
  /// in a location specified in the SaveSnapshotRequest.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.SaveSnapshotRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.SaveSnapshotResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.SaveSnapshotRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L311}
  /// [google.cloud.orchestration.airflow.service.v1.SaveSnapshotResponse]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L322}
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
  SaveSnapshot(google::cloud::orchestration::airflow::service::v1::
                   SaveSnapshotRequest const& request,
               Options opts = {});

  // clang-format off
  ///
  /// Loads a snapshot of a Cloud Composer environment.
  ///
  /// As a result of this operation, a snapshot of environment's specified in
  /// LoadSnapshotRequest is loaded into the environment.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.orchestration.airflow.service.v1.LoadSnapshotRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.orchestration.airflow.service.v1.LoadSnapshotResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.orchestration.airflow.service.v1.LoadSnapshotRequest]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L331}
  /// [google.cloud.orchestration.airflow.service.v1.LoadSnapshotResponse]: @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L358}
  ///
  // clang-format on
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
  LoadSnapshot(google::cloud::orchestration::airflow::service::v1::
                   LoadSnapshotRequest const& request,
               Options opts = {});

 private:
  std::shared_ptr<EnvironmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CLIENT_H
