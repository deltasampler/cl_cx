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
void vec2_abs(vec2_t& out, const vec2_t& v) {
    out.x = mabs(v.x);
    out.y = mabs(v.y);
}

vec2_t vec2n_abs(const vec2_t& v) {
    vec2_t out;

    vec2_abs(out, v);

    return out;
}

void vec2m_abs(vec2_t& out) {
    vec2_abs(out, out);
}

void vec2_neg(vec2_t& out, const vec2_t& v) {
    out.x = -v.x;
    out.y = -v.y;
}

vec2_t vec2n_neg(const vec2_t& v) {
    vec2_t out;

    vec2_neg(out, v);

    return out;
}

void vec2m_neg(vec2_t& out) {
    vec2_neg(out, out);
}


// string
void vec2_str(const vec2_t& v, char* str) {
    sprintf(str, "vec2(%i, %i)", num_t(v.x), num_t(v.y));
}

void vec2_print(const vec2_t& v) {
    char str[128];

    vec2_str(v, str);

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
void vec2_str(const vec2_t& v, char* str) {
    sprintf(str, "vec2(%u, %u)", num_t(v.x), num_t(v.y));
}

void vec2_print(const vec2_t& v) {
    char str[128];

    vec2_str(v, str);

    printf("%s\n", str);
}
