# This test is not run by default as it requires input.
add_llvm_example(external-hello-world
  external-hello.cpp
)

target_link_libraries(external-hello-world
  PRIVATE
  flang_rt.runtime
  )
