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
// source: google/cloud/security/privateca/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_CERTIFICATE_AUTHORITY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_CERTIFICATE_AUTHORITY_CONNECTION_H

#include "google/cloud/privateca/v1/certificate_authority_connection_idempotency_policy.h"
#include "google/cloud/privateca/v1/internal/certificate_authority_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/security/privateca/v1/service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privateca_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CertificateAuthorityServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        privateca_v1_internal::CertificateAuthorityServiceRetryTraits>;

using CertificateAuthorityServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        privateca_v1_internal::CertificateAuthorityServiceRetryTraits>;

using CertificateAuthorityServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        privateca_v1_internal::CertificateAuthorityServiceRetryTraits>;

/**
 * The `CertificateAuthorityServiceConnection` object for
 * `CertificateAuthorityServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CertificateAuthorityServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `CertificateAuthorityServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeCertificateAuthorityServiceConnection()`.
 *
 * For mocking, see
 * `privateca_v1_mocks::MockCertificateAuthorityServiceConnection`.
 */
class CertificateAuthorityServiceConnection {
 public:
  virtual ~CertificateAuthorityServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  CreateCertificate(
      google::cloud::security::privateca::v1::CreateCertificateRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  GetCertificate(
      google::cloud::security::privateca::v1::GetCertificateRequest const&
          request);

  virtual StreamRange<google::cloud::security::privateca::v1::Certificate>
  ListCertificates(
      google::cloud::security::privateca::v1::ListCertificatesRequest request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  RevokeCertificate(
      google::cloud::security::privateca::v1::RevokeCertificateRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::Certificate>
  UpdateCertificate(
      google::cloud::security::privateca::v1::UpdateCertificateRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  ActivateCertificateAuthority(
      google::cloud::security::privateca::v1::
          ActivateCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  CreateCertificateAuthority(
      google::cloud::security::privateca::v1::
          CreateCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  DisableCertificateAuthority(
      google::cloud::security::privateca::v1::
          DisableCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  EnableCertificateAuthority(
      google::cloud::security::privateca::v1::
          EnableCertificateAuthorityRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::
                       FetchCertificateAuthorityCsrResponse>
  FetchCertificateAuthorityCsr(
      google::cloud::security::privateca::v1::
          FetchCertificateAuthorityCsrRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
  GetCertificateAuthority(google::cloud::security::privateca::v1::
                              GetCertificateAuthorityRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateAuthority>
  ListCertificateAuthorities(
      google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  UndeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          UndeleteCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  DeleteCertificateAuthority(
      google::cloud::security::privateca::v1::
          DeleteCertificateAuthorityRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
  UpdateCertificateAuthority(
      google::cloud::security::privateca::v1::
          UpdateCertificateAuthorityRequest const& request);

  virtual future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
  CreateCaPool(
      google::cloud::security::privateca::v1::CreateCaPoolRequest const&
          request);

  virtual future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
  UpdateCaPool(
      google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::CaPool> GetCaPool(
      google::cloud::security::privateca::v1::GetCaPoolRequest const& request);

  virtual StreamRange<google::cloud::security::privateca::v1::CaPool>
  ListCaPools(
      google::cloud::security::privateca::v1::ListCaPoolsRequest request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
  DeleteCaPool(
      google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
          request);

  virtual StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
  FetchCaCerts(
      google::cloud::security::privateca::v1::FetchCaCertsRequest const&
          request);

  virtual StatusOr<
      google::cloud::security::privateca::v1::CertificateRevocationList>
  GetCertificateRevocationList(
      google::cloud::security::privateca::v1::
          GetCertificateRevocationListRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateRevocationList>
  ListCertificateRevocationLists(
      google::cloud::security::privateca::v1::
          ListCertificateRevocationListsRequest request);

  virtual future<StatusOr<
      google::cloud::security::privateca::v1::CertificateRevocationList>>
  UpdateCertificateRevocationList(
      google::cloud::security::privateca::v1::
          UpdateCertificateRevocationListRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
  CreateCertificateTemplate(
      google::cloud::security::privateca::v1::
          CreateCertificateTemplateRequest const& request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
  DeleteCertificateTemplate(
      google::cloud::security::privateca::v1::
          DeleteCertificateTemplateRequest const& request);

  virtual StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
  GetCertificateTemplate(google::cloud::security::privateca::v1::
                             GetCertificateTemplateRequest const& request);

  virtual StreamRange<
      google::cloud::security::privateca::v1::CertificateTemplate>
  ListCertificateTemplates(
      google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
          request);

  virtual future<
      StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
  UpdateCertificateTemplate(
      google::cloud::security::privateca::v1::
          UpdateCertificateTemplateRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `CertificateAuthorityServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * CertificateAuthorityServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CertificateAuthorityServiceConnection`. Expected options are any of
 * the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::privateca_v1::CertificateAuthorityServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `CertificateAuthorityServiceConnection` created by this function.
 */
std::shared_ptr<CertificateAuthorityServiceConnection>
MakeCertificateAuthorityServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVATECA_V1_CERTIFICATE_AUTHORITY_CONNECTION_H
