//===-- Implementation header for sigaction ---------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC___SUPPORT_OSUTIL_SIGACTION_H
#define LLVM_LIBC_SRC___SUPPORT_OSUTIL_SIGACTION_H

#include "hdr/types/struct_sigaction.h"
#include "src/__support/macros/config.h"

namespace LIBC_NAMESPACE_DECL {
namespace internal {

int sigaction(int signal, const struct sigaction *__restrict libc_new,
              struct sigaction *__restrict libc_old);

} // namespace internal
} // namespace LIBC_NAMESPACE_DECL

#endif // LLVM_LIBC_SRC___SUPPORT_OSUTIL_SIGACTION_H
