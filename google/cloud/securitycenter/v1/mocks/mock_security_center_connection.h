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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_MOCKS_MOCK_SECURITY_CENTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_MOCKS_MOCK_SECURITY_CENTER_CONNECTION_H

#include "google/cloud/securitycenter/v1/security_center_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace securitycenter_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `SecurityCenterConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `SecurityCenterClient`. To do so,
 * construct an object of type `SecurityCenterClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockSecurityCenterConnection
    : public securitycenter_v1::SecurityCenterConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<
                  google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>,
              BulkMuteFindings,
              (google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::
                   SecurityHealthAnalyticsCustomModule>,
      CreateSecurityHealthAnalyticsCustomModule,
      (google::cloud::securitycenter::v1::
           CreateSecurityHealthAnalyticsCustomModuleRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Source>, CreateSource,
      (google::cloud::securitycenter::v1::CreateSourceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Finding>, CreateFinding,
      (google::cloud::securitycenter::v1::CreateFindingRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::securitycenter::v1::MuteConfig>,
              CreateMuteConfig,
              (google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::NotificationConfig>,
      CreateNotificationConfig,
      (google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(Status, DeleteMuteConfig,
              (google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      Status, DeleteNotificationConfig,
      (google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteSecurityHealthAnalyticsCustomModule,
      (google::cloud::securitycenter::v1::
           DeleteSecurityHealthAnalyticsCustomModuleRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::BigQueryExport>,
      GetBigQueryExport,
      (google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::MuteConfig>, GetMuteConfig,
      (google::cloud::securitycenter::v1::GetMuteConfigRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::NotificationConfig>,
      GetNotificationConfig,
      (google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>,
      GetOrganizationSettings,
      (google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::securitycenter::v1::
                           EffectiveSecurityHealthAnalyticsCustomModule>,
              GetEffectiveSecurityHealthAnalyticsCustomModule,
              (google::cloud::securitycenter::v1::
                   GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                       request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::
                   SecurityHealthAnalyticsCustomModule>,
      GetSecurityHealthAnalyticsCustomModule,
      (google::cloud::securitycenter::v1::
           GetSecurityHealthAnalyticsCustomModuleRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Source>, GetSource,
      (google::cloud::securitycenter::v1::GetSourceRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::GroupResult>,
              GroupAssets,
              (google::cloud::securitycenter::v1::GroupAssetsRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::GroupResult>,
              GroupFindings,
              (google::cloud::securitycenter::v1::GroupFindingsRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::
                              ListAssetsResponse::ListAssetsResult>,
              ListAssets,
              (google::cloud::securitycenter::v1::ListAssetsRequest request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::securitycenter::v1::
                      SecurityHealthAnalyticsCustomModule>,
      ListDescendantSecurityHealthAnalyticsCustomModules,
      (google::cloud::securitycenter::v1::
           ListDescendantSecurityHealthAnalyticsCustomModulesRequest request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::
                              ListFindingsResponse::ListFindingsResult>,
              ListFindings,
              (google::cloud::securitycenter::v1::ListFindingsRequest request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::securitycenter::v1::MuteConfig>,
      ListMuteConfigs,
      (google::cloud::securitycenter::v1::ListMuteConfigsRequest request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::securitycenter::v1::NotificationConfig>,
      ListNotificationConfigs,
      (google::cloud::securitycenter::v1::ListNotificationConfigsRequest
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::securitycenter::v1::
                      EffectiveSecurityHealthAnalyticsCustomModule>,
      ListEffectiveSecurityHealthAnalyticsCustomModules,
      (google::cloud::securitycenter::v1::
           ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::
                              SecurityHealthAnalyticsCustomModule>,
              ListSecurityHealthAnalyticsCustomModules,
              (google::cloud::securitycenter::v1::
                   ListSecurityHealthAnalyticsCustomModulesRequest request),
              (override));

  MOCK_METHOD(StreamRange<google::cloud::securitycenter::v1::Source>,
              ListSources,
              (google::cloud::securitycenter::v1::ListSourcesRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>,
      RunAssetDiscovery,
      (google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::securitycenter::v1::Finding>,
              SetFindingState,
              (google::cloud::securitycenter::v1::SetFindingStateRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Finding>, SetMute,
      (google::cloud::securitycenter::v1::SetMuteRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::ExternalSystem>,
      UpdateExternalSystem,
      (google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Finding>, UpdateFinding,
      (google::cloud::securitycenter::v1::UpdateFindingRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::securitycenter::v1::MuteConfig>,
              UpdateMuteConfig,
              (google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::NotificationConfig>,
      UpdateNotificationConfig,
      (google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>,
              UpdateOrganizationSettings,
              (google::cloud::securitycenter::v1::
                   UpdateOrganizationSettingsRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::
                   SecurityHealthAnalyticsCustomModule>,
      UpdateSecurityHealthAnalyticsCustomModule,
      (google::cloud::securitycenter::v1::
           UpdateSecurityHealthAnalyticsCustomModuleRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::Source>, UpdateSource,
      (google::cloud::securitycenter::v1::UpdateSourceRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::SecurityMarks>,
      UpdateSecurityMarks,
      (google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::BigQueryExport>,
      CreateBigQueryExport,
      (google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteBigQueryExport,
      (google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::securitycenter::v1::BigQueryExport>,
      UpdateBigQueryExport,
      (google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::securitycenter::v1::BigQueryExport>,
      ListBigQueryExports,
      (google::cloud::securitycenter::v1::ListBigQueryExportsRequest request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_MOCKS_MOCK_SECURITY_CENTER_CONNECTION_H
