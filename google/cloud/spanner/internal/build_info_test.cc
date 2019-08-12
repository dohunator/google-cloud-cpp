// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/internal/build_info.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace spanner {
inline namespace SPANNER_CLIENT_NS {
namespace internal {
namespace {

using ::testing::HasSubstr;
using ::testing::Not;

TEST(BuildInfo, BuildFlags) {
  auto bf = BuildFlags();
  EXPECT_THAT(bf, Not(HasSubstr("@")));
}

TEST(BuildInfo, IsRelease) {
  bool const b = IsRelease();
  // We want to test this, but either value is fine.
  EXPECT_TRUE(b || !b);
}

TEST(BuildInfo, BuildMetadata) {
  auto const md = BuildMetadata();
  EXPECT_FALSE(md.empty());
  EXPECT_THAT(md, Not(HasSubstr("@")));
}

}  // namespace
}  // namespace internal
}  // namespace SPANNER_CLIENT_NS
}  // namespace spanner
}  // namespace cloud
}  // namespace google
