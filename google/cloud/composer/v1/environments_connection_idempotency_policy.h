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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EnvironmentsConnectionIdempotencyPolicy {
 public:
  virtual ~EnvironmentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const& request);

  virtual google::cloud::Idempotency GetEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          GetEnvironmentRequest const& request);

  virtual google::cloud::Idempotency ListEnvironments(
      google::cloud::orchestration::airflow::service::v1::
          ListEnvironmentsRequest request);

  virtual google::cloud::Idempotency UpdateEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const& request);

  virtual google::cloud::Idempotency DeleteEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const& request);

  virtual google::cloud::Idempotency ExecuteAirflowCommand(
      google::cloud::orchestration::airflow::service::v1::
          ExecuteAirflowCommandRequest const& request);

  virtual google::cloud::Idempotency StopAirflowCommand(
      google::cloud::orchestration::airflow::service::v1::
          StopAirflowCommandRequest const& request);

  virtual google::cloud::Idempotency PollAirflowCommand(
      google::cloud::orchestration::airflow::service::v1::
          PollAirflowCommandRequest const& request);

  virtual google::cloud::Idempotency SaveSnapshot(
      google::cloud::orchestration::airflow::service::v1::
          SaveSnapshotRequest const& request);

  virtual google::cloud::Idempotency LoadSnapshot(
      google::cloud::orchestration::airflow::service::v1::
          LoadSnapshotRequest const& request);

  virtual google::cloud::Idempotency DatabaseFailover(
      google::cloud::orchestration::airflow::service::v1::
          DatabaseFailoverRequest const& request);

  virtual google::cloud::Idempotency FetchDatabaseProperties(
      google::cloud::orchestration::airflow::service::v1::
          FetchDatabasePropertiesRequest const& request);
};

std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy>
MakeDefaultEnvironmentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_IDEMPOTENCY_POLICY_H
