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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/vmmigration/v1/vmmigration.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vmmigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VmMigrationConnectionIdempotencyPolicy {
 public:
  virtual ~VmMigrationConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<VmMigrationConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListSources(
      google::cloud::vmmigration::v1::ListSourcesRequest request);

  virtual google::cloud::Idempotency GetSource(
      google::cloud::vmmigration::v1::GetSourceRequest const& request);

  virtual google::cloud::Idempotency CreateSource(
      google::cloud::vmmigration::v1::CreateSourceRequest const& request);

  virtual google::cloud::Idempotency UpdateSource(
      google::cloud::vmmigration::v1::UpdateSourceRequest const& request);

  virtual google::cloud::Idempotency DeleteSource(
      google::cloud::vmmigration::v1::DeleteSourceRequest const& request);

  virtual google::cloud::Idempotency FetchInventory(
      google::cloud::vmmigration::v1::FetchInventoryRequest const& request);

  virtual google::cloud::Idempotency ListUtilizationReports(
      google::cloud::vmmigration::v1::ListUtilizationReportsRequest request);

  virtual google::cloud::Idempotency GetUtilizationReport(
      google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
          request);

  virtual google::cloud::Idempotency CreateUtilizationReport(
      google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
          request);

  virtual google::cloud::Idempotency DeleteUtilizationReport(
      google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
          request);

  virtual google::cloud::Idempotency ListDatacenterConnectors(
      google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request);

  virtual google::cloud::Idempotency GetDatacenterConnector(
      google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
          request);

  virtual google::cloud::Idempotency CreateDatacenterConnector(
      google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
          request);

  virtual google::cloud::Idempotency DeleteDatacenterConnector(
      google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
          request);

  virtual google::cloud::Idempotency UpgradeAppliance(
      google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request);

  virtual google::cloud::Idempotency CreateMigratingVm(
      google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request);

  virtual google::cloud::Idempotency ListMigratingVms(
      google::cloud::vmmigration::v1::ListMigratingVmsRequest request);

  virtual google::cloud::Idempotency GetMigratingVm(
      google::cloud::vmmigration::v1::GetMigratingVmRequest const& request);

  virtual google::cloud::Idempotency UpdateMigratingVm(
      google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request);

  virtual google::cloud::Idempotency DeleteMigratingVm(
      google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request);

  virtual google::cloud::Idempotency StartMigration(
      google::cloud::vmmigration::v1::StartMigrationRequest const& request);

  virtual google::cloud::Idempotency ResumeMigration(
      google::cloud::vmmigration::v1::ResumeMigrationRequest const& request);

  virtual google::cloud::Idempotency PauseMigration(
      google::cloud::vmmigration::v1::PauseMigrationRequest const& request);

  virtual google::cloud::Idempotency FinalizeMigration(
      google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request);

  virtual google::cloud::Idempotency CreateCloneJob(
      google::cloud::vmmigration::v1::CreateCloneJobRequest const& request);

  virtual google::cloud::Idempotency CancelCloneJob(
      google::cloud::vmmigration::v1::CancelCloneJobRequest const& request);

  virtual google::cloud::Idempotency ListCloneJobs(
      google::cloud::vmmigration::v1::ListCloneJobsRequest request);

  virtual google::cloud::Idempotency GetCloneJob(
      google::cloud::vmmigration::v1::GetCloneJobRequest const& request);

  virtual google::cloud::Idempotency CreateCutoverJob(
      google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request);

  virtual google::cloud::Idempotency CancelCutoverJob(
      google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request);

  virtual google::cloud::Idempotency ListCutoverJobs(
      google::cloud::vmmigration::v1::ListCutoverJobsRequest request);

  virtual google::cloud::Idempotency GetCutoverJob(
      google::cloud::vmmigration::v1::GetCutoverJobRequest const& request);

  virtual google::cloud::Idempotency ListGroups(
      google::cloud::vmmigration::v1::ListGroupsRequest request);

  virtual google::cloud::Idempotency GetGroup(
      google::cloud::vmmigration::v1::GetGroupRequest const& request);

  virtual google::cloud::Idempotency CreateGroup(
      google::cloud::vmmigration::v1::CreateGroupRequest const& request);

  virtual google::cloud::Idempotency UpdateGroup(
      google::cloud::vmmigration::v1::UpdateGroupRequest const& request);

  virtual google::cloud::Idempotency DeleteGroup(
      google::cloud::vmmigration::v1::DeleteGroupRequest const& request);

  virtual google::cloud::Idempotency AddGroupMigration(
      google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request);

  virtual google::cloud::Idempotency RemoveGroupMigration(
      google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
          request);

  virtual google::cloud::Idempotency ListTargetProjects(
      google::cloud::vmmigration::v1::ListTargetProjectsRequest request);

  virtual google::cloud::Idempotency GetTargetProject(
      google::cloud::vmmigration::v1::GetTargetProjectRequest const& request);

  virtual google::cloud::Idempotency CreateTargetProject(
      google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
          request);

  virtual google::cloud::Idempotency UpdateTargetProject(
      google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
          request);

  virtual google::cloud::Idempotency DeleteTargetProject(
      google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
          request);

  virtual google::cloud::Idempotency ListReplicationCycles(
      google::cloud::vmmigration::v1::ListReplicationCyclesRequest request);

  virtual google::cloud::Idempotency GetReplicationCycle(
      google::cloud::vmmigration::v1::GetReplicationCycleRequest const&
          request);
};

std::unique_ptr<VmMigrationConnectionIdempotencyPolicy>
MakeDefaultVmMigrationConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_VM_MIGRATION_CONNECTION_IDEMPOTENCY_POLICY_H
