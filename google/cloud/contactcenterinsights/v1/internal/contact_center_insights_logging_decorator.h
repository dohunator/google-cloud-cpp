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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_V1_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_V1_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H

#include "google/cloud/contactcenterinsights/v1/internal/contact_center_insights_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace contactcenterinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContactCenterInsightsLogging : public ContactCenterInsightsStub {
 public:
  ~ContactCenterInsightsLogging() override = default;
  ContactCenterInsightsLogging(std::shared_ptr<ContactCenterInsightsStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components);

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  CreateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUploadConversation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::UploadConversationRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UploadConversation(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::UploadConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  UpdateConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
  GetConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetConversationRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
  ListConversations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
          request) override;

  Status DeleteConversation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAnalysis(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateAnalysis(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Analysis> GetAnalysis(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
  ListAnalyses(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
          request) override;

  Status DeleteAnalysis(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncBulkAnalyzeConversations(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          BulkAnalyzeConversationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> BulkAnalyzeConversations(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          BulkAnalyzeConversationsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBulkDeleteConversations(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          BulkDeleteConversationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> BulkDeleteConversations(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          BulkDeleteConversationsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncIngestConversations(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          IngestConversationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> IngestConversations(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          IngestConversationsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportInsightsData(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ExportInsightsData(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
  UpdateIssueModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::IssueModel> GetIssueModel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
  ListIssueModels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeployIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUndeployIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UndeployIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::ExportIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ExportIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::ExportIssueModelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportIssueModel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::ImportIssueModelRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> ImportIssueModel(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::ImportIssueModelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> GetIssue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetIssueRequest const& request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
  ListIssues(grpc::ClientContext& context, Options const& options,
             google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
                 request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Issue> UpdateIssue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
          request) override;

  Status DeleteIssue(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::
               CalculateIssueModelStatsResponse>
  CalculateIssueModelStats(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          CalculateIssueModelStatsRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  CreatePhraseMatcher(grpc::ClientContext& context, Options const& options,
                      google::cloud::contactcenterinsights::v1::
                          CreatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  GetPhraseMatcher(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
  ListPhraseMatchers(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
          request) override;

  Status DeletePhraseMatcher(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          DeletePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
  UpdatePhraseMatcher(grpc::ClientContext& context, Options const& options,
                      google::cloud::contactcenterinsights::v1::
                          UpdatePhraseMatcherRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
  CalculateStats(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> GetSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::Settings> UpdateSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::AnalysisRule>
  CreateAnalysisRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CreateAnalysisRuleRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::AnalysisRule>
  GetAnalysisRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetAnalysisRuleRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysisRulesResponse>
  ListAnalysisRules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListAnalysisRulesRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::AnalysisRule>
  UpdateAnalysisRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateAnalysisRuleRequest const&
          request) override;

  Status DeleteAnalysisRule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteAnalysisRuleRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::EncryptionSpec>
  GetEncryptionSpec(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetEncryptionSpecRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncInitializeEncryptionSpec(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          InitializeEncryptionSpecRequest const& request) override;

  StatusOr<google::longrunning::Operation> InitializeEncryptionSpec(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          InitializeEncryptionSpecRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> CreateView(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CreateViewRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> GetView(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetViewRequest const& request)
      override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
  ListViews(grpc::ClientContext& context, Options const& options,
            google::cloud::contactcenterinsights::v1::ListViewsRequest const&
                request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::View> UpdateView(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
          request) override;

  Status DeleteView(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncQueryMetrics(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::QueryMetricsRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> QueryMetrics(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::QueryMetricsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaQuestion>
  CreateQaQuestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CreateQaQuestionRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaQuestion> GetQaQuestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetQaQuestionRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaQuestion>
  UpdateQaQuestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateQaQuestionRequest const&
          request) override;

  Status DeleteQaQuestion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteQaQuestionRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListQaQuestionsResponse>
  ListQaQuestions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListQaQuestionsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecard>
  CreateQaScorecard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::CreateQaScorecardRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecard>
  GetQaScorecard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetQaScorecardRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecard>
  UpdateQaScorecard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::UpdateQaScorecardRequest const&
          request) override;

  Status DeleteQaScorecard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::DeleteQaScorecardRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListQaScorecardsResponse>
  ListQaScorecards(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListQaScorecardsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecardRevision>
  CreateQaScorecardRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          CreateQaScorecardRevisionRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecardRevision>
  GetQaScorecardRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          GetQaScorecardRevisionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncTuneQaScorecardRevision(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          TuneQaScorecardRevisionRequest const& request) override;

  StatusOr<google::longrunning::Operation> TuneQaScorecardRevision(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          TuneQaScorecardRevisionRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecardRevision>
  DeployQaScorecardRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          DeployQaScorecardRevisionRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::QaScorecardRevision>
  UndeployQaScorecardRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          UndeployQaScorecardRevisionRequest const& request) override;

  Status DeleteQaScorecardRevision(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          DeleteQaScorecardRevisionRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::
               ListQaScorecardRevisionsResponse>
  ListQaScorecardRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          ListQaScorecardRevisionsRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::FeedbackLabel>
  CreateFeedbackLabel(grpc::ClientContext& context, Options const& options,
                      google::cloud::contactcenterinsights::v1::
                          CreateFeedbackLabelRequest const& request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::ListFeedbackLabelsResponse>
  ListFeedbackLabels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::ListFeedbackLabelsRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::FeedbackLabel>
  GetFeedbackLabel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::GetFeedbackLabelRequest const&
          request) override;

  StatusOr<google::cloud::contactcenterinsights::v1::FeedbackLabel>
  UpdateFeedbackLabel(grpc::ClientContext& context, Options const& options,
                      google::cloud::contactcenterinsights::v1::
                          UpdateFeedbackLabelRequest const& request) override;

  Status DeleteFeedbackLabel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          DeleteFeedbackLabelRequest const& request) override;

  StatusOr<
      google::cloud::contactcenterinsights::v1::ListAllFeedbackLabelsResponse>
  ListAllFeedbackLabels(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contactcenterinsights::v1::
          ListAllFeedbackLabelsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncBulkUploadFeedbackLabels(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          BulkUploadFeedbackLabelsRequest const& request) override;

  StatusOr<google::longrunning::Operation> BulkUploadFeedbackLabels(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          BulkUploadFeedbackLabelsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncBulkDownloadFeedbackLabels(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::contactcenterinsights::v1::
          BulkDownloadFeedbackLabelsRequest const& request) override;

  StatusOr<google::longrunning::Operation> BulkDownloadFeedbackLabels(
      grpc::ClientContext& context, Options options,
      google::cloud::contactcenterinsights::v1::
          BulkDownloadFeedbackLabelsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ContactCenterInsightsStub> child_;
  TracingOptions tracing_options_;
};  // ContactCenterInsightsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contactcenterinsights_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTACTCENTERINSIGHTS_V1_INTERNAL_CONTACT_CENTER_INSIGHTS_LOGGING_DECORATOR_H
