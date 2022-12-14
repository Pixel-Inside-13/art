/*Copyright (C) 2018 The Android Open Source Project
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

#ifndef ART_COMPILER_OPTIMIZING_INSTRUCTION_SIMPLIFIER_X86_H_
#define ART_COMPILER_OPTIMIZING_INSTRUCTION_SIMPLIFIER_X86_H_

#include "base/macros.h"
#include "nodes.h"
#include "optimization.h"

namespace art HIDDEN {

class CodeGenerator;
namespace x86 {

class InstructionSimplifierX86 : public HOptimization {
 public:
  InstructionSimplifierX86(HGraph* graph, CodeGenerator* codegen, OptimizingCompilerStats* stats)
      : HOptimization(graph, kInstructionSimplifierX86PassName, stats),
        codegen_(codegen) {}

  static constexpr const char* kInstructionSimplifierX86PassName = "instruction_simplifier_x86";

  bool Run() override;

 private:
  CodeGenerator* codegen_;
};

}  // namespace x86
}  // namespace art

#endif  // ART_COMPILER_OPTIMIZING_INSTRUCTION_SIMPLIFIER_X86_H_
