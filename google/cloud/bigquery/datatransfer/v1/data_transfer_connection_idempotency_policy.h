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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/datatransfer/v1/datatransfer.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_datatransfer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataTransferServiceConnectionIdempotencyPolicy {
 public:
  virtual ~DataTransferServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataTransferServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency GetDataSource(
      google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
          request);

  virtual google::cloud::Idempotency ListDataSources(
      google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest
          request);

  virtual google::cloud::Idempotency CreateTransferConfig(
      google::cloud::bigquery::datatransfer::v1::
          CreateTransferConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateTransferConfig(
      google::cloud::bigquery::datatransfer::v1::
          UpdateTransferConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteTransferConfig(
      google::cloud::bigquery::datatransfer::v1::
          DeleteTransferConfigRequest const& request);

  virtual google::cloud::Idempotency GetTransferConfig(
      google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
          request);

  virtual google::cloud::Idempotency ListTransferConfigs(
      google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
          request);

  virtual google::cloud::Idempotency ScheduleTransferRuns(
      google::cloud::bigquery::datatransfer::v1::
          ScheduleTransferRunsRequest const& request);

  virtual google::cloud::Idempotency StartManualTransferRuns(
      google::cloud::bigquery::datatransfer::v1::
          StartManualTransferRunsRequest const& request);

  virtual google::cloud::Idempotency GetTransferRun(
      google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
          request);

  virtual google::cloud::Idempotency DeleteTransferRun(
      google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
          request);

  virtual google::cloud::Idempotency ListTransferRuns(
      google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest
          request);

  virtual google::cloud::Idempotency ListTransferLogs(
      google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest
          request);

  virtual google::cloud::Idempotency CheckValidCreds(
      google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
          request);

  virtual google::cloud::Idempotency EnrollDataSources(
      google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
          request);
};

std::unique_ptr<DataTransferServiceConnectionIdempotencyPolicy>
MakeDefaultDataTransferServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datatransfer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATATRANSFER_V1_DATA_TRANSFER_CONNECTION_IDEMPOTENCY_POLICY_H
