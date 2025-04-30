#include <stdio.h>
#include "math.h"

#include "vec3.h"

#include "vec3_t.cpp"
#include "vec3_arithm.cpp"
#include "vec3_other.cpp"
#include "vec3_rand.cpp"

// unary
void vec3_abs(vec3_t& out, const vec3_t& v) {
    out.x = abs(v.x);
    out.y = abs(v.y);
    out.z = abs(v.z);
}

vec3_t vec3n_abs(const vec3_t& v) {
    vec3_t out;

    vec3_abs(out, v);

    return out;
}

void vec3m_abs(vec3_t& out) {
    vec3_abs(out, out);
}

void vec3_neg(vec3_t& out, const vec3_t& v) {
    out.x = -v.x;
    out.y = -v.y;
    out.z = -v.z;
}

vec3_t vec3n_neg(const vec3_t& v) {
    vec3_t out;

    vec3_neg(out, v);

    return out;
}

void vec3m_neg(vec3_t& out) {
    vec3_neg(out, out);
}

void vec3_inv(vec3_t& out, const vec3_t& v) {
    out.x = num_t(1.0) / v.x;
    out.y = num_t(1.0) / v.y;
    out.z = num_t(1.0) / v.z;
}

vec3_t vec3n_inv(const vec3_t& v) {
    vec3_t out;

    vec3_inv(out, v);

    return out;
}

void vec3m_inv(vec3_t& out) {
    vec3_inv(out, out);
}

// product
num_t vec3_dot(const vec3_t& v0, const vec3_t& v1) {
    return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

void vec3_cross(vec3_t& out, const vec3_t& v0, const vec3_t& v1) {
    num_t ax = v0.x, ay = v0.y, az = v0.z;
    num_t bx = v1.x, by = v1.y, bz = v1.z;

    out.x = ay * bz - az * by;
    out.y = az * bx - ax * bz;
    out.z = ax * by - ay * bx;
}

vec3_t vec3n_cross(const vec3_t& v0, const vec3_t& v1) {
    vec3_t out;

    vec3_cross(out, v0, v1);

    return out;
}

// norm
num_t vec3_len(const vec3_t& v) {
    return hypot(v.x, v.y, v.z);
}

num_t vec3_len_sq(const vec3_t& v) {
    num_t x = v.x, y = v.y, z = v.z;

    return x * x + y * y + z * z;
}

num_t vec3_dist(const vec3_t& v0, const vec3_t& v1) {
    return hypot(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z);
}

num_t vec3_dist_sq(const vec3_t& v0, const vec3_t& v1) {
    num_t x = v0.x - v1.x;
    num_t y = v0.y - v1.y;
    num_t z = v0.z - v1.z;

    return x * x + y * y + z * z;
}

void vec3_unit(vec3_t& out, const vec3_t& v) {
    num_t x = v.x, y = v.y, z = v.z;
    num_t l = x * x + y * y + z * z;

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
    out.z = z * l;
}

vec3_t vec3n_unit(const vec3_t& v) {
    vec3_t out;

    vec3_unit(out, v);

    return out;
}

void vec3m_unit(vec3_t& out) {
    vec3_unit(out, out);
}

void vec3_dir(vec3_t& out, const vec3_t& v0, const vec3_t& v1) {
    num_t x = v0.x - v1.x, y = v0.y - v1.y, z = v0.z - v1.z;
    num_t l = x * x + y * y + z * z;

    if (l > num_t(0.0)) {
        l = num_t(1.0) / sqrt(l);
    }

    out.x = x * l;
    out.y = y * l;
    out.z = z * l;
}

vec3_t vec3n_dir(vec3_t& v0, const vec3_t& v1) {
    vec3_t out;

    vec3_dir(out, v0, v1);

    return out;
}

// geometric
void vec3_refl(vec3_t& out, const vec3_t& v, const vec3_t& n) {
    num_t l = vec3_dot(n, v) * num_t(2.0);

    out.x = v.x - n.x * l;
    out.y = v.y - n.y * l;
    out.z = v.z - n.z * l;
}

vec3_t vec3n_refl(const vec3_t& v, const vec3_t& n) {
    vec3_t out;

    vec3_refl(out, v, n);

    return out;
}

// interpolation
void vec3_lerp(vec3_t& out, const vec3_t& v0, const vec3_t& v1, num_t t) {
    num_t x = v0.x, y = v0.y, z = v0.z;

    out.x = x + t * (v1.x - x);
    out.y = y + t * (v1.y - y);
    out.z = z + t * (v1.z - z);
}

vec3_t vec3n_lerp(const vec3_t& v0, const vec3_t& v1, num_t t) {
    vec3_t out;

    vec3_lerp(out, v0, v1, t);

    return out;
}

void vec3m_lerp(vec3_t& out, const vec3_t& v, num_t t) {
    vec3_lerp(out, out, v, t);
}

// rotation
void vec3_rotate_x(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r) {
    num_t p0 = v.x - p.x, p1 = v.y - p.y, p2 = v.z - p.z;
    num_t r0 = p0,
          r1 = p1 * cos(r) - p2 * sin(r),
          r2 = p1 * sin(r) + p2 * cos(r);

    out.x = r0 + p.x;
    out.y = r1 + p.y;
    out.z = r2 + p.z;
}

vec3_t vec3n_rotate_x(const vec3_t& v, const vec3_t& p, num_t r) {
    vec3_t out;

    vec3_rotate_x(out, v, p, r);

    return out;
}

void vec3m_rotate_x(vec3_t& out, const vec3_t& p, num_t r) {
    vec3_rotate_x(out, out, p, r);
}

void vec3_rotate_y(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r) {
    num_t p0 = v.x - p.x, p1 = v.y - p.y, p2 = v.z - p.z;
    num_t r0 = p2 * sin(r) + p0 * cos(r),
          r1 = p1,
          r2 = p2 * cos(r) - p0 * sin(r);

    out.x = r0 + p.x;
    out.y = r1 + p.y;
    out.z = r2 + p.z;
}

vec3_t vec3n_rotate_y(const vec3_t& v, const vec3_t& p, num_t r) {
    vec3_t out;

    vec3_rotate_y(out, v, p, r);

    return out;
}

void vec3m_rotate_y(vec3_t& out, const vec3_t& p, num_t r) {
    vec3_rotate_y(out, out, p, r);
}

void vec3_rotate_z(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r) {
    num_t p0 = v.x - p.x, p1 = v.y - p.y, p2 = v.z - p.z;
    num_t r0 = p0 * cos(r) - p1 * sin(r),
          r1 = p0 * sin(r) + p1 * cos(r),
          r2 = p2;

    out.x = r0 + p.x;
    out.y = r1 + p.y;
    out.z = r2 + p.z;
}

vec3_t vec3n_rotate_z(const vec3_t& v, const vec3_t& p, num_t r) {
    vec3_t out;

    vec3_rotate_z(out, v, p, r);

    return out;
}

void vec3m_rotate_z(vec3_t& out, const vec3_t& p, num_t r) {
    vec3_rotate_z(out, out, p, r);
}

// string
void vec3_str(const vec3_t& v, char* str) {
    sprintf(str, "vec3(%f, %f, %f)", v.x, v.y, v.z);
}

void vec3_print(const vec3_t& v) {
    char str[128];

    vec3_str(v, str);

    printf("%s\n", str);
}
