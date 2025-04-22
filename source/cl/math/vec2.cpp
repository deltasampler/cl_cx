#include <stdio.h>
#include "vec2.h"

/* creation */
// vec2
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

// vec2_zero
void vec2_zero(vec2_t& out) {
    out.x = 0.0;
    out.y = 0.0;
}

vec2_t vec2n_zero() {
    vec2_t out;
    vec2_zero(out);

    return out;
}

// vec2_set
void vec2_set(vec2_t& out, num_t x, num_t y) {
    out.x = x;
    out.y = y;
}

// vec2_copy
void vec2_copy(vec2_t& out, const vec2_t& v) {
    out.x = v.x;
    out.y = v.y;
}

vec2_t vec2n_copy(const vec2_t& v) {
    vec2_t out;
    vec2_copy(out, v);

    return out;
}

/* arithmetic vector x vector */
// vec2_add
void vec2_add(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x + v1.x;
    out.y = v0.y + v1.y;
}

vec2_t vec2n_add(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;
    vec2_add(out, v0, v1);

    return out;
}

void vec2m_add(vec2_t& out, const vec2_t& v1) {
    vec2_add(out, out, v1);
}

// vec2_sub
void vec2_sub(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x - v1.x;
    out.y = v0.y - v1.y;
}

vec2_t vec2n_sub(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;
    vec2_sub(out, v0, v1);

    return out;
}

void vec2m_sub(vec2_t& out, const vec2_t& v1) {
    vec2_sub(out, out, v1);
}

// vec2_mul
void vec2_mul(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x * v1.x;
    out.y = v0.y * v1.y;
}

vec2_t vec2n_mul(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;
    vec2_mul(out, v0, v1);

    return out;
}

void vec2m_mul(vec2_t& out, const vec2_t& v1) {
    vec2_mul(out, out, v1);
}

// vec2_div
void vec2_div(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = v0.x / v1.x;
    out.y = v0.y / v1.y;
}

vec2_t vec2n_div(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;
    vec2_div(out, v0, v1);

    return out;
}

void vec2m_div(vec2_t& out, const vec2_t& v1) {
    vec2_div(out, out, v1);
}

// vec2_print
void vec2_print(const vec2_t& out) {
    printf("vec2(%f, %f)\n", out.x, out.y);
}

/* operator overloading */
// operator+
vec2_t operator+(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_add(v0, v1);
}

vec2_t& operator+=(vec2_t& out, const vec2_t& v) {
    vec2m_add(out, v);

    return out;
}

// operator-
vec2_t operator-(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_sub(v0, v1);
}

vec2_t& operator-=(vec2_t& out, const vec2_t& v) {
    vec2m_sub(out, v);

    return out;
}

// operator*
vec2_t operator*(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_mul(v0, v1);
}

vec2_t& operator*=(vec2_t& out, const vec2_t& v) {
    vec2m_mul(out, v);

    return out;
}

// operator/
vec2_t operator/(const vec2_t& v0, const vec2_t& v1) {
    return vec2n_div(v0, v1);
}

vec2_t& operator/=(vec2_t& out, const vec2_t& v) {
    vec2m_div(out, v);

    return out;
}
