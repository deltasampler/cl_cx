#include <stdio.h>
#include <cl/types.h>
#include <cl/math/math_r.h>
#include <cl/math/math_i.h>

// float
#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "../vec3/struct.h"
#include "../vec4/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// double
#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "../vec3/struct.h"
#include "../vec4/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// int
#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "../vec3/struct.h"
#include "../vec4/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// string
void mat4_str(const mat4_t& m, char* str) {
    sprintf(
        str,
        "mat4(\n\t%i, %i, %i, %i,\n\t%i, %i, %i, %i,\n\t%i, %i, %i, %i\n\t%i, %i, %i, %i\n)",
        m.e00, m.e10, m.e20, m.e30,
        m.e01, m.e11, m.e21, m.e31,
        m.e02, m.e12, m.e22, m.e32,
        m.e03, m.e13, m.e23, m.e33
    );
}

void mat4_print(const mat4_t& m) {
    char str[256];

    mat4_str(m, str);

    printf("%s\n", str);
}

// uint
#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "../vec3/struct.h"
#include "../vec4/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// string
void mat4_str(const mat4_t& m, char* str) {
    sprintf(
        str,
        "mat4(\n\t%u, %u, %u, %u,\n\t%u, %u, %u, %u,\n\t%u, %u, %u, %u\n\t%u, %u, %u, %u\n)",
        m.e00, m.e10, m.e20, m.e30,
        m.e01, m.e11, m.e21, m.e31,
        m.e02, m.e12, m.e22, m.e32,
        m.e03, m.e13, m.e23, m.e33
    );
}

void mat4_print(const mat4_t& m) {
    char str[256];

    mat4_str(m, str);

    printf("%s\n", str);
}
