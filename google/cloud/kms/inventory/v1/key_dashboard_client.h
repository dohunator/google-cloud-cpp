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
// source: google/cloud/kms/inventory/v1/key_dashboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CLIENT_H

#include "google/cloud/kms/inventory/v1/key_dashboard_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Provides a cross-region view of all Cloud KMS keys in a given Cloud project.
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
class KeyDashboardServiceClient {
 public:
  explicit KeyDashboardServiceClient(
      std::shared_ptr<KeyDashboardServiceConnection> connection,
      Options opts = {});
  ~KeyDashboardServiceClient();

  ///@{
  /// @name Copy and move support
  KeyDashboardServiceClient(KeyDashboardServiceClient const&) = default;
  KeyDashboardServiceClient& operator=(KeyDashboardServiceClient const&) =
      default;
  KeyDashboardServiceClient(KeyDashboardServiceClient&&) = default;
  KeyDashboardServiceClient& operator=(KeyDashboardServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(KeyDashboardServiceClient const& a,
                         KeyDashboardServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(KeyDashboardServiceClient const& a,
                         KeyDashboardServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns cryptographic keys managed by Cloud KMS in a given Cloud project.
  /// Note that this data is sourced from snapshots, meaning it may not
  /// completely reflect the actual state of key metadata at call time.
  ///
  /// @param parent  Required. The Google Cloud project for which to retrieve key metadata, in
  ///  the format `projects/*`
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
  ///     [google.cloud.kms.v1.CryptoKey], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.inventory.v1.ListCryptoKeysRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_dashboard_service.proto#L52}
  /// [google.cloud.kms.v1.CryptoKey]: @googleapis_reference_link{google/cloud/kms/v1/resources.proto#L57}
  ///
  // clang-format on
  StreamRange<google::cloud::kms::v1::CryptoKey> ListCryptoKeys(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns cryptographic keys managed by Cloud KMS in a given Cloud project.
  /// Note that this data is sourced from snapshots, meaning it may not
  /// completely reflect the actual state of key metadata at call time.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.kms.inventory.v1.ListCryptoKeysRequest].
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
  ///     [google.cloud.kms.v1.CryptoKey], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.kms.inventory.v1.ListCryptoKeysRequest]: @googleapis_reference_link{google/cloud/kms/inventory/v1/key_dashboard_service.proto#L52}
  /// [google.cloud.kms.v1.CryptoKey]: @googleapis_reference_link{google/cloud/kms/v1/resources.proto#L57}
  ///
  // clang-format on
  StreamRange<google::cloud::kms::v1::CryptoKey> ListCryptoKeys(
      google::cloud::kms::inventory::v1::ListCryptoKeysRequest request,
      Options opts = {});

 private:
  std::shared_ptr<KeyDashboardServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CLIENT_H
