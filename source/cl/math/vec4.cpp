#include <stdio.h>
#include "math.h"

#include "vec4.h"

#include "vec4_t.cpp"
#include "vec4_arithm.cpp"
#include "vec4_other.cpp"
#include "vec4_rand.cpp"

// unary
void vec4_abs(vec4_t& out, const vec4_t& v) {
    out.x = abs(v.x);
    out.y = abs(v.y);
    out.z = abs(v.z);
    out.w = abs(v.w);
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

void vec4_inv(vec4_t& out, const vec4_t& v) {
    out.x = num_t(1.0) / v.x;
    out.y = num_t(1.0) / v.y;
    out.z = num_t(1.0) / v.z;
    out.w = num_t(1.0) / v.w;
}

vec4_t vec4n_inv(const vec4_t& v) {
    vec4_t out;

    vec4_inv(out, v);

    return out;
}

void vec4m_inv(vec4_t& out) {
    vec4_inv(out, out);
}

// norm
num_t vec4_len(const vec4_t& v) {
    return hypot(v.x, v.y, v.z, v.w);
}

num_t vec4_len_sq(const vec4_t& v) {
    num_t x = v.x, y = v.y, z = v.z, w = v.w;

    return x * x + y * y + z * z + w * w;
}

num_t vec4_dist(const vec4_t& v0, const vec4_t& v1) {
    return hypot(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z, v0.w - v1.w);
}

num_t vec4_dist_sq(const vec4_t& v0, const vec4_t& v1) {
    num_t x = v0.x - v1.x;
    num_t y = v0.y - v1.y;
    num_t z = v0.z - v1.z;
    num_t w = v0.w - v1.w;

    return x * x + y * y + z * z + w * w;
}

void vec4_unit(vec4_t& out, const vec4_t& v) {
    num_t x = v.x, y = v.y, z = v.z, w = v.w;
    num_t l = x * x + y * y + z * z + w * w;

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
    out.z = z * l;
    out.w = w * l;
}

vec4_t vec4n_unit(const vec4_t& v) {
    vec4_t out;

    vec4_unit(out, v);

    return out;
}

void vec4m_unit(vec4_t& out) {
    vec4_unit(out, out);
}

void vec4_dir(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    num_t x = v0.x - v1.x, y = v0.y - v1.y, z = v0.z - v1.z, w = v0.w - v1.w;
    num_t l = x * x + y * y + z * z + w * w;

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
    out.z = z * l;
    out.w = w * l;
}

vec4_t vec4n_dir(vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_dir(out, v0, v1);

    return out;
}

// interpolation
void vec4_lerp(vec4_t& out, const vec4_t& v0, const vec4_t& v1, num_t t) {
    num_t x = v0.x, y = v0.y, z = v0.z, w = v0.w;

    out.x = x + t * (v1.x - x);
    out.y = y + t * (v1.y - y);
    out.z = z + t * (v1.z - z);
    out.w = w + t * (v1.w - w);
}

vec4_t vec4n_lerp(const vec4_t& v0, const vec4_t& v1, num_t t) {
    vec4_t out;

    vec4_lerp(out, v0, v1, t);

    return out;
}

void vec4m_lerp(vec4_t& out, const vec4_t& v, num_t t) {
    vec4_lerp(out, out, v, t);
}

// string
void vec4_str(const vec4_t& v, char* str) {
    sprintf(str, "vec4(%f, %f, %f, %f)", v.x, v.y, v.z, v.w);
}

void vec4_print(const vec4_t& v) {
    char str[128];

    vec4_str(v, str);

    printf("%s\n", str);
}
