package(default_visibility = ["//visibility:public"])

load(
    "@envoy//bazel:envoy_build_system.bzl",
    "envoy_cc_binary",
    "envoy_cc_library",
)
load(
    "@envoy_api//bazel:api_build_system.bzl",
    "api_proto_package"
)

envoy_cc_library(
    name = "example_filter_lib",
    srcs = ["example_filter.cc"],
    hdrs = ["example_filter.h"],
    repository = "@envoy",
    deps = [
        ":pkg_cc_proto",
        "@envoy//source/extensions/filters/http/common:pass_through_filter_lib",
    ],
)

api_proto_package()

envoy_cc_library(
    name = "config",
    srcs = ["example_config.cc"],
    hdrs = ["example_config.h"],
    repository = "@envoy",
    deps = [
        ":example_filter_lib",
        "@envoy//envoy/server:filter_config_interface",
        "@envoy//source/extensions/filters/http/common:factory_base_lib"
    ],
)
