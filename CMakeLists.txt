set(
    CL_SOURCE
    "source/cl/compiler/lexer.cpp"
    "source/cl/compiler/scanner.cpp"
    "source/cl/compiler/token.cpp"
    "source/cl/math/mat2_affine.cpp"
    "source/cl/math/mat2.cpp"
    "source/cl/math/mat2x3_affine.cpp"
    "source/cl/math/mat2x3.cpp"
    "source/cl/math/mat3_affine.cpp"
    "source/cl/math/mat3.cpp"
    "source/cl/math/mat4_affine.cpp"
    "source/cl/math/mat4_cam.cpp"
    "source/cl/math/mat4_proj.cpp"
    "source/cl/math/mat4.cpp"
    "source/cl/math/vec2_other.cpp"
    "source/cl/math/vec2_rand.cpp"
    "source/cl/math/vec2_transf.cpp"
    "source/cl/math/vec2.cpp"
    "source/cl/math/vec3_other.cpp"
    "source/cl/math/vec3_rand.cpp"
    "source/cl/math/vec3_transf.cpp"
    "source/cl/math/vec3.cpp"
    "source/cl/math/vec4_other.cpp"
    "source/cl/math/vec4_rand.cpp"
    "source/cl/math/vec4_transf.cpp"
    "source/cl/math/vec4.cpp"
    "source/cl/string/cstr.cpp"
    "source/cl/string/dstr.cpp"
    "source/cl/string/fstr.cpp"
)

add_library(cl ${CL_SOURCE})
target_include_directories(cl PUBLIC "source/")
