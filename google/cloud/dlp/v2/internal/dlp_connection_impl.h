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
// source: google/privacy/dlp/v2/dlp.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_CONNECTION_IMPL_H

#include "google/cloud/dlp/v2/dlp_connection.h"
#include "google/cloud/dlp/v2/dlp_connection_idempotency_policy.h"
#include "google/cloud/dlp/v2/dlp_options.h"
#include "google/cloud/dlp/v2/internal/dlp_retry_traits.h"
#include "google/cloud/dlp/v2/internal/dlp_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dlp_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DlpServiceConnectionImpl : public dlp_v2::DlpServiceConnection {
 public:
  ~DlpServiceConnectionImpl() override = default;

  DlpServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dlp_v2_internal::DlpServiceStub> stub, Options options);

  Options options() override { return options_; }

  StatusOr<google::privacy::dlp::v2::InspectContentResponse> InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(google::privacy::dlp::v2::DeidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(google::privacy::dlp::v2::ReidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse> ListInfoTypes(
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request)
      override;

  StreamRange<google::privacy::dlp::v2::InspectTemplate> ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest request) override;

  Status DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate> GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request)
      override;

  StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
  ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request)
      override;

  Status DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) override;

  StreamRange<google::privacy::dlp::v2::JobTrigger> ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest request) override;

  Status DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> CreateDiscoveryConfig(
      google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> UpdateDiscoveryConfig(
      google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> GetDiscoveryConfig(
      google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request)
      override;

  StreamRange<google::privacy::dlp::v2::DiscoveryConfig> ListDiscoveryConfigs(
      google::privacy::dlp::v2::ListDiscoveryConfigsRequest request) override;

  Status DeleteDiscoveryConfig(
      google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) override;

  StreamRange<google::privacy::dlp::v2::DlpJob> ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest request) override;

  StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const& request) override;

  Status DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) override;

  Status CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request)
      override;

  StreamRange<google::privacy::dlp::v2::StoredInfoType> ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest request) override;

  Status DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request)
      override;

  StreamRange<google::privacy::dlp::v2::ProjectDataProfile>
  ListProjectDataProfiles(
      google::privacy::dlp::v2::ListProjectDataProfilesRequest request)
      override;

  StreamRange<google::privacy::dlp::v2::TableDataProfile> ListTableDataProfiles(
      google::privacy::dlp::v2::ListTableDataProfilesRequest request) override;

  StreamRange<google::privacy::dlp::v2::ColumnDataProfile>
  ListColumnDataProfiles(
      google::privacy::dlp::v2::ListColumnDataProfilesRequest request) override;

  StatusOr<google::privacy::dlp::v2::ProjectDataProfile> GetProjectDataProfile(
      google::privacy::dlp::v2::GetProjectDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::TableDataProfile> GetTableDataProfile(
      google::privacy::dlp::v2::GetTableDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ColumnDataProfile> GetColumnDataProfile(
      google::privacy::dlp::v2::GetColumnDataProfileRequest const& request)
      override;

  Status DeleteTableDataProfile(
      google::privacy::dlp::v2::DeleteTableDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse> HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request)
      override;

  Status FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::Connection> CreateConnection(
      google::privacy::dlp::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::Connection> GetConnection(
      google::privacy::dlp::v2::GetConnectionRequest const& request) override;

  StreamRange<google::privacy::dlp::v2::Connection> ListConnections(
      google::privacy::dlp::v2::ListConnectionsRequest request) override;

  StreamRange<google::privacy::dlp::v2::Connection> SearchConnections(
      google::privacy::dlp::v2::SearchConnectionsRequest request) override;

  Status DeleteConnection(
      google::privacy::dlp::v2::DeleteConnectionRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::Connection> UpdateConnection(
      google::privacy::dlp::v2::UpdateConnectionRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dlp_v2_internal::DlpServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_CONNECTION_IMPL_H
