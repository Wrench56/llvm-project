//===-- Unittests for system ----------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "src/stdlib/system.h"
#include "test/UnitTest/Test.h"

#include <unistd.h>

TEST(LlvmLibcSystem, Nullptr) {
    int ret = LIBC_NAMESPACE::system(NULL);
    bool rret = access("/bin/sh", X_OK) == 0;

    ASSERT_TRUE(ret == rret);
}
