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

#include "google/cloud/dlp/v2/dlp_connection.h"
#include "google/cloud/dlp/v2/dlp_options.h"
#include "google/cloud/dlp/v2/internal/dlp_connection_impl.h"
#include "google/cloud/dlp/v2/internal/dlp_option_defaults.h"
#include "google/cloud/dlp/v2/internal/dlp_stub_factory.h"
#include "google/cloud/dlp/v2/internal/dlp_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dlp_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceConnection::~DlpServiceConnection() = default;

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceConnection::InspectContent(
    google::privacy::dlp::v2::InspectContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceConnection::RedactImage(
    google::privacy::dlp::v2::RedactImageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceConnection::DeidentifyContent(
    google::privacy::dlp::v2::DeidentifyContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceConnection::ReidentifyContent(
    google::privacy::dlp::v2::ReidentifyContentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceConnection::ListInfoTypes(
    google::privacy::dlp::v2::ListInfoTypesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::CreateInspectTemplate(
    google::privacy::dlp::v2::CreateInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::UpdateInspectTemplate(
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::GetInspectTemplate(
    google::privacy::dlp::v2::GetInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::InspectTemplate>
DlpServiceConnection::ListInspectTemplates(
    google::privacy::dlp::v2::
        ListInspectTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::InspectTemplate>>();
}

Status DlpServiceConnection::DeleteInspectTemplate(
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::CreateDeidentifyTemplate(
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::UpdateDeidentifyTemplate(
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::GetDeidentifyTemplate(
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceConnection::ListDeidentifyTemplates(
    google::privacy::dlp::v2::
        ListDeidentifyTemplatesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>>();
}

Status DlpServiceConnection::DeleteDeidentifyTemplate(
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::CreateJobTrigger(
    google::privacy::dlp::v2::CreateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::UpdateJobTrigger(
    google::privacy::dlp::v2::UpdateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceConnection::HybridInspectJobTrigger(
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::GetJobTrigger(
    google::privacy::dlp::v2::GetJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::JobTrigger>
DlpServiceConnection::ListJobTriggers(
    google::privacy::dlp::v2::
        ListJobTriggersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::JobTrigger>>();
}

Status DlpServiceConnection::DeleteJobTrigger(
    google::privacy::dlp::v2::DeleteJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DlpJob>
DlpServiceConnection::ActivateJobTrigger(
    google::privacy::dlp::v2::ActivateJobTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceConnection::CreateDiscoveryConfig(
    google::privacy::dlp::v2::CreateDiscoveryConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceConnection::UpdateDiscoveryConfig(
    google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceConnection::GetDiscoveryConfig(
    google::privacy::dlp::v2::GetDiscoveryConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceConnection::ListDiscoveryConfigs(
    google::privacy::dlp::v2::
        ListDiscoveryConfigsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::DiscoveryConfig>>();
}

Status DlpServiceConnection::DeleteDiscoveryConfig(
    google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::CreateDlpJob(
    google::privacy::dlp::v2::CreateDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::ListDlpJobs(
    google::privacy::dlp::v2::
        ListDlpJobsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::DlpJob>>();
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceConnection::GetDlpJob(
    google::privacy::dlp::v2::GetDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::DeleteDlpJob(
    google::privacy::dlp::v2::DeleteDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::CancelDlpJob(
    google::privacy::dlp::v2::CancelDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::CreateStoredInfoType(
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::UpdateStoredInfoType(
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::GetStoredInfoType(
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::StoredInfoType>
DlpServiceConnection::ListStoredInfoTypes(
    google::privacy::dlp::v2::
        ListStoredInfoTypesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::StoredInfoType>>();
}

Status DlpServiceConnection::DeleteStoredInfoType(
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceConnection::ListProjectDataProfiles(
    google::privacy::dlp::v2::
        ListProjectDataProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::ProjectDataProfile>>();
}

StreamRange<google::privacy::dlp::v2::TableDataProfile>
DlpServiceConnection::ListTableDataProfiles(
    google::privacy::dlp::v2::
        ListTableDataProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::TableDataProfile>>();
}

StreamRange<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceConnection::ListColumnDataProfiles(
    google::privacy::dlp::v2::
        ListColumnDataProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::ColumnDataProfile>>();
}

StatusOr<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceConnection::GetProjectDataProfile(
    google::privacy::dlp::v2::GetProjectDataProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::TableDataProfile>
DlpServiceConnection::GetTableDataProfile(
    google::privacy::dlp::v2::GetTableDataProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceConnection::GetColumnDataProfile(
    google::privacy::dlp::v2::GetColumnDataProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::DeleteTableDataProfile(
    google::privacy::dlp::v2::DeleteTableDataProfileRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceConnection::HybridInspectDlpJob(
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status DlpServiceConnection::FinishDlpJob(
    google::privacy::dlp::v2::FinishDlpJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceConnection::CreateConnection(
    google::privacy::dlp::v2::CreateConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceConnection::GetConnection(
    google::privacy::dlp::v2::GetConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceConnection::ListConnections(
    google::privacy::dlp::v2::
        ListConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::Connection>>();
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceConnection::SearchConnections(
    google::privacy::dlp::v2::
        SearchConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::privacy::dlp::v2::Connection>>();
}

Status DlpServiceConnection::DeleteConnection(
    google::privacy::dlp::v2::DeleteConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceConnection::UpdateConnection(
    google::privacy::dlp::v2::UpdateConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<DlpServiceConnection> MakeDlpServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 DlpServicePolicyOptionList>(options, __func__);
  options = dlp_v2_internal::DlpServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      dlp_v2_internal::CreateDefaultDlpServiceStub(std::move(auth), options);
  return dlp_v2_internal::MakeDlpServiceTracingConnection(
      std::make_shared<dlp_v2_internal::DlpServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2
}  // namespace cloud
}  // namespace google
