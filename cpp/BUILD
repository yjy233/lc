load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "list_node",
    hdrs = ["node.h"],
    srcs = ["node.cc"],
)

cc_binary(
    name = "lc10",
    srcs = ["lc10.cc"],
)

cc_binary(
    name = "lc12",
    srcs = ["lc12.cc"],
)

cc_binary(
    name = "lc13",
    srcs = ["lc13.cc"],
)

cc_binary(
    name = "lc15",
    srcs = ["lc15.cc"],
)

cc_binary(
    name = "lc21",
    srcs = ["lc21.cc"],
    deps = [
        ":list_node",
    ],
)

cc_binary(
    name = "lc22",
    srcs = ["lc22.cc"],
)

cc_binary(
    name = "lc25",
    srcs = ["lc25.cc"],
    deps = [
        ":list_node",
    ],
)