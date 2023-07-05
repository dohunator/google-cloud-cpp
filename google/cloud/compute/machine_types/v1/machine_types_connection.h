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
// source: google/cloud/compute/machine_types/v1/machine_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_H

#include "google/cloud/compute/machine_types/v1/internal/machine_types_retry_traits.h"
#include "google/cloud/compute/machine_types/v1/machine_types_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/machine_types/v1/machine_types.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using MachineTypesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_machine_types_v1_internal::MachineTypesRetryTraits>;

using MachineTypesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_machine_types_v1_internal::MachineTypesRetryTraits>;

using MachineTypesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_machine_types_v1_internal::MachineTypesRetryTraits>;

/**
 * The `MachineTypesConnection` object for `MachineTypesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `MachineTypesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `MachineTypesClient`.
 *
 * To create a concrete instance, see `MakeMachineTypesConnection()`.
 *
 * For mocking, see
 * `compute_machine_types_v1_mocks::MockMachineTypesConnection`.
 */
class MachineTypesConnection {
 public:
  virtual ~MachineTypesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::cpp::compute::v1::MachineTypeAggregatedList>
  AggregatedListMachineTypes(
      google::cloud::cpp::compute::machine_types::v1::
          AggregatedListMachineTypesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::MachineType>
  GetMachineTypes(google::cloud::cpp::compute::machine_types::v1::
                      GetMachineTypesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::MachineType>
  ListMachineTypes(
      google::cloud::cpp::compute::machine_types::v1::ListMachineTypesRequest
          request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_H
