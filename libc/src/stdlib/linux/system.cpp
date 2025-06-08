//===-- Implementation of system ------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/__support/common.h"
#include "src/__support/macros/config.h"

#include "src/__support/OSUtil/access.h"
#include "src/__support/OSUtil/sigaction.h"

#include "hdr/types/struct_sigaction.h"
#include "src/signal/linux/signal_utils.h"
#include "include/llvm-libc-macros/stdlib-macros.h"

#include "src/stdlib/system.h"


#include <unistd.h> // For X_OK

namespace LIBC_NAMESPACE_DECL {

LLVM_LIBC_FUNCTION(int, system, (const char *command)) {
if (command == nullptr) {
    return internal::access("/bin/sh", X_OK) == 0;
}

#if LIBC_SYSTEM_FORK_METHOD == FORK
/*
    pid_t pid;
    int status;
    struct sigaction sa_ignore, sa_old_int, sa_old_quit;
    sigset_t block_mask, old_mask;
    const char *argv[] = { "sh", "-c", "--", command, NULL };

    sa_ignore.sa_handler = SIG_IGN;
    sa_ignore.sa_mask = empty_set();
    sa_ignore.sa_flags = 0;
    internal::sigaction(SIGINT, &sa_old_int, NULL);
    internal::sigaction(SIGQUIT, &sa_old_quit, NULL);
    
    block_mask = empty_set();
*/ 
 
#endif


// TODO: Implement this
return 0;

}

} // namespace LIBC_NAMESPACE_DECL
