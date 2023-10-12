cc_library(
    name = "hello",
    srcs = ["Src/test.cpp"],
    hdrs = ["Interface/Int/strct.hpp", "Interface/strct2.hpp", "Interface/test.hpp"]
)

cc_binary(
    name = "hello_bin",
    srcs = ["main.cpp"],
    deps = [":hello"]
)