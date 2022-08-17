load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_cc//cc:defs.bzl", "cc_binary")

package(
    default_visibility = ["//visibility:public"],
)

# proto_library(
#     name = "p4_role_config_proto",
#     srcs = ["@com_github_stratum_stratum//stratum/public/proto:p4_role_config.proto"],
# )

cc_proto_library(
    name = "p4_role_config_cc_proto",
    deps = ["@com_github_stratum_stratum//stratum/public/proto:p4_role_config_proto"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":p4_role_config_cc_proto",
    ],
)
