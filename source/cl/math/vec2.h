#pragma once

#include "vec2_t.h"

// creation
vec2_t vec2(num_t x = 0.0);
vec2_t vec2(num_t x, num_t y);

void vec2_set(vec2_t& out, num_t x, num_t y);

void vec2_copy(vec2_t& out, const vec2_t& v);
vec2_t vec2n_copy(const vec2_t& v);

// unary
void vec2_zero(vec2_t& out);
vec2_t vec2n_zero();

void vec2_abs(vec2_t& out, const vec2_t& v);
vec2_t vec2n_abs(const vec2_t& out);
void vec2m_abs(vec2_t& out);

void vec2_neg(vec2_t& out, const vec2_t& v);
vec2_t vec2n_neg(const vec2_t& out);
void vec2m_neg(vec2_t& out);

void vec2_inv(vec2_t& out, const vec2_t& v);
vec2_t vec2n_inv(const vec2_t& out);
void vec2m_inv(vec2_t& out);

// arithmetic vector x vector
void vec2_add(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_add(const vec2_t& v0, const vec2_t& v1);
void vec2m_add(vec2_t& out, const vec2_t& v);

void vec2_sub(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_sub(const vec2_t& v0, const vec2_t& v1);
void vec2m_sub(vec2_t& out, const vec2_t& v);

void vec2_mul(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_mul(const vec2_t& v0, const vec2_t& v1);
void vec2m_mul(vec2_t& out, const vec2_t& v);

void vec2_div(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_div(const vec2_t& v0, const vec2_t& v1);
void vec2m_div(vec2_t& out, const vec2_t& v);

// arithmetic vector x scalar
void vec2_adds(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_adds(const vec2_t& v, num_t s);
void vec2m_adds(vec2_t& out, num_t s);

void vec2_subs(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_subs(const vec2_t& v, num_t s);
void vec2m_subs(vec2_t& out, num_t s);

void vec2_muls(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_muls(const vec2_t& v, num_t s);
void vec2m_muls(vec2_t& out, num_t s);

void vec2_divs(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_divs(const vec2_t& v, num_t s);
void vec2m_divs(vec2_t& out, num_t s);

// arithmetic vector x vector x scalar
void vec2_addmuls(vec2_t& out, const vec2_t& v0, const vec2_t& v1, num_t s);
vec2_t vec2n_addmuls(const vec2_t& v0, const vec2_t& v1, num_t s);
void vec2m_addmuls(vec2_t& out, const vec2_t& v, num_t s);

// product
num_t vec2_dot(const vec2_t& v0, const vec2_t& v1);
num_t vec2_cross(const vec2_t& v0, const vec2_t& v1);

// norm
num_t vec2_len(const vec2_t& v);
num_t vec2_len_sq(const vec2_t& v);

num_t vec2_dist(const vec2_t& v0, const vec2_t& v1);
num_t vec2_dist_sq(const vec2_t& v0, const vec2_t& v1);

void vec2_unit(vec2_t& out, const vec2_t& v);
vec2_t vec2n_unit(const vec2_t& v);
void vec2m_unit(vec2_t& out);

void vec2_dir(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_dir(vec2_t& v0, const vec2_t& v1);

// geometric
void vec2_refl(vec2_t& out, const vec2_t& v, const vec2_t& n);
vec2_t vec2n_refl(const vec2_t& v, const vec2_t& n);

void vec2_perp(vec2_t& out, const vec2_t& v);
vec2_t vec2n_perp(const vec2_t& v);

void vec2_perp2(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_perp2(const vec2_t& v0, const vec2_t& v1);

// interpolation
void vec2_lerp(vec2_t& out, const vec2_t& v0, const vec2_t& v1, num_t t);
vec2_t vec2n_lerp(const vec2_t& v0, const vec2_t& v1, num_t t);
void vec2m_lerp(vec2_t& out, const vec2_t& v, num_t t);

// rotation
void vec2_rotate(vec2_t& out, const vec2_t& v, num_t a);
vec2_t vec2n_rotate(const vec2_t& v, num_t a);
void vec2m_rotate(vec2_t& out, num_t a);

void vec2_rotate2(vec2_t& out, const vec2_t& v, const vec2_t& p, num_t a);
vec2_t vec2n_rotate2(const vec2_t& v, const vec2_t& p, num_t a);
void vec2m_rotate2(vec2_t& out, const vec2_t& p, num_t a);

// angles
num_t vec2_angle(const vec2_t& v);
num_t vec2_angle2(const vec2_t& v0, const vec2_t& v1);

// string
void vec2_str(const vec2_t& v, char* str);
void vec2_print(const vec2_t& v);

// operator overloading
vec2_t operator+(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator+=(vec2_t& out, const vec2_t& v);

vec2_t operator-(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator-=(vec2_t& out, const vec2_t& v);

vec2_t operator*(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator*=(vec2_t& out, const vec2_t& v);

vec2_t operator/(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator/=(vec2_t& out, const vec2_t& v);

vec2_t operator+(const vec2_t& v, num_t s);
vec2_t& operator+=(vec2_t& out, num_t s);

vec2_t operator-(const vec2_t& v, num_t s);
vec2_t& operator-=(vec2_t& out, num_t s);

vec2_t operator*(const vec2_t& v, num_t s);
vec2_t& operator*=(vec2_t& out, num_t s);

vec2_t operator/(const vec2_t& v, num_t s);
vec2_t& operator/=(vec2_t& out, num_t s);
