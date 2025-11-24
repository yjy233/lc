load("@rules_cc//cc:cc_binary.bzl", "cc_binary")

cc_binary(
    name = "l1",
    srcs = ["l1.cc"],
    copts = [
        "-std=c++17",
        "-I/opt/homebrew/include",
    ],
    linkopts = [
        "-L/opt/homebrew/lib",
        "-lfaiss",
    ],
)
