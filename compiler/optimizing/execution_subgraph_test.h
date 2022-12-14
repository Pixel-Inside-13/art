/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_COMPILER_OPTIMIZING_EXECUTION_SUBGRAPH_TEST_H_
#define ART_COMPILER_OPTIMIZING_EXECUTION_SUBGRAPH_TEST_H_

#include "android-base/macros.h"

#include "base/macros.h"

namespace art HIDDEN {

class HGraph;
class ExecutionSubgraph;

class ExecutionSubgraphTestHelper {
 public:
  static bool CalculateValidity(HGraph* graph, const ExecutionSubgraph* subgraph);

 private:
  ExecutionSubgraphTestHelper() = delete;

  DISALLOW_COPY_AND_ASSIGN(ExecutionSubgraphTestHelper);
};
}  // namespace art

#endif  // ART_COMPILER_OPTIMIZING_EXECUTION_SUBGRAPH_TEST_H_
