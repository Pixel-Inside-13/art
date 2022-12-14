/*
 * Copyright (C) 2021 The Android Open Source Project
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

#ifndef ART_COMPILER_OPTIMIZING_BLOCK_NAMER_H_
#define ART_COMPILER_OPTIMIZING_BLOCK_NAMER_H_

#include <ostream>

#include "base/macros.h"

namespace art HIDDEN {
class HBasicBlock;

struct BlockNamer {
 public:
  struct NameWrapper {
    HBasicBlock* blk_;
    const BlockNamer& namer_;
  };
  virtual ~BlockNamer() {}
  virtual std::ostream& PrintName(std::ostream& os, HBasicBlock* blk) const;
  NameWrapper GetName(HBasicBlock* blk) const {
    return NameWrapper{blk, *this};
  }
};

inline std::ostream& operator<<(std::ostream& os, const BlockNamer::NameWrapper& blk) {
  return blk.namer_.PrintName(os, blk.blk_);
}

}  // namespace art

#endif  // ART_COMPILER_OPTIMIZING_BLOCK_NAMER_H_
