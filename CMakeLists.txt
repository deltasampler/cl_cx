set(
    CL_SOURCE
    "source/cl/compiler/lexer.cpp"
    "source/cl/compiler/scanner.cpp"
    "source/cl/compiler/token.cpp"
    "source/cl/math/vec2.cpp"
    "source/cl/string/cstr.cpp"
    "source/cl/string/dstr.cpp"
    "source/cl/string/fstr.cpp"
)

add_library(cl ${CL_SOURCE})
target_include_directories(cl PUBLIC "source/")
