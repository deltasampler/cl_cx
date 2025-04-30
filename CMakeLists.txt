set(
    CL_SOURCE
    "source/cl/camera/cam2.cpp"
    "source/cl/compiler/lexer.cpp"
    "source/cl/compiler/scanner.cpp"
    "source/cl/compiler/token.cpp"
    "source/cl/math/mat2.cpp"
    "source/cl/math/mat2x3.cpp"
    "source/cl/math/mat3.cpp"
    "source/cl/math/mat4.cpp"
    "source/cl/math/math.cpp"
    "source/cl/math/rand.cpp"
    "source/cl/math/vec2.cpp"
    "source/cl/math/vec2s.cpp"
    "source/cl/math/vec3.cpp"
    "source/cl/math/vec3s.cpp"
    "source/cl/math/vec4.cpp"
    "source/cl/math/vec4s.cpp"
    "source/cl/string/cstr.cpp"
    "source/cl/string/dstr.cpp"
    "source/cl/string/fstr.cpp"
)

add_library(cl ${CL_SOURCE})
target_include_directories(cl PUBLIC "source/")
