//===------------ Implementation of an access function ----------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC___SUPPORT_OSUTIL_ACCESS_H
#define LLVM_LIBC_SRC___SUPPORT_OSUTIL_ACCESS_H

#include "src/__support/macros/config.h"

namespace LIBC_NAMESPACE_DECL {
namespace internal {

int access(const char *path, int mode);

} // namespace internal
} // namespace LIBC_NAMESPACE_DECL

#endif // LLVM_LIBC_SRC___SUPPORT_OSUTIL_ACCESS_H
