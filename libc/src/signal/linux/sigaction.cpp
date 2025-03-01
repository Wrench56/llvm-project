//===-- Linux implementation of sigaction ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/signal/sigaction.h"

#include "hdr/types/sigset_t.h"
#include "src/__support/common.h"
#include "src/__support/macros/config.h"

#include "src/__support/OSUtil/sigaction.h"

namespace LIBC_NAMESPACE_DECL {

// TOOD: Some architectures will have their signal trampoline functions in the
// vdso, use those when available.

extern "C" void __restore_rt();

LLVM_LIBC_FUNCTION(int, sigaction,
                   (int signal, const struct sigaction *__restrict libc_new,
                    struct sigaction *__restrict libc_old)) {

    return internal::sigaction(signal, libc_new, libc_old);
}

} // namespace LIBC_NAMESPACE_DECL
