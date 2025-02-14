//===-- Linux implementation of access ------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/unistd/access.h"

#include "src/__support/OSUtil/access.h"
#include "src/__support/common.h"

#include "hdr/fcntl_macros.h"
#include "src/__support/macros/config.h"
#include "src/errno/libc_errno.h"
#include <sys/syscall.h> // For syscall numbers.

namespace LIBC_NAMESPACE_DECL {

LLVM_LIBC_FUNCTION(int, access, (const char *path, int mode)) {
    return internal::access(path, mode);
}

} // namespace LIBC_NAMESPACE_DECL
