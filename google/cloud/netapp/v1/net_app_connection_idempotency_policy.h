// Copyright 2023 Google LLC
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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/netapp/v1/cloud_netapp_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetAppConnectionIdempotencyPolicy {
 public:
  virtual ~NetAppConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetAppConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListStoragePools(
      google::cloud::netapp::v1::ListStoragePoolsRequest request);

  virtual google::cloud::Idempotency CreateStoragePool(
      google::cloud::netapp::v1::CreateStoragePoolRequest const& request);

  virtual google::cloud::Idempotency GetStoragePool(
      google::cloud::netapp::v1::GetStoragePoolRequest const& request);

  virtual google::cloud::Idempotency UpdateStoragePool(
      google::cloud::netapp::v1::UpdateStoragePoolRequest const& request);

  virtual google::cloud::Idempotency DeleteStoragePool(
      google::cloud::netapp::v1::DeleteStoragePoolRequest const& request);

  virtual google::cloud::Idempotency SwitchActiveReplicaZone(
      google::cloud::netapp::v1::SwitchActiveReplicaZoneRequest const& request);

  virtual google::cloud::Idempotency ListVolumes(
      google::cloud::netapp::v1::ListVolumesRequest request);

  virtual google::cloud::Idempotency GetVolume(
      google::cloud::netapp::v1::GetVolumeRequest const& request);

  virtual google::cloud::Idempotency CreateVolume(
      google::cloud::netapp::v1::CreateVolumeRequest const& request);

  virtual google::cloud::Idempotency UpdateVolume(
      google::cloud::netapp::v1::UpdateVolumeRequest const& request);

  virtual google::cloud::Idempotency DeleteVolume(
      google::cloud::netapp::v1::DeleteVolumeRequest const& request);

  virtual google::cloud::Idempotency RevertVolume(
      google::cloud::netapp::v1::RevertVolumeRequest const& request);

  virtual google::cloud::Idempotency ListSnapshots(
      google::cloud::netapp::v1::ListSnapshotsRequest request);

  virtual google::cloud::Idempotency GetSnapshot(
      google::cloud::netapp::v1::GetSnapshotRequest const& request);

  virtual google::cloud::Idempotency CreateSnapshot(
      google::cloud::netapp::v1::CreateSnapshotRequest const& request);

  virtual google::cloud::Idempotency DeleteSnapshot(
      google::cloud::netapp::v1::DeleteSnapshotRequest const& request);

  virtual google::cloud::Idempotency UpdateSnapshot(
      google::cloud::netapp::v1::UpdateSnapshotRequest const& request);

  virtual google::cloud::Idempotency ListActiveDirectories(
      google::cloud::netapp::v1::ListActiveDirectoriesRequest request);

  virtual google::cloud::Idempotency GetActiveDirectory(
      google::cloud::netapp::v1::GetActiveDirectoryRequest const& request);

  virtual google::cloud::Idempotency CreateActiveDirectory(
      google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request);

  virtual google::cloud::Idempotency UpdateActiveDirectory(
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request);

  virtual google::cloud::Idempotency DeleteActiveDirectory(
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request);

  virtual google::cloud::Idempotency ListKmsConfigs(
      google::cloud::netapp::v1::ListKmsConfigsRequest request);

  virtual google::cloud::Idempotency CreateKmsConfig(
      google::cloud::netapp::v1::CreateKmsConfigRequest const& request);

  virtual google::cloud::Idempotency GetKmsConfig(
      google::cloud::netapp::v1::GetKmsConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateKmsConfig(
      google::cloud::netapp::v1::UpdateKmsConfigRequest const& request);

  virtual google::cloud::Idempotency EncryptVolumes(
      google::cloud::netapp::v1::EncryptVolumesRequest const& request);

  virtual google::cloud::Idempotency VerifyKmsConfig(
      google::cloud::netapp::v1::VerifyKmsConfigRequest const& request);

  virtual google::cloud::Idempotency DeleteKmsConfig(
      google::cloud::netapp::v1::DeleteKmsConfigRequest const& request);

  virtual google::cloud::Idempotency ListReplications(
      google::cloud::netapp::v1::ListReplicationsRequest request);

  virtual google::cloud::Idempotency GetReplication(
      google::cloud::netapp::v1::GetReplicationRequest const& request);

  virtual google::cloud::Idempotency CreateReplication(
      google::cloud::netapp::v1::CreateReplicationRequest const& request);

  virtual google::cloud::Idempotency DeleteReplication(
      google::cloud::netapp::v1::DeleteReplicationRequest const& request);

  virtual google::cloud::Idempotency UpdateReplication(
      google::cloud::netapp::v1::UpdateReplicationRequest const& request);

  virtual google::cloud::Idempotency StopReplication(
      google::cloud::netapp::v1::StopReplicationRequest const& request);

  virtual google::cloud::Idempotency ResumeReplication(
      google::cloud::netapp::v1::ResumeReplicationRequest const& request);

  virtual google::cloud::Idempotency ReverseReplicationDirection(
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
          request);

  virtual google::cloud::Idempotency EstablishPeering(
      google::cloud::netapp::v1::EstablishPeeringRequest const& request);

  virtual google::cloud::Idempotency SyncReplication(
      google::cloud::netapp::v1::SyncReplicationRequest const& request);

  virtual google::cloud::Idempotency CreateBackupVault(
      google::cloud::netapp::v1::CreateBackupVaultRequest const& request);

  virtual google::cloud::Idempotency GetBackupVault(
      google::cloud::netapp::v1::GetBackupVaultRequest const& request);

  virtual google::cloud::Idempotency ListBackupVaults(
      google::cloud::netapp::v1::ListBackupVaultsRequest request);

  virtual google::cloud::Idempotency UpdateBackupVault(
      google::cloud::netapp::v1::UpdateBackupVaultRequest const& request);

  virtual google::cloud::Idempotency DeleteBackupVault(
      google::cloud::netapp::v1::DeleteBackupVaultRequest const& request);

  virtual google::cloud::Idempotency CreateBackup(
      google::cloud::netapp::v1::CreateBackupRequest const& request);

  virtual google::cloud::Idempotency GetBackup(
      google::cloud::netapp::v1::GetBackupRequest const& request);

  virtual google::cloud::Idempotency ListBackups(
      google::cloud::netapp::v1::ListBackupsRequest request);

  virtual google::cloud::Idempotency DeleteBackup(
      google::cloud::netapp::v1::DeleteBackupRequest const& request);

  virtual google::cloud::Idempotency UpdateBackup(
      google::cloud::netapp::v1::UpdateBackupRequest const& request);

  virtual google::cloud::Idempotency CreateBackupPolicy(
      google::cloud::netapp::v1::CreateBackupPolicyRequest const& request);

  virtual google::cloud::Idempotency GetBackupPolicy(
      google::cloud::netapp::v1::GetBackupPolicyRequest const& request);

  virtual google::cloud::Idempotency ListBackupPolicies(
      google::cloud::netapp::v1::ListBackupPoliciesRequest request);

  virtual google::cloud::Idempotency UpdateBackupPolicy(
      google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request);

  virtual google::cloud::Idempotency DeleteBackupPolicy(
      google::cloud::netapp::v1::DeleteBackupPolicyRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<NetAppConnectionIdempotencyPolicy>
MakeDefaultNetAppConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_IDEMPOTENCY_POLICY_H
