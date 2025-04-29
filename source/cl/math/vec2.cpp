#include <stdio.h>
#include "math.h"

#include "vec2.h"

// creation
vec2_t vec2(num_t x) {
    vec2_t out;

    out.x = x;
    out.y = x;

    return out;
}

vec2_t vec2(num_t x, num_t y) {
    vec2_t out;

    out.x = x;
    out.y = y;

    return out;
}

void vec2_set(vec2_t& out, num_t x, num_t y) {
    out.x = x;
    out.y = y;
}

void vec2_copy(vec2_t& out, const vec2_t& v) {
    out.x = v.x;
    out.y = v.y;
}

vec2_t vec2n_copy(const vec2_t& v) {
    vec2_t out;

    vec2_copy(out, v);

    return out;
}

// unary
void vec2_zero(vec2_t& out) {
    out.x = 0.0;
    out.y = 0.0;
}

vec2_t vec2n_zero() {
    vec2_t out;

    vec2_zero(out);

    return out;
}

void vec2_abs(vec2_t& out, const vec2_t& v) {
    out.x = abs(v.x);
    out.y = abs(v.y);
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

void vec2_inv(vec2_t& out, const vec2_t& v) {
    out.x = 1.0 / v.x;
    out.y = 1.0 / v.y;
}

vec2_t vec2n_inv(const vec2_t& v) {
    vec2_t out;

    vec2_inv(out, v);

    return out;
}

void vec2m_inv(vec2_t& out) {
    vec2_inv(out, out);
}

// arithmetic vector x vector
void vec2_add(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x + v1.x;
    out.y = v0.y + v1.y;
}

vec2_t vec2n_add(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_add(out, v0, v1);

    return out;
}

void vec2m_add(vec2_t& out, const vec2_t& v) {
    vec2_add(out, out, v);
}

void vec2_sub(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x - v1.x;
    out.y = v0.y - v1.y;
}

vec2_t vec2n_sub(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_sub(out, v0, v1);

    return out;
}

void vec2m_sub(vec2_t& out, const vec2_t& v) {
    vec2_sub(out, out, v);
}

void vec2_mul(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x * v1.x;
    out.y = v0.y * v1.y;
}

vec2_t vec2n_mul(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_mul(out, v0, v1);

    return out;
}

void vec2m_mul(vec2_t& out, const vec2_t& v) {
    vec2_mul(out, out, v);
}

void vec2_div(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x / v1.x;
    out.y = v0.y / v1.y;
}

vec2_t vec2n_div(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_div(out, v0, v1);

    return out;
}

void vec2m_div(vec2_t& out, const vec2_t& v) {
    vec2_div(out, out, v);
}

// arithmetic vector x scalar
void vec2_adds(vec2_t& out, const vec2_t& v, num_t s) {
    out.x = v.x + s;
    out.y = v.y + s;
}

vec2_t vec2n_adds(const vec2_t& v, num_t s) {
    vec2_t out;

    vec2_adds(out, v, s);

    return out;
}

void vec2m_adds(vec2_t& out, num_t s) {
    vec2_adds(out, out, s);
}

void vec2_subs(vec2_t& out, const vec2_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
}

vec2_t vec2n_subs(const vec2_t& v, num_t s) {
    vec2_t out;

    vec2_subs(out, v, s);

    return out;
}

void vec2m_subs(vec2_t& out, num_t s) {
    vec2_subs(out, out, s);
}

void vec2_muls(vec2_t& out, const vec2_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
}

vec2_t vec2n_muls(const vec2_t& v, num_t s) {
    vec2_t out;

    vec2_muls(out, v, s);

    return out;
}

void vec2m_muls(vec2_t& out, num_t s) {
    vec2_muls(out, out, s);
}

void vec2_divs(vec2_t& out, const vec2_t& v, num_t s) {
    out.x = v.x - s;
    out.y = v.y - s;
}

vec2_t vec2n_divs(const vec2_t& v, num_t s) {
    vec2_t out;

    vec2_divs(out, v, s);

    return out;
}

void vec2m_divs(vec2_t& out, num_t s) {
    vec2_divs(out, out, s);
}

// arithmetic vector x vector x scalar
void vec2_addmuls(vec2_t& out, const vec2_t& v0, const vec2_t& v1, num_t s) {
    out.x = v0.x + v1.x * s;
    out.y = v0.y + v1.y * s;
}

vec2_t vec2n_addmuls(const vec2_t& v0, const vec2_t& v1, num_t s) {
    vec2_t out;

    vec2_addmuls(out, v0, v1, s);

    return out;
}

void vec2m_addmuls(vec2_t& out, const vec2_t& v, num_t s) {
    vec2_addmuls(out, out, v, s);
}

// product
num_t vec2_dot(const vec2_t& v0, const vec2_t& v1) {
    return v0.x * v1.x + v0.y * v1.y;
}

num_t vec2_cross(const vec2_t& v0, const vec2_t& v1) {
    return v0.x * v1.y - v0.y * v1.x;
}

// norm
num_t vec2_len(const vec2_t& v) {
    return hypot(v.x, v.y);
}

num_t vec2_len_sq(const vec2_t& v) {
    num_t x = v.x, y = v.y;

    return x * x + y * y;
}

num_t vec2_dist(const vec2_t& v0, const vec2_t& v1) {
    return hypot(v0.x - v1.x, v0.y - v1.y);
}

num_t vec2_dist_sq(const vec2_t& v0, const vec2_t& v1) {
    num_t x = v0.x - v1.x, y = v0.y - v1.y;

    return x * x + y * y;
}

void vec2_unit(vec2_t& out, const vec2_t& v) {
    num_t x = v.x, y = v.y;
    num_t l = x * x + y * y;

    if (l > 0.0) {
        l = 1.0 / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
}

vec2_t vec2n_unit(const vec2_t& v) {
    vec2_t out;

    vec2_unit(out, v);

    return out;
}

void vec2m_unit(vec2_t& out) {
    vec2_unit(out, out);
}

void vec2_dir(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    num_t x = v0.x - v1.x, y = v0.y - v1.y;
    num_t l = x * x + y * y;

    if (l > 0.0) {
        l = 1.0 / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
}

vec2_t vec2n_dir(vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_dir(out, v0, v1);

    return out;
}

// geometric
void vec2_refl(vec2_t& out, const vec2_t& v, const vec2_t& n) {
    num_t l = vec2_dot(n, v) * 2.0;

    out.x = v.x - n.x * l;
    out.y = v.y - n.y * l;
}

vec2_t vec2n_refl(const vec2_t& v, const vec2_t& n) {
    vec2_t out;

    vec2_refl(out, v, n);

    return out;
}

void vec2_perp(vec2_t& out, const vec2_t& v) {
    out.x = -v.y;
    out.y = v.x;
}

vec2_t vec2n_perp(const vec2_t& v) {
    vec2_t out;

    vec2_perp(out, v);

    return out;
}

void vec2_perp2(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = -(v0.y - v1.y);
    out.y = v0.x - v1.x;
}

vec2_t vec2n_perp2(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_perp2(out, v0, v1);

    return out;
}

// interpolation
void vec2_lerp(vec2_t& out, const vec2_t& v0, const vec2_t& v1, num_t t) {
    num_t x = v0.x, y = v0.y;

    out.x = x + t * (v1.x - x);
    out.y = y + t * (v1.y - y);
}

vec2_t vec2n_lerp(const vec2_t& v0, const vec2_t& v1, num_t t) {
    vec2_t out;

    vec2_lerp(out, v0, v1, t);

    return out;
}

void vec2m_lerp(vec2_t& out, const vec2_t& v, num_t t) {
    vec2_lerp(out, out, v, t);
}

// rotation
void vec2_rotate(vec2_t& out, const vec2_t& v, num_t a) {
    num_t x = v.x, y = v.y;
    num_t c = cos(a), s = sin(a);

    out.x = x * c - y * s;
    out.y = x * s + y * c;
}

vec2_t vec2n_rotate(const vec2_t& v, num_t a) {
    vec2_t out;

    vec2_rotate(out, v, a);

    return out;
}

void vec2m_rotate(vec2_t& out, num_t a) {
    vec2_rotate(out, out, a);
}

void vec2_rotate2(vec2_t& out, const vec2_t& v, const vec2_t& p, num_t a) {
    num_t cx = p.x, cy = p.y;
    num_t x = v.x - cx, y = v.y - cy;
    num_t c = cos(a), s = sin(a);

    out.x = x * c - y * s + cx;
    out.y = x * s + y * c + cy;
}

vec2_t vec2n_rotate2(const vec2_t& v, const vec2_t& p, num_t a) {
    vec2_t out;

    vec2_rotate2(out, v, p, a);

    return out;
}

void vec2m_rotate2(vec2_t& out, const vec2_t& p, num_t a) {
    vec2_rotate2(out, out, p, a);
}

// angles
num_t vec2_angle(const vec2_t& v) {
    return atan2(v.y, v.x);
}

num_t vec2_angle2(const vec2_t& v0, const vec2_t& v1) {
    num_t ax = v0.x, ay = v0.y, bx = v1.x, by = v1.y;
    num_t mag = sqrt((ax * ax + ay * ay) * (bx * bx + by * by));
    num_t c = mag && (ax * bx + ay * by) / mag;

    return acos(min(max(c, -1.0), 1.0));
}

// string
void vec2_str(const vec2_t& v, char* str) {
    sprintf(str, "vec2(%f, %f)", v.x, v.y);
}

void vec2_print(const vec2_t& v) {
    char str[128];

    vec2_str(v, str);

    printf("%s\n", str);
}

// operator overloading
vec2_t operator+(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_add(v0, v1);
}

vec2_t& operator+=(vec2_t& out, const vec2_t& v) {
    vec2m_add(out, v);

    return out;
}

vec2_t operator-(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_sub(v0, v1);
}

vec2_t& operator-=(vec2_t& out, const vec2_t& v) {
    vec2m_sub(out, v);

    return out;
}

vec2_t operator*(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_mul(v0, v1);
}

vec2_t& operator*=(vec2_t& out, const vec2_t& v) {
    vec2m_mul(out, v);

    return out;
}

vec2_t operator/(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_div(v0, v1);
}

vec2_t& operator/=(vec2_t& out, const vec2_t& v) {
    vec2m_div(out, v);

    return out;
}

vec2_t operator+(const vec2_t& v, num_t s) {
    return vec2n_adds(v, s);
}

vec2_t& operator+=(vec2_t& out, num_t s) {
    vec2m_adds(out, s);

    return out;
}

vec2_t operator-(const vec2_t& v, num_t s) {
    return vec2n_subs(v, s);
}

vec2_t& operator-=(vec2_t& out, num_t s) {
    vec2m_subs(out, s);

    return out;
}

vec2_t operator*(const vec2_t& v, num_t s) {
    return vec2n_muls(v, s);
}

vec2_t& operator*=(vec2_t& out, num_t s) {
    vec2m_muls(out, s);

    return out;
}

vec2_t operator/(const vec2_t& v, num_t s) {
    return vec2n_divs(v, s);
}

vec2_t& operator/=(vec2_t& out, num_t s) {
    vec2m_divs(out, s);

    return out;
}
