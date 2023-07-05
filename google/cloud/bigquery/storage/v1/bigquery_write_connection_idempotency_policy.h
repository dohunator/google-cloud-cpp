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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/storage/v1/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_storage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigQueryWriteConnectionIdempotencyPolicy {
 public:
  virtual ~BigQueryWriteConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<BigQueryWriteConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateWriteStream(
      google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
          request);

  virtual google::cloud::Idempotency GetWriteStream(
      google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
          request);

  virtual google::cloud::Idempotency FinalizeWriteStream(
      google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
          request);

  virtual google::cloud::Idempotency BatchCommitWriteStreams(
      google::cloud::bigquery::storage::v1::
          BatchCommitWriteStreamsRequest const& request);

  virtual google::cloud::Idempotency FlushRows(
      google::cloud::bigquery::storage::v1::FlushRowsRequest const& request);
};

std::unique_ptr<BigQueryWriteConnectionIdempotencyPolicy>
MakeDefaultBigQueryWriteConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_IDEMPOTENCY_POLICY_H
