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

#include "google/cloud/dlp/v2/internal/dlp_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dlp_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceMetadata::DlpServiceMetadata(
    std::shared_ptr<DlpServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceMetadata::InspectContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::InspectContentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->InspectContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceMetadata::RedactImage(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::RedactImageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->RedactImage(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceMetadata::DeidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->DeidentifyContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceMetadata::ReidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ReidentifyContent(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceMetadata::ListInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
  SetMetadata(context, options);
  return child_->ListInfoTypes(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::CreateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::UpdateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::GetInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
DlpServiceMetadata::ListInspectTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInspectTemplates(context, options, request);
}

Status DlpServiceMetadata::DeleteInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteInspectTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::CreateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::UpdateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::GetDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
DlpServiceMetadata::ListDeidentifyTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDeidentifyTemplates(context, options, request);
}

Status DlpServiceMetadata::DeleteDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDeidentifyTemplate(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::CreateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::UpdateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceMetadata::HybridInspectJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->HybridInspectJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::GetJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
DlpServiceMetadata::ListJobTriggers(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListJobTriggersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListJobTriggers(context, options, request);
}

Status DlpServiceMetadata::DeleteJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob>
DlpServiceMetadata::ActivateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ActivateJobTrigger(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceMetadata::CreateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceMetadata::UpdateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceMetadata::GetDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDiscoveryConfigsResponse>
DlpServiceMetadata::ListDiscoveryConfigs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDiscoveryConfigsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDiscoveryConfigs(context, options, request);
}

Status DlpServiceMetadata::DeleteDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDiscoveryConfig(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceMetadata::CreateDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDlpJob(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>
DlpServiceMetadata::ListDlpJobs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDlpJobs(context, options, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceMetadata::GetDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDlpJob(context, options, request);
}

Status DlpServiceMetadata::DeleteDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDlpJob(context, options, request);
}

Status DlpServiceMetadata::CancelDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelDlpJob(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::CreateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::UpdateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::GetStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
DlpServiceMetadata::ListStoredInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListStoredInfoTypes(context, options, request);
}

Status DlpServiceMetadata::DeleteStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteStoredInfoType(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListProjectDataProfilesResponse>
DlpServiceMetadata::ListProjectDataProfiles(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListProjectDataProfilesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProjectDataProfiles(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListTableDataProfilesResponse>
DlpServiceMetadata::ListTableDataProfiles(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListTableDataProfilesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTableDataProfiles(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListColumnDataProfilesResponse>
DlpServiceMetadata::ListColumnDataProfiles(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListColumnDataProfilesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListColumnDataProfiles(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceMetadata::GetProjectDataProfile(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetProjectDataProfileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProjectDataProfile(context, options, request);
}

StatusOr<google::privacy::dlp::v2::TableDataProfile>
DlpServiceMetadata::GetTableDataProfile(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetTableDataProfileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTableDataProfile(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceMetadata::GetColumnDataProfile(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetColumnDataProfileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetColumnDataProfile(context, options, request);
}

Status DlpServiceMetadata::DeleteTableDataProfile(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteTableDataProfileRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTableDataProfile(context, options, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceMetadata::HybridInspectDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->HybridInspectDlpJob(context, options, request);
}

Status DlpServiceMetadata::FinishDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->FinishDlpJob(context, options, request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceMetadata::CreateConnection(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateConnection(context, options, request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceMetadata::GetConnection(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetConnection(context, options, request);
}

StatusOr<google::privacy::dlp::v2::ListConnectionsResponse>
DlpServiceMetadata::ListConnections(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListConnectionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConnections(context, options, request);
}

StatusOr<google::privacy::dlp::v2::SearchConnectionsResponse>
DlpServiceMetadata::SearchConnections(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::SearchConnectionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchConnections(context, options, request);
}

Status DlpServiceMetadata::DeleteConnection(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteConnection(context, options, request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceMetadata::UpdateConnection(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateConnection(context, options, request);
}

void DlpServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DlpServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2_internal
}  // namespace cloud
}  // namespace google
