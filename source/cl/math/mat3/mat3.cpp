#include <stdio.h>
#include <cl/types.h>
#include <cl/math/math_r.h>
#include <cl/math/math_i.h>

// float
#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "../vec2/struct.h"
#include "../vec3/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// double
#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "../vec2/struct.h"
#include "../vec3/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// int
#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "../vec2/struct.h"
#include "../vec3/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// string
void mat3_str(const mat3_t& m, char* str) {
    sprintf(
        str,
        "mat3(\n\t%i, %i, %i,\n\t%i, %i, %i,\n\t%i, %i, %i\n)\n",
        m.e00, m.e10, m.e20,
        m.e01, m.e11, m.e21,
        m.e02, m.e12, m.e22
    );
}

void mat3_print(const mat3_t& m) {
    char str[128];

    mat3_str(m, str);

    printf("%s\n", str);
}

// uint
#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "../vec2/struct.h"
#include "../vec3/struct.h"
#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// string
void mat3_str(const mat3_t& m, char* str) {
    sprintf(
        str,
        "mat3(\n\t%u, %u, %u,\n\t%u, %u, %u,\n\t%u, %u, %u\n)\n",
        m.e00, m.e10, m.e20,
        m.e01, m.e11, m.e21,
        m.e02, m.e12, m.e22
    );
}

void mat3_print(const mat3_t& m) {
    char str[128];

    mat3_str(m, str);

    printf("%s\n", str);
}
