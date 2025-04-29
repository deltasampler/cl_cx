#pragma once

#include "vec3_t.h"

// creation
vec3_t vec3(num_t x = 0.0);
vec3_t vec3(num_t x, num_t y);

void vec3_set(vec3_t& out, num_t x, num_t y, num_t z);

void vec3_copy(vec3_t& out, const vec3_t& v);
vec3_t vec3n_copy(const vec3_t& v);

// unary
void vec3_zero(vec3_t& out);
vec3_t vec3n_zero();

void vec3_abs(vec3_t& out, const vec3_t& v);
vec3_t vec3n_abs(const vec3_t& out);
void vec3m_abs(vec3_t& out);

void vec3_neg(vec3_t& out, const vec3_t& v);
vec3_t vec3n_neg(const vec3_t& out);
void vec3m_neg(vec3_t& out);

void vec3_inv(vec3_t& out, const vec3_t& v);
vec3_t vec3n_inv(const vec3_t& out);
void vec3m_inv(vec3_t& out);

// arithmetic vector x vector
void vec3_add(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_add(const vec3_t& v0, const vec3_t& v1);
void vec3m_add(vec3_t& out, const vec3_t& v);

void vec3_sub(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_sub(const vec3_t& v0, const vec3_t& v1);
void vec3m_sub(vec3_t& out, const vec3_t& v);

void vec3_mul(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_mul(const vec3_t& v0, const vec3_t& v1);
void vec3m_mul(vec3_t& out, const vec3_t& v);

void vec3_div(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_div(const vec3_t& v0, const vec3_t& v1);
void vec3m_div(vec3_t& out, const vec3_t& v);

// arithmetic vector x scalar
void vec3_adds(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_adds(const vec3_t& v, num_t s);
void vec3m_adds(vec3_t& out, num_t s);

void vec3_subs(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_subs(const vec3_t& v, num_t s);
void vec3m_subs(vec3_t& out, num_t s);

void vec3_muls(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_muls(const vec3_t& v, num_t s);
void vec3m_muls(vec3_t& out, num_t s);

void vec3_divs(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_divs(const vec3_t& v, num_t s);
void vec3m_divs(vec3_t& out, num_t s);

// arithmetic vector x vector x scalar
void vec3_addmuls(vec3_t& out, const vec3_t& v0, const vec3_t& v1, num_t s);
vec3_t vec3n_addmuls(const vec3_t& v0, const vec3_t& v1, num_t s);
void vec3m_addmuls(vec3_t& out, const vec3_t& v, num_t s);

// product
num_t vec3_dot(const vec3_t& v0, const vec3_t& v1);

void vec3_cross(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_cross(const vec3_t& v0, const vec3_t& v1);

// norm
num_t vec3_len(const vec3_t& v);
num_t vec3_len_sq(const vec3_t& v);

num_t vec3_dist(const vec3_t& v0, const vec3_t& v1);
num_t vec3_dist_sq(const vec3_t& v0, const vec3_t& v1);

void vec3_unit(vec3_t& out, const vec3_t& v);
vec3_t vec3n_unit(const vec3_t& v);
void vec3m_unit(vec3_t& out);

void vec3_dir(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_dir(vec3_t& v0, const vec3_t& v1);

// geometric
void vec3_refl(vec3_t& out, const vec3_t& v, const vec3_t& n);
vec3_t vec3n_refl(const vec3_t& v, const vec3_t& n);

// interpolation
void vec3_lerp(vec3_t& out, const vec3_t& v0, const vec3_t& v1, num_t t);
vec3_t vec3n_lerp(const vec3_t& v0, const vec3_t& v1, num_t t);
void vec3m_lerp(vec3_t& out, const vec3_t& v, num_t t);

// rotation
void vec3_rotate_x(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r);
vec3_t vec3n_rotate_x(const vec3_t& v, const vec3_t& p, num_t r);
void vec3m_rotate_x(vec3_t& out, const vec3_t& p, num_t r);

void vec3_rotate_y(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r);
vec3_t vec3n_rotate_y(const vec3_t& v, const vec3_t& p, num_t r);
void vec3m_rotate_y(vec3_t& out, const vec3_t& p, num_t r);

void vec3_rotate_z(vec3_t& out, const vec3_t& v, const vec3_t& p, num_t r);
vec3_t vec3n_rotate_z(const vec3_t& v, const vec3_t& p, num_t r);
void vec3m_rotate_z(vec3_t& out, const vec3_t& p, num_t r);

// string
void vec3_str(const vec3_t& v, char* str);
void vec3_print(const vec3_t& v);

// operator overloading
vec3_t operator+(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator+=(vec3_t& out, const vec3_t& v);

vec3_t operator-(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator-=(vec3_t& out, const vec3_t& v);

vec3_t operator*(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator*=(vec3_t& out, const vec3_t& v);

vec3_t operator/(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator/=(vec3_t& out, const vec3_t& v);

vec3_t operator+(const vec3_t& v, num_t s);
vec3_t& operator+=(vec3_t& out, num_t s);

vec3_t operator-(const vec3_t& v, num_t s);
vec3_t& operator-=(vec3_t& out, num_t s);

vec3_t operator*(const vec3_t& v, num_t s);
vec3_t& operator*=(vec3_t& out, num_t s);

vec3_t operator/(const vec3_t& v, num_t s);
vec3_t& operator/=(vec3_t& out, num_t s);
