#include <stdio.h>
#include <cl/types.h>
#include <cl/math/math_r.h>
#include <cl/math/math_i.h>

// float
#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// double
#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "real.cpp"

// int
#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// basic
void vec4_abs(vec4_t& out, const vec4_t& v) {
    out.x = mabs(v.x);
    out.y = mabs(v.y);
    out.z = mabs(v.z);
    out.w = mabs(v.w);
}

vec4_t vec4n_abs(const vec4_t& v) {
    vec4_t out;

    vec4_abs(out, v);

    return out;
}

void vec4m_abs(vec4_t& out) {
    vec4_abs(out, out);
}

void vec4_neg(vec4_t& out, const vec4_t& v) {
    out.x = -v.x;
    out.y = -v.y;
    out.z = -v.z;
    out.w = -v.w;
}

vec4_t vec4n_neg(const vec4_t& v) {
    vec4_t out;

    vec4_neg(out, v);

    return out;
}

void vec4m_neg(vec4_t& out) {
    vec4_neg(out, out);
}

// string
void vec4_str(const vec4_t& v, char* str) {
    sprintf(str, "vec4(%i, %i, %i, %i)", num_t(v.x), num_t(v.y), num_t(v.z), num_t(v.w));
}

void vec4_print(const vec4_t& v) {
    char str[128];

    vec4_str(v, str);

    printf("%s\n", str);
}

// uint
#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "struct.h"
#include "struct.cpp"
#include "base.cpp"
#include "int.cpp"

// string
void vec4_str(const vec4_t& v, char* str) {
    sprintf(str, "vec4(%u, %u, %u, %u)", num_t(v.x), num_t(v.y), num_t(v.z), num_t(v.w));
}

void vec4_print(const vec4_t& v) {
    char str[128];

    vec4_str(v, str);

    printf("%s\n", str);
}
