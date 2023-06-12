// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_LOGGING_SERVICE_V2_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_LOGGING_SERVICE_V2_CLIENT_H

#include "google/cloud/logging/v2/logging_service_v2_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for ingesting and querying logs.
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
class LoggingServiceV2Client {
 public:
  explicit LoggingServiceV2Client(
      std::shared_ptr<LoggingServiceV2Connection> connection,
      Options opts = {});
  ~LoggingServiceV2Client();

  ///@{
  /// @name Copy and move support
  LoggingServiceV2Client(LoggingServiceV2Client const&) = default;
  LoggingServiceV2Client& operator=(LoggingServiceV2Client const&) = default;
  LoggingServiceV2Client(LoggingServiceV2Client&&) = default;
  LoggingServiceV2Client& operator=(LoggingServiceV2Client&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(LoggingServiceV2Client const& a,
                         LoggingServiceV2Client const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LoggingServiceV2Client const& a,
                         LoggingServiceV2Client const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes all the log entries in a log for the _Default Log Bucket. The log
  /// reappears if it receives new entries. Log entries written shortly before
  /// the delete operation might not be deleted. Entries received after the
  /// delete operation with a timestamp before the operation will be deleted.
  ///
  /// @param log_name  Required. The resource name of the log to delete:
  ///  @n
  ///  * `projects/[PROJECT_ID]/logs/[LOG_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/logs/[LOG_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/logs/[LOG_ID]`
  ///  * `folders/[FOLDER_ID]/logs/[LOG_ID]`
  ///  @n
  ///  `[LOG_ID]` must be URL-encoded. For example,
  ///  `"projects/my-project-id/logs/syslog"`,
  ///  `"organizations/123/logs/cloudaudit.googleapis.com%2Factivity"`.
  ///  @n
  ///  For more information about log names, see
  ///  [LogEntry][google.logging.v2.LogEntry].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.DeleteLogRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L136}
  ///
  // clang-format on
  Status DeleteLog(std::string const& log_name, Options opts = {});

  // clang-format off
  ///
  /// Deletes all the log entries in a log for the _Default Log Bucket. The log
  /// reappears if it receives new entries. Log entries written shortly before
  /// the delete operation might not be deleted. Entries received after the
  /// delete operation with a timestamp before the operation will be deleted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.DeleteLogRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.DeleteLogRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L136}
  ///
  // clang-format on
  Status DeleteLog(google::logging::v2::DeleteLogRequest const& request,
                   Options opts = {});

  // clang-format off
  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param log_name  Optional. A default log resource name that is assigned to all log entries
  ///  in `entries` that do not specify a value for `log_name`:
  ///  @n
  ///  * `projects/[PROJECT_ID]/logs/[LOG_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/logs/[LOG_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/logs/[LOG_ID]`
  ///  * `folders/[FOLDER_ID]/logs/[LOG_ID]`
  ///  @n
  ///  `[LOG_ID]` must be URL-encoded. For example:
  ///  @n
  ///      "projects/my-project-id/logs/syslog"
  ///      "organizations/123/logs/cloudaudit.googleapis.com%2Factivity"
  ///  @n
  ///  The permission `logging.logEntries.create` is needed on each project,
  ///  organization, billing account, or folder that is receiving new log
  ///  entries, whether the resource is specified in `logName` or in an
  ///  individual log entry.
  /// @param resource  Optional. A default monitored resource object that is assigned to all log
  ///  entries in `entries` that do not specify a value for `resource`. Example:
  ///  @n
  ///      { "type": "gce_instance",
  ///        "labels": {
  ///          "zone": "us-central1-a", "instance_id": "00000000000000000000" }}
  ///  @n
  ///  See [LogEntry][google.logging.v2.LogEntry].
  /// @param labels  Optional. Default labels that are added to the `labels` field of all log
  ///  entries in `entries`. If a log entry already has a label with the same key
  ///  as a label in this parameter, then the log entry's label is not changed.
  ///  See [LogEntry][google.logging.v2.LogEntry].
  /// @param entries  Required. The log entries to send to Logging. The order of log
  ///  entries in this list does not matter. Values supplied in this method's
  ///  `log_name`, `resource`, and `labels` fields are copied into those log
  ///  entries in this list that do not include values for their corresponding
  ///  fields.
  ///  @n
  ///  For more information, see [WriteLogEntriesRequest][google.logging.v2.WriteLogEntriesRequest].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.WriteLogEntriesResponse])
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
  /// [google.logging.v2.WriteLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L157}
  /// [google.logging.v2.WriteLogEntriesResponse]: @googleapis_reference_link{google/logging/v2/logging.proto#L239}
  ///
  // clang-format on
  StatusOr<google::logging::v2::WriteLogEntriesResponse> WriteLogEntries(
      std::string const& log_name,
      google::api::MonitoredResource const& resource,
      std::map<std::string, std::string> const& labels,
      std::vector<google::logging::v2::LogEntry> const& entries,
      Options opts = {});

  // clang-format off
  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.WriteLogEntriesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.WriteLogEntriesResponse])
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
  /// [google.logging.v2.WriteLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L157}
  /// [google.logging.v2.WriteLogEntriesResponse]: @googleapis_reference_link{google/logging/v2/logging.proto#L239}
  ///
  // clang-format on
  StatusOr<google::logging::v2::WriteLogEntriesResponse> WriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists log entries.  Use this method to retrieve log entries that originated
  /// from a project/folder/organization/billing account.  For ways to export log
  /// entries, see [Exporting
  /// Logs](https://cloud.google.com/logging/docs/export).
  ///
  /// @param resource_names  Required. Names of one or more parent resources from which to
  ///  retrieve log entries:
  ///  @n
  ///  *  `projects/[PROJECT_ID]`
  ///  *  `organizations/[ORGANIZATION_ID]`
  ///  *  `billingAccounts/[BILLING_ACCOUNT_ID]`
  ///  *  `folders/[FOLDER_ID]`
  ///  @n
  ///  May alternatively be one or more views:
  ///  @n
  ///   * `projects/[PROJECT_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]`
  ///   * `organizations/[ORGANIZATION_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]`
  ///   * `billingAccounts/[BILLING_ACCOUNT_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]`
  ///   * `folders/[FOLDER_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]`
  ///  @n
  ///  Projects listed in the `project_ids` field are added to this list.
  ///  A maximum of 100 resources may be specified in a single request.
  /// @param filter  Optional. Only log entries that match the filter are returned.  An empty
  ///  filter matches all log entries in the resources listed in `resource_names`.
  ///  Referencing a parent resource that is not listed in `resource_names` will
  ///  cause the filter to return no results. The maximum length of a filter is
  ///  20,000 characters.
  /// @param order_by  Optional. How the results should be sorted.  Presently, the only permitted
  ///  values are `"timestamp asc"` (default) and `"timestamp desc"`. The first
  ///  option returns entries in order of increasing values of
  ///  `LogEntry.timestamp` (oldest first), and the second option returns entries
  ///  in order of decreasing timestamps (newest first).  Entries with equal
  ///  timestamps are returned in order of their `insert_id` values.
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
  ///     [google.logging.v2.LogEntry], or rather,
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
  /// [google.logging.v2.ListLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L253}
  /// [google.logging.v2.LogEntry]: @googleapis_reference_link{google/logging/v2/log_entry.proto#L38}
  ///
  // clang-format on
  StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      std::vector<std::string> const& resource_names, std::string const& filter,
      std::string const& order_by, Options opts = {});

  // clang-format off
  ///
  /// Lists log entries.  Use this method to retrieve log entries that originated
  /// from a project/folder/organization/billing account.  For ways to export log
  /// entries, see [Exporting
  /// Logs](https://cloud.google.com/logging/docs/export).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.ListLogEntriesRequest].
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
  ///     [google.logging.v2.LogEntry], or rather,
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
  /// [google.logging.v2.ListLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L253}
  /// [google.logging.v2.LogEntry]: @googleapis_reference_link{google/logging/v2/log_entry.proto#L38}
  ///
  // clang-format on
  StreamRange<google::logging::v2::LogEntry> ListLogEntries(
      google::logging::v2::ListLogEntriesRequest request, Options opts = {});

  // clang-format off
  ///
  /// Lists the descriptors for monitored resource types used by Logging.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.ListMonitoredResourceDescriptorsRequest].
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
  ///     [google.api.MonitoredResourceDescriptor], or rather,
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
  /// [google.api.MonitoredResourceDescriptor]: @googleapis_reference_link{google/api/monitored_resource.proto#L41}
  /// [google.logging.v2.ListMonitoredResourceDescriptorsRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L327}
  ///
  // clang-format on
  StreamRange<google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      google::logging::v2::ListMonitoredResourceDescriptorsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists the logs in projects, organizations, folders, or billing accounts.
  /// Only logs that have entries are listed.
  ///
  /// @param parent  Required. The resource name to list logs for:
  ///  @n
  ///  *  `projects/[PROJECT_ID]`
  ///  *  `organizations/[ORGANIZATION_ID]`
  ///  *  `billingAccounts/[BILLING_ACCOUNT_ID]`
  ///  *  `folders/[FOLDER_ID]`
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
  ///     On a successful iteration the `StatusOr<T>` contains a
  ///     [`std::string`].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.ListLogsRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L352}
  ///
  // clang-format on
  StreamRange<std::string> ListLogs(std::string const& parent,
                                    Options opts = {});

  // clang-format off
  ///
  /// Lists the logs in projects, organizations, folders, or billing accounts.
  /// Only logs that have entries are listed.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.ListLogsRequest].
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
  ///     On a successful iteration the `StatusOr<T>` contains a
  ///     [`std::string`].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.ListLogsRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L352}
  ///
  // clang-format on
  StreamRange<std::string> ListLogs(
      google::logging::v2::ListLogsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Streaming read of log entries as they are ingested. Until the stream is
  /// terminated, it will continue reading logs.
  ///
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return An object representing the bidirectional streaming
  ///     RPC. Applications can send multiple request messages and receive
  ///     multiple response messages through this API. Bidirectional streaming
  ///     RPCs can impose restrictions on the sequence of request and response
  ///     messages. Please consult the service documentation for details.
  ///     The request message type ([google.logging.v2.TailLogEntriesRequest]) and response messages
  ///     ([google.logging.v2.TailLogEntriesResponse]) are mapped to C++ classes using the
  ///     [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.TailLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L414}
  /// [google.logging.v2.TailLogEntriesResponse]: @googleapis_reference_link{google/logging/v2/logging.proto#L446}
  ///
  // clang-format on
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::logging::v2::TailLogEntriesRequest,
      google::logging::v2::TailLogEntriesResponse>>
  AsyncTailLogEntries(Options opts = {});

  // clang-format off
  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param log_name  Optional. A default log resource name that is assigned to all log entries
  ///  in `entries` that do not specify a value for `log_name`:
  ///  @n
  ///  * `projects/[PROJECT_ID]/logs/[LOG_ID]`
  ///  * `organizations/[ORGANIZATION_ID]/logs/[LOG_ID]`
  ///  * `billingAccounts/[BILLING_ACCOUNT_ID]/logs/[LOG_ID]`
  ///  * `folders/[FOLDER_ID]/logs/[LOG_ID]`
  ///  @n
  ///  `[LOG_ID]` must be URL-encoded. For example:
  ///  @n
  ///      "projects/my-project-id/logs/syslog"
  ///      "organizations/123/logs/cloudaudit.googleapis.com%2Factivity"
  ///  @n
  ///  The permission `logging.logEntries.create` is needed on each project,
  ///  organization, billing account, or folder that is receiving new log
  ///  entries, whether the resource is specified in `logName` or in an
  ///  individual log entry.
  /// @param resource  Optional. A default monitored resource object that is assigned to all log
  ///  entries in `entries` that do not specify a value for `resource`. Example:
  ///  @n
  ///      { "type": "gce_instance",
  ///        "labels": {
  ///          "zone": "us-central1-a", "instance_id": "00000000000000000000" }}
  ///  @n
  ///  See [LogEntry][google.logging.v2.LogEntry].
  /// @param labels  Optional. Default labels that are added to the `labels` field of all log
  ///  entries in `entries`. If a log entry already has a label with the same key
  ///  as a label in this parameter, then the log entry's label is not changed.
  ///  See [LogEntry][google.logging.v2.LogEntry].
  /// @param entries  Required. The log entries to send to Logging. The order of log
  ///  entries in this list does not matter. Values supplied in this method's
  ///  `log_name`, `resource`, and `labels` fields are copied into those log
  ///  entries in this list that do not include values for their corresponding
  ///  fields.
  ///  @n
  ///  For more information, see [WriteLogEntriesRequest][google.logging.v2.WriteLogEntriesRequest].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.WriteLogEntriesResponse])
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
  /// [google.logging.v2.WriteLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L157}
  /// [google.logging.v2.WriteLogEntriesResponse]: @googleapis_reference_link{google/logging/v2/logging.proto#L239}
  ///
  // clang-format on
  future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
  AsyncWriteLogEntries(
      std::string const& log_name,
      google::api::MonitoredResource const& resource,
      std::map<std::string, std::string> const& labels,
      std::vector<google::logging::v2::LogEntry> const& entries,
      Options opts = {});

  // clang-format off
  ///
  /// Writes log entries to Logging. This API method is the
  /// only way to send log entries to Logging. This method
  /// is used, directly or indirectly, by the Logging agent
  /// (fluentd) and all logging libraries configured to use Logging.
  /// A single request may contain log entries for a maximum of 1000
  /// different resources (projects, organizations, billing accounts or
  /// folders)
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.WriteLogEntriesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.WriteLogEntriesResponse])
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
  /// [google.logging.v2.WriteLogEntriesRequest]: @googleapis_reference_link{google/logging/v2/logging.proto#L157}
  /// [google.logging.v2.WriteLogEntriesResponse]: @googleapis_reference_link{google/logging/v2/logging.proto#L239}
  ///
  // clang-format on
  future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
  AsyncWriteLogEntries(
      google::logging::v2::WriteLogEntriesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<LoggingServiceV2Connection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_LOGGING_SERVICE_V2_CLIENT_H
