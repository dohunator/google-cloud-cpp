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
// source: grafeas/v1/grafeas.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/version.h"
#include <grafeas/v1/grafeas.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GrafeasConnectionIdempotencyPolicy {
 public:
  virtual ~GrafeasConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<GrafeasConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetOccurrence(
      grafeas::v1::GetOccurrenceRequest const& request);

  virtual google::cloud::Idempotency ListOccurrences(
      grafeas::v1::ListOccurrencesRequest request);

  virtual google::cloud::Idempotency DeleteOccurrence(
      grafeas::v1::DeleteOccurrenceRequest const& request);

  virtual google::cloud::Idempotency CreateOccurrence(
      grafeas::v1::CreateOccurrenceRequest const& request);

  virtual google::cloud::Idempotency BatchCreateOccurrences(
      grafeas::v1::BatchCreateOccurrencesRequest const& request);

  virtual google::cloud::Idempotency UpdateOccurrence(
      grafeas::v1::UpdateOccurrenceRequest const& request);

  virtual google::cloud::Idempotency GetOccurrenceNote(
      grafeas::v1::GetOccurrenceNoteRequest const& request);

  virtual google::cloud::Idempotency GetNote(
      grafeas::v1::GetNoteRequest const& request);

  virtual google::cloud::Idempotency ListNotes(
      grafeas::v1::ListNotesRequest request);

  virtual google::cloud::Idempotency DeleteNote(
      grafeas::v1::DeleteNoteRequest const& request);

  virtual google::cloud::Idempotency CreateNote(
      grafeas::v1::CreateNoteRequest const& request);

  virtual google::cloud::Idempotency BatchCreateNotes(
      grafeas::v1::BatchCreateNotesRequest const& request);

  virtual google::cloud::Idempotency UpdateNote(
      grafeas::v1::UpdateNoteRequest const& request);

  virtual google::cloud::Idempotency ListNoteOccurrences(
      grafeas::v1::ListNoteOccurrencesRequest request);
};

std::unique_ptr<GrafeasConnectionIdempotencyPolicy>
MakeDefaultGrafeasConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_V1_GRAFEAS_CONNECTION_IDEMPOTENCY_POLICY_H
