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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/reservation/v1/reservation.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_reservation_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ReservationServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ReservationServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ReservationServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateReservation(
      google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
          request);

  virtual google::cloud::Idempotency ListReservations(
      google::cloud::bigquery::reservation::v1::ListReservationsRequest
          request);

  virtual google::cloud::Idempotency GetReservation(
      google::cloud::bigquery::reservation::v1::GetReservationRequest const&
          request);

  virtual google::cloud::Idempotency DeleteReservation(
      google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
          request);

  virtual google::cloud::Idempotency UpdateReservation(
      google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
          request);

  virtual google::cloud::Idempotency CreateCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          CreateCapacityCommitmentRequest const& request);

  virtual google::cloud::Idempotency ListCapacityCommitments(
      google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsRequest
          request);

  virtual google::cloud::Idempotency GetCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          GetCapacityCommitmentRequest const& request);

  virtual google::cloud::Idempotency DeleteCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          DeleteCapacityCommitmentRequest const& request);

  virtual google::cloud::Idempotency UpdateCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          UpdateCapacityCommitmentRequest const& request);

  virtual google::cloud::Idempotency SplitCapacityCommitment(
      google::cloud::bigquery::reservation::v1::
          SplitCapacityCommitmentRequest const& request);

  virtual google::cloud::Idempotency MergeCapacityCommitments(
      google::cloud::bigquery::reservation::v1::
          MergeCapacityCommitmentsRequest const& request);

  virtual google::cloud::Idempotency CreateAssignment(
      google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
          request);

  virtual google::cloud::Idempotency ListAssignments(
      google::cloud::bigquery::reservation::v1::ListAssignmentsRequest request);

  virtual google::cloud::Idempotency DeleteAssignment(
      google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
          request);

  virtual google::cloud::Idempotency SearchAssignments(
      google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest
          request);

  virtual google::cloud::Idempotency SearchAllAssignments(
      google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest
          request);

  virtual google::cloud::Idempotency MoveAssignment(
      google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
          request);

  virtual google::cloud::Idempotency UpdateAssignment(
      google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
          request);

  virtual google::cloud::Idempotency GetBiReservation(
      google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
          request);

  virtual google::cloud::Idempotency UpdateBiReservation(
      google::cloud::bigquery::reservation::v1::
          UpdateBiReservationRequest const& request);
};

std::unique_ptr<ReservationServiceConnectionIdempotencyPolicy>
MakeDefaultReservationServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_RESERVATION_V1_RESERVATION_CONNECTION_IDEMPOTENCY_POLICY_H
