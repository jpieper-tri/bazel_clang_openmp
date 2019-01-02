# -*- python -*-
# Copyright 2016-2018 Toyota Research Institute.  All rights reserved.
licenses(["restricted"])

package(default_visibility = ["//visibility:public"])

cc_toolchain_suite(
    name = "cpp",
    toolchains = {
        "local|clang": ":cc-compiler-clang",
        "local": ":cc-compiler-clang",
    },
)

filegroup(
    name = "empty",
    srcs = [],
)

filegroup(
    name = "clang_all",
    srcs = [
        "@clang_x86_64",
        "clang.sh",
    ],
)

cc_toolchain(
    name = "cc-compiler-clang",
    all_files = ":clang_all",
    compiler_files = ":clang_all",
    cpu = "local",
    dwp_files = ":empty",
    dynamic_runtime_libs = ["@clang_x86_64//:runtime_libs"],
    linker_files = ":clang_all",
    objcopy_files = ":clang_all",
    static_runtime_libs = ["@clang_x86_64//:static_libs"],
    strip_files = ":clang_all",
    supports_param_files = 1,
    toolchain_identifier = "local_linux_clang",
)
