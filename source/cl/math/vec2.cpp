#include <stdio.h>
#include "math.h"

#include "vec2.h"

#include "vec2_t.cpp"
#include "vec2_arithm.cpp"
#include "vec2_other.cpp"
#include "vec2_rand.cpp"

// unary
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
    out.x = num_t(1.0) / v.x;
    out.y = num_t(1.0) / v.y;
}

vec2_t vec2n_inv(const vec2_t& v) {
    vec2_t out;

    vec2_inv(out, v);

    return out;
}

void vec2m_inv(vec2_t& out) {
    vec2_inv(out, out);
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

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
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

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
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
    num_t l = vec2_dot(n, v) * num_t(2.0);

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

    return acos(min(max(c, num_t(-1.0)), num_t(1.0)));
}

// string
void vec2_str(const vec2_t& v, char* str) {
    sprintf(str, "vec2(%f, %f)", num_t(v.x), num_t(v.y));
}

void vec2_print(const vec2_t& v) {
    char str[128];

    vec2_str(v, str);

    printf("%s\n", str);
}
