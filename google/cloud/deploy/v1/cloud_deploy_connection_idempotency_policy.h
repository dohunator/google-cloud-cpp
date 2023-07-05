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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/deploy/v1/cloud_deploy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudDeployConnectionIdempotencyPolicy {
 public:
  virtual ~CloudDeployConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CloudDeployConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListDeliveryPipelines(
      google::cloud::deploy::v1::ListDeliveryPipelinesRequest request);

  virtual google::cloud::Idempotency GetDeliveryPipeline(
      google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request);

  virtual google::cloud::Idempotency CreateDeliveryPipeline(
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request);

  virtual google::cloud::Idempotency UpdateDeliveryPipeline(
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request);

  virtual google::cloud::Idempotency DeleteDeliveryPipeline(
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request);

  virtual google::cloud::Idempotency ListTargets(
      google::cloud::deploy::v1::ListTargetsRequest request);

  virtual google::cloud::Idempotency GetTarget(
      google::cloud::deploy::v1::GetTargetRequest const& request);

  virtual google::cloud::Idempotency CreateTarget(
      google::cloud::deploy::v1::CreateTargetRequest const& request);

  virtual google::cloud::Idempotency UpdateTarget(
      google::cloud::deploy::v1::UpdateTargetRequest const& request);

  virtual google::cloud::Idempotency DeleteTarget(
      google::cloud::deploy::v1::DeleteTargetRequest const& request);

  virtual google::cloud::Idempotency ListReleases(
      google::cloud::deploy::v1::ListReleasesRequest request);

  virtual google::cloud::Idempotency GetRelease(
      google::cloud::deploy::v1::GetReleaseRequest const& request);

  virtual google::cloud::Idempotency CreateRelease(
      google::cloud::deploy::v1::CreateReleaseRequest const& request);

  virtual google::cloud::Idempotency AbandonRelease(
      google::cloud::deploy::v1::AbandonReleaseRequest const& request);

  virtual google::cloud::Idempotency ApproveRollout(
      google::cloud::deploy::v1::ApproveRolloutRequest const& request);

  virtual google::cloud::Idempotency AdvanceRollout(
      google::cloud::deploy::v1::AdvanceRolloutRequest const& request);

  virtual google::cloud::Idempotency CancelRollout(
      google::cloud::deploy::v1::CancelRolloutRequest const& request);

  virtual google::cloud::Idempotency ListRollouts(
      google::cloud::deploy::v1::ListRolloutsRequest request);

  virtual google::cloud::Idempotency GetRollout(
      google::cloud::deploy::v1::GetRolloutRequest const& request);

  virtual google::cloud::Idempotency CreateRollout(
      google::cloud::deploy::v1::CreateRolloutRequest const& request);

  virtual google::cloud::Idempotency IgnoreJob(
      google::cloud::deploy::v1::IgnoreJobRequest const& request);

  virtual google::cloud::Idempotency RetryJob(
      google::cloud::deploy::v1::RetryJobRequest const& request);

  virtual google::cloud::Idempotency ListJobRuns(
      google::cloud::deploy::v1::ListJobRunsRequest request);

  virtual google::cloud::Idempotency GetJobRun(
      google::cloud::deploy::v1::GetJobRunRequest const& request);

  virtual google::cloud::Idempotency TerminateJobRun(
      google::cloud::deploy::v1::TerminateJobRunRequest const& request);

  virtual google::cloud::Idempotency GetConfig(
      google::cloud::deploy::v1::GetConfigRequest const& request);
};

std::unique_ptr<CloudDeployConnectionIdempotencyPolicy>
MakeDefaultCloudDeployConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_CLOUD_DEPLOY_CONNECTION_IDEMPOTENCY_POLICY_H
