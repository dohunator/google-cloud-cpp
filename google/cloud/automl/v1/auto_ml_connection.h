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
// source: google/cloud/automl/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_H

#include "google/cloud/automl/v1/auto_ml_connection_idempotency_policy.h"
#include "google/cloud/automl/v1/internal/auto_ml_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/automl/v1/operations.pb.h>
#include <google/cloud/automl/v1/service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace automl_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using AutoMlRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    automl_v1_internal::AutoMlRetryTraits>;

using AutoMlLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        automl_v1_internal::AutoMlRetryTraits>;

using AutoMlLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        automl_v1_internal::AutoMlRetryTraits>;

/**
 * The `AutoMlConnection` object for `AutoMlClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `AutoMlClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `AutoMlClient`.
 *
 * To create a concrete instance, see `MakeAutoMlConnection()`.
 *
 * For mocking, see `automl_v1_mocks::MockAutoMlConnection`.
 */
class AutoMlConnection {
 public:
  virtual ~AutoMlConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request);

  virtual StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request);

  virtual StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request);

  virtual StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  DeleteDataset(google::cloud::automl::v1::DeleteDatasetRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  ImportData(google::cloud::automl::v1::ImportDataRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  ExportData(google::cloud::automl::v1::ExportDataRequest const& request);

  virtual StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request);

  virtual StatusOr<google::cloud::automl::v1::Model> GetModel(
      google::cloud::automl::v1::GetModelRequest const& request);

  virtual StreamRange<google::cloud::automl::v1::Model> ListModels(
      google::cloud::automl::v1::ListModelsRequest request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  DeleteModel(google::cloud::automl::v1::DeleteModelRequest const& request);

  virtual StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  DeployModel(google::cloud::automl::v1::DeployModelRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  UndeployModel(google::cloud::automl::v1::UndeployModelRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
  ExportModel(google::cloud::automl::v1::ExportModelRequest const& request);

  virtual StatusOr<google::cloud::automl::v1::ModelEvaluation>
  GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request);

  virtual StreamRange<google::cloud::automl::v1::ModelEvaluation>
  ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request);
};

/**
 * A factory function to construct an object of type `AutoMlConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of AutoMlClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `AutoMlConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::automl_v1::AutoMlPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `AutoMlConnection` created by
 * this function.
 */
std::shared_ptr<AutoMlConnection> MakeAutoMlConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_V1_AUTO_ML_CONNECTION_H
