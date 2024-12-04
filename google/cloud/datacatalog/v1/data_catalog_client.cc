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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/v1/data_catalog_client.h"
#include "google/cloud/datacatalog/v1/data_catalog_options.h"
#include <memory>
#include <thread>
#include <utility>

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataCatalogClient::DataCatalogClient(
    std::shared_ptr<DataCatalogConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DataCatalogClient::~DataCatalogClient() = default;

StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
DataCatalogClient::SearchCatalog(
    google::cloud::datacatalog::v1::SearchCatalogRequest::Scope const& scope,
    std::string const& query, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::SearchCatalogRequest request;
  *request.mutable_scope() = scope;
  request.set_query(query);
  return connection_->SearchCatalog(request);
}

StreamRange<google::cloud::datacatalog::v1::SearchCatalogResult>
DataCatalogClient::SearchCatalog(
    google::cloud::datacatalog::v1::SearchCatalogRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchCatalog(std::move(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::CreateEntryGroup(
    std::string const& parent, std::string const& entry_group_id,
    google::cloud::datacatalog::v1::EntryGroup const& entry_group,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::CreateEntryGroupRequest request;
  request.set_parent(parent);
  request.set_entry_group_id(entry_group_id);
  *request.mutable_entry_group() = entry_group;
  return connection_->CreateEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::CreateEntryGroup(
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::GetEntryGroup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::GetEntryGroupRequest request;
  request.set_name(name);
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::GetEntryGroup(std::string const& name,
                                 google::protobuf::FieldMask const& read_mask,
                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::GetEntryGroupRequest request;
  request.set_name(name);
  *request.mutable_read_mask() = read_mask;
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::GetEntryGroup(
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::UpdateEntryGroup(
    google::cloud::datacatalog::v1::EntryGroup const& entry_group,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateEntryGroupRequest request;
  *request.mutable_entry_group() = entry_group;
  return connection_->UpdateEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::UpdateEntryGroup(
    google::cloud::datacatalog::v1::EntryGroup const& entry_group,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateEntryGroupRequest request;
  *request.mutable_entry_group() = entry_group;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntryGroup(request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::UpdateEntryGroup(
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntryGroup(request);
}

Status DataCatalogClient::DeleteEntryGroup(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::DeleteEntryGroupRequest request;
  request.set_name(name);
  return connection_->DeleteEntryGroup(request);
}

Status DataCatalogClient::DeleteEntryGroup(
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntryGroup(request);
}

StreamRange<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::ListEntryGroups(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::ListEntryGroupsRequest request;
  request.set_parent(parent);
  return connection_->ListEntryGroups(request);
}

StreamRange<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogClient::ListEntryGroups(
    google::cloud::datacatalog::v1::ListEntryGroupsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntryGroups(std::move(request));
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::CreateEntry(
    std::string const& parent, std::string const& entry_id,
    google::cloud::datacatalog::v1::Entry const& entry, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::CreateEntryRequest request;
  request.set_parent(parent);
  request.set_entry_id(entry_id);
  *request.mutable_entry() = entry;
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::CreateEntry(
    google::cloud::datacatalog::v1::CreateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::UpdateEntry(
    google::cloud::datacatalog::v1::Entry const& entry, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateEntryRequest request;
  *request.mutable_entry() = entry;
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::UpdateEntry(
    google::cloud::datacatalog::v1::Entry const& entry,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateEntryRequest request;
  *request.mutable_entry() = entry;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::UpdateEntry(
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateEntry(request);
}

Status DataCatalogClient::DeleteEntry(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::DeleteEntryRequest request;
  request.set_name(name);
  return connection_->DeleteEntry(request);
}

Status DataCatalogClient::DeleteEntry(
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::GetEntry(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::GetEntryRequest request;
  request.set_name(name);
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::GetEntry(
    google::cloud::datacatalog::v1::GetEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::Entry> DataCatalogClient::LookupEntry(
    google::cloud::datacatalog::v1::LookupEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupEntry(request);
}

StreamRange<google::cloud::datacatalog::v1::Entry>
DataCatalogClient::ListEntries(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::ListEntriesRequest request;
  request.set_parent(parent);
  return connection_->ListEntries(request);
}

StreamRange<google::cloud::datacatalog::v1::Entry>
DataCatalogClient::ListEntries(
    google::cloud::datacatalog::v1::ListEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListEntries(std::move(request));
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogClient::ModifyEntryOverview(
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ModifyEntryOverview(request);
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogClient::ModifyEntryContacts(
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ModifyEntryContacts(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::CreateTagTemplate(
    std::string const& parent, std::string const& tag_template_id,
    google::cloud::datacatalog::v1::TagTemplate const& tag_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::CreateTagTemplateRequest request;
  request.set_parent(parent);
  request.set_tag_template_id(tag_template_id);
  *request.mutable_tag_template() = tag_template;
  return connection_->CreateTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::CreateTagTemplate(
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::GetTagTemplate(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::GetTagTemplateRequest request;
  request.set_name(name);
  return connection_->GetTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::GetTagTemplate(
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::UpdateTagTemplate(
    google::cloud::datacatalog::v1::TagTemplate const& tag_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagTemplateRequest request;
  *request.mutable_tag_template() = tag_template;
  return connection_->UpdateTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::UpdateTagTemplate(
    google::cloud::datacatalog::v1::TagTemplate const& tag_template,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagTemplateRequest request;
  *request.mutable_tag_template() = tag_template;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogClient::UpdateTagTemplate(
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTagTemplate(request);
}

Status DataCatalogClient::DeleteTagTemplate(std::string const& name, bool force,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::DeleteTagTemplateRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteTagTemplate(request);
}

Status DataCatalogClient::DeleteTagTemplate(
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTagTemplate(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::CreateTagTemplateField(
    std::string const& parent, std::string const& tag_template_field_id,
    google::cloud::datacatalog::v1::TagTemplateField const& tag_template_field,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest request;
  request.set_parent(parent);
  request.set_tag_template_field_id(tag_template_field_id);
  *request.mutable_tag_template_field() = tag_template_field;
  return connection_->CreateTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::CreateTagTemplateField(
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::UpdateTagTemplateField(
    std::string const& name,
    google::cloud::datacatalog::v1::TagTemplateField const& tag_template_field,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest request;
  request.set_name(name);
  *request.mutable_tag_template_field() = tag_template_field;
  return connection_->UpdateTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::UpdateTagTemplateField(
    std::string const& name,
    google::cloud::datacatalog::v1::TagTemplateField const& tag_template_field,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest request;
  request.set_name(name);
  *request.mutable_tag_template_field() = tag_template_field;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::UpdateTagTemplateField(
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::RenameTagTemplateField(
    std::string const& name, std::string const& new_tag_template_field_id,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest request;
  request.set_name(name);
  request.set_new_tag_template_field_id(new_tag_template_field_id);
  return connection_->RenameTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::RenameTagTemplateField(
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::RenameTagTemplateFieldEnumValue(
    std::string const& name, std::string const& new_enum_value_display_name,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::RenameTagTemplateFieldEnumValueRequest
      request;
  request.set_name(name);
  request.set_new_enum_value_display_name(new_enum_value_display_name);
  return connection_->RenameTagTemplateFieldEnumValue(request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogClient::RenameTagTemplateFieldEnumValue(
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RenameTagTemplateFieldEnumValue(request);
}

Status DataCatalogClient::DeleteTagTemplateField(std::string const& name,
                                                 bool force, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest request;
  request.set_name(name);
  request.set_force(force);
  return connection_->DeleteTagTemplateField(request);
}

Status DataCatalogClient::DeleteTagTemplateField(
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTagTemplateField(request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogClient::CreateTag(
    std::string const& parent, google::cloud::datacatalog::v1::Tag const& tag,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::CreateTagRequest request;
  request.set_parent(parent);
  *request.mutable_tag() = tag;
  return connection_->CreateTag(request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogClient::CreateTag(
    google::cloud::datacatalog::v1::CreateTagRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTag(request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogClient::UpdateTag(
    google::cloud::datacatalog::v1::Tag const& tag, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagRequest request;
  *request.mutable_tag() = tag;
  return connection_->UpdateTag(request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogClient::UpdateTag(
    google::cloud::datacatalog::v1::Tag const& tag,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UpdateTagRequest request;
  *request.mutable_tag() = tag;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTag(request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogClient::UpdateTag(
    google::cloud::datacatalog::v1::UpdateTagRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTag(request);
}

Status DataCatalogClient::DeleteTag(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::DeleteTagRequest request;
  request.set_name(name);
  return connection_->DeleteTag(request);
}

Status DataCatalogClient::DeleteTag(
    google::cloud::datacatalog::v1::DeleteTagRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTag(request);
}

StreamRange<google::cloud::datacatalog::v1::Tag> DataCatalogClient::ListTags(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::ListTagsRequest request;
  request.set_parent(parent);
  return connection_->ListTags(request);
}

StreamRange<google::cloud::datacatalog::v1::Tag> DataCatalogClient::ListTags(
    google::cloud::datacatalog::v1::ListTagsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTags(std::move(request));
}

future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
DataCatalogClient::ReconcileTags(
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconcileTags(request);
}

StatusOr<google::longrunning::Operation> DataCatalogClient::ReconcileTags(
    NoAwaitTag,
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconcileTags(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::datacatalog::v1::ReconcileTagsResponse>>
DataCatalogClient::ReconcileTags(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReconcileTags(operation);
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogClient::StarEntry(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::StarEntryRequest request;
  request.set_name(name);
  return connection_->StarEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogClient::StarEntry(
    google::cloud::datacatalog::v1::StarEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StarEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogClient::UnstarEntry(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datacatalog::v1::UnstarEntryRequest request;
  request.set_name(name);
  return connection_->UnstarEntry(request);
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogClient::UnstarEntry(
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UnstarEntry(request);
}

StatusOr<google::iam::v1::Policy> DataCatalogClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> DataCatalogClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<DataCatalogBackoffPolicyOption>(opts,
                                                                 __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy =
      internal::CurrentOptions().get<DataCatalogBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return internal::CancelledError(
          "updater did not yield a policy",
          GCP_ERROR_INFO().WithMetadata("gl-cpp.error.origin", "client"));
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> DataCatalogClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> DataCatalogClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> DataCatalogClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
DataCatalogClient::ImportEntries(
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportEntries(request);
}

StatusOr<google::longrunning::Operation> DataCatalogClient::ImportEntries(
    NoAwaitTag,
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportEntries(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::datacatalog::v1::ImportEntriesResponse>>
DataCatalogClient::ImportEntries(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportEntries(operation);
}

StatusOr<google::cloud::datacatalog::v1::MigrationConfig>
DataCatalogClient::SetConfig(
    google::cloud::datacatalog::v1::SetConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetConfig(request);
}

StatusOr<google::cloud::datacatalog::v1::OrganizationConfig>
DataCatalogClient::RetrieveConfig(
    google::cloud::datacatalog::v1::RetrieveConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetrieveConfig(request);
}

StatusOr<google::cloud::datacatalog::v1::MigrationConfig>
DataCatalogClient::RetrieveEffectiveConfig(
    google::cloud::datacatalog::v1::RetrieveEffectiveConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RetrieveEffectiveConfig(request);
}

StreamRange<google::longrunning::Operation> DataCatalogClient::ListOperations(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation> DataCatalogClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> DataCatalogClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> DataCatalogClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status DataCatalogClient::DeleteOperation(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status DataCatalogClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status DataCatalogClient::CancelOperation(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status DataCatalogClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google
