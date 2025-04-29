#include <stdio.h>
#include "math.h"

#include "vec4.h"

// creation
vec4_t vec4(num_t x) {
    vec4_t out;

    out.x = x;
    out.y = x;
    out.z = x;
    out.w = x;

    return out;
}

vec4_t vec4(num_t x, num_t y, num_t z, num_t w) {
    vec4_t out;

    out.x = x;
    out.y = y;
    out.z = z;
    out.w = w;

    return out;
}

void vec4_set(vec4_t& out, num_t x, num_t y, num_t z, num_t w) {
    out.x = x;
    out.y = y;
    out.z = z;
    out.w = w;
}

void vec4_copy(vec4_t& out, const vec4_t& v) {
    out.x = v.x;
    out.y = v.y;
    out.z = v.z;
    out.w = v.w;
}

vec4_t vec4n_copy(const vec4_t& v) {
    vec4_t out;

    vec4_copy(out, v);

    return out;
}

// unary
void vec4_zero(vec4_t& out) {
    out.x = 0.0;
    out.y = 0.0;
    out.z = 0.0;
    out.w = 0.0;
}

vec4_t vec4n_zero() {
    vec4_t out;

    vec4_zero(out);

    return out;
}

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
    out.x = 1.0 / v.x;
    out.y = 1.0 / v.y;
    out.z = 1.0 / v.z;
    out.w = 1.0 / v.w;
}

vec4_t vec4n_inv(const vec4_t& v) {
    vec4_t out;

    vec4_inv(out, v);

    return out;
}

void vec4m_inv(vec4_t& out) {
    vec4_inv(out, out);
}

// arithmetic vector x vector
void vec4_add(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = v0.x + v1.x;
    out.y = v0.y + v1.y;
    out.z = v0.z + v1.z;
    out.w = v0.w + v1.w;
}

vec4_t vec4n_add(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_add(out, v0, v1);

    return out;
}

void vec4m_add(vec4_t& out, const vec4_t& v) {
    vec4_add(out, out, v);
}

void vec4_sub(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = v0.x - v1.x;
    out.y = v0.y - v1.y;
    out.z = v0.z - v1.z;
    out.w = v0.w - v1.w;
}

vec4_t vec4n_sub(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_sub(out, v0, v1);

    return out;
}

void vec4m_sub(vec4_t& out, const vec4_t& v) {
    vec4_sub(out, out, v);
}

void vec4_mul(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = v0.x * v1.x;
    out.y = v0.y * v1.y;
    out.z = v0.z * v1.z;
    out.w = v0.w * v1.w;
}

vec4_t vec4n_mul(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_mul(out, v0, v1);

    return out;
}

void vec4m_mul(vec4_t& out, const vec4_t& v) {
    vec4_mul(out, out, v);
}

void vec4_div(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = v0.x / v1.x;
    out.y = v0.y / v1.y;
    out.z = v0.z / v1.z;
    out.w = v0.w / v1.w;
}

vec4_t vec4n_div(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_div(out, v0, v1);

    return out;
}

void vec4m_div(vec4_t& out, const vec4_t& v) {
    vec4_div(out, out, v);
}

// arithmetic vector x scalar
void vec4_adds(vec4_t& out, const vec4_t& v, num_t s) {
    out.x = v.x + s;
    out.y = v.y + s;
    out.z = v.z + s;
    out.w = v.w + s;
}

vec4_t vec4n_adds(const vec4_t& v, num_t s) {
    vec4_t out;

    vec4_adds(out, v, s);

    return out;
}

void vec4m_adds(vec4_t& out, num_t s) {
    vec4_adds(out, out, s);
}

void vec4_subs(vec4_t& out, const vec4_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
    out.z = v.z - s;
    out.w = v.w - s;
}

vec4_t vec4n_subs(const vec4_t& v, num_t s) {
    vec4_t out;

    vec4_subs(out, v, s);

    return out;
}

void vec4m_subs(vec4_t& out, num_t s) {
    vec4_subs(out, out, s);
}

void vec4_muls(vec4_t& out, const vec4_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
    out.z = v.z - s;
    out.w = v.w - s;
}

vec4_t vec4n_muls(const vec4_t& v, num_t s) {
    vec4_t out;

    vec4_muls(out, v, s);

    return out;
}

void vec4m_muls(vec4_t& out, num_t s) {
    vec4_muls(out, out, s);
}

void vec4_divs(vec4_t& out, const vec4_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
    out.z = v.z - s;
    out.w = v.w - s;
}

vec4_t vec4n_divs(const vec4_t& v, num_t s) {
    vec4_t out;

    vec4_divs(out, v, s);

    return out;
}

void vec4m_divs(vec4_t& out, num_t s) {
    vec4_divs(out, out, s);
}

// arithmetic vector x vector x scalar
void vec4_addmuls(vec4_t& out, const vec4_t& v0, const vec4_t& v1, num_t s) {
    out.x = v0.x + v1.x * s;
    out.y = v0.y + v1.y * s;
    out.z = v0.z + v1.z * s;
    out.w = v0.w + v1.w * s;
}

vec4_t vec4n_addmuls(const vec4_t& v0, const vec4_t& v1, num_t s) {
    vec4_t out;

    vec4_addmuls(out, v0, v1, s);

    return out;
}

void vec4m_addmuls(vec4_t& out, const vec4_t& v, num_t s) {
    vec4_addmuls(out, out, v, s);
}

// product
num_t vec4_dot(const vec4_t& v0, const vec4_t& v1) {
    return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w * v1.w;
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

    if (l > 0.0) {
        l = 1.0 / sqrt(l);
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

    if (l > 0.0) {
        l = 1.0 / sqrt(l);
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

// operator overloading
vec4_t operator+(const vec4_t& v0, const vec4_t& v1) {
    return vec4n_add(v0, v1);
}

vec4_t& operator+=(vec4_t& out, const vec4_t& v) {
    vec4m_add(out, v);

    return out;
}

vec4_t operator-(const vec4_t& v0, const vec4_t& v1) {
    return vec4n_sub(v0, v1);
}

vec4_t& operator-=(vec4_t& out, const vec4_t& v) {
    vec4m_sub(out, v);

    return out;
}

vec4_t operator*(const vec4_t& v0, const vec4_t& v1) {
    return vec4n_mul(v0, v1);
}

vec4_t& operator*=(vec4_t& out, const vec4_t& v) {
    vec4m_mul(out, v);

    return out;
}

vec4_t operator/(const vec4_t& v0, const vec4_t& v1) {
    return vec4n_div(v0, v1);
}

vec4_t& operator/=(vec4_t& out, const vec4_t& v) {
    vec4m_div(out, v);

    return out;
}

vec4_t operator+(const vec4_t& v, num_t s) {
    return vec4n_adds(v, s);
}

vec4_t& operator+=(vec4_t& out, num_t s) {
    vec4m_adds(out, s);

    return out;
}

vec4_t operator-(const vec4_t& v, num_t s) {
    return vec4n_subs(v, s);
}

vec4_t& operator-=(vec4_t& out, num_t s) {
    vec4m_subs(out, s);

    return out;
}

vec4_t operator*(const vec4_t& v, num_t s) {
    return vec4n_muls(v, s);
}

vec4_t& operator*=(vec4_t& out, num_t s) {
    vec4m_muls(out, s);

    return out;
}

vec4_t operator/(const vec4_t& v, num_t s) {
    return vec4n_divs(v, s);
}

vec4_t& operator/=(vec4_t& out, num_t s) {
    vec4m_divs(out, s);

    return out;
}
