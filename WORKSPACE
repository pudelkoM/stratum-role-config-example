workspace(name = "stratum_role_config_example")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

P4RUNTIME_VER = "1.4.0-rc.1"

P4RUNTIME_SHA = "3a32a4781c02e8aa36d998046b350c32c12abc27d62feeebff4e1554f29f37ef"

http_archive(
    name = "com_github_p4lang_p4runtime",
    sha256 = P4RUNTIME_SHA,
    strip_prefix = "p4runtime-%s/proto" % P4RUNTIME_VER,
    urls = ["https://github.com/p4lang/p4runtime/archive/v%s.zip" % P4RUNTIME_VER],
)

http_archive(
    name = "com_github_stratum_stratum",
    sha256 = "9881d4fbd67c78513029682a38843132fe67d75fa6d7174525babb4771776244",
    strip_prefix = "stratum-ae998f2c0e4a21c5dc6fb7bfce96df51f711ef4b",
    urls = ["https://github.com/stratum/stratum/archive/ae998f2c0e4a21c5dc6fb7bfce96df51f711ef4b.tar.gz"],
)

# gRPC and protobuf deps
http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "13e7c6460cd979726e5b3b129bb01c34532f115883ac696a75eb7f1d6a9765ed",
    strip_prefix = "grpc-1.40.0",
    urls = ["https://github.com/grpc/grpc/archive/v1.40.0.tar.gz"],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
