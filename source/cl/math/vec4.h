#pragma once

#include "vec4_t.h"

// creation
vec4_t vec4(num_t x = num_t(0.0));
vec4_t vec4(num_t x, num_t y, num_t z, num_t w);

void vec4_set(vec4_t& out, num_t x, num_t y, num_t z, num_t w);

void vec4_copy(vec4_t& out, const vec4_t& v);
vec4_t vec4n_copy(const vec4_t& v);

// unary
void vec4_zero(vec4_t& out);
vec4_t vec4n_zero();

void vec4_abs(vec4_t& out, const vec4_t& v);
vec4_t vec4n_abs(const vec4_t& out);
void vec4m_abs(vec4_t& out);

void vec4_neg(vec4_t& out, const vec4_t& v);
vec4_t vec4n_neg(const vec4_t& out);
void vec4m_neg(vec4_t& out);

void vec4_inv(vec4_t& out, const vec4_t& v);
vec4_t vec4n_inv(const vec4_t& out);
void vec4m_inv(vec4_t& out);

// arithmetic vector x vector
void vec4_add(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_add(const vec4_t& v0, const vec4_t& v1);
void vec4m_add(vec4_t& out, const vec4_t& v);

void vec4_sub(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_sub(const vec4_t& v0, const vec4_t& v1);
void vec4m_sub(vec4_t& out, const vec4_t& v);

void vec4_mul(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_mul(const vec4_t& v0, const vec4_t& v1);
void vec4m_mul(vec4_t& out, const vec4_t& v);

void vec4_div(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_div(const vec4_t& v0, const vec4_t& v1);
void vec4m_div(vec4_t& out, const vec4_t& v);

// arithmetic vector x scalar
void vec4_adds(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_adds(const vec4_t& v, num_t s);
void vec4m_adds(vec4_t& out, num_t s);

void vec4_subs(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_subs(const vec4_t& v, num_t s);
void vec4m_subs(vec4_t& out, num_t s);

void vec4_muls(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_muls(const vec4_t& v, num_t s);
void vec4m_muls(vec4_t& out, num_t s);

void vec4_divs(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_divs(const vec4_t& v, num_t s);
void vec4m_divs(vec4_t& out, num_t s);

// arithmetic vector x vector x scalar
void vec4_addmuls(vec4_t& out, const vec4_t& v0, const vec4_t& v1, num_t s);
vec4_t vec4n_addmuls(const vec4_t& v0, const vec4_t& v1, num_t s);
void vec4m_addmuls(vec4_t& out, const vec4_t& v, num_t s);

// product
num_t vec4_dot(const vec4_t& v0, const vec4_t& v1);

// norm
num_t vec4_len(const vec4_t& v);
num_t vec4_len_sq(const vec4_t& v);

num_t vec4_dist(const vec4_t& v0, const vec4_t& v1);
num_t vec4_dist_sq(const vec4_t& v0, const vec4_t& v1);

void vec4_unit(vec4_t& out, const vec4_t& v);
vec4_t vec4n_unit(const vec4_t& v);
void vec4m_unit(vec4_t& out);

void vec4_dir(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_dir(vec4_t& v0, const vec4_t& v1);

// interpolation
void vec4_lerp(vec4_t& out, const vec4_t& v0, const vec4_t& v1, num_t t);
vec4_t vec4n_lerp(const vec4_t& v0, const vec4_t& v1, num_t t);
void vec4m_lerp(vec4_t& out, const vec4_t& v, num_t t);

// string
void vec4_str(const vec4_t& v, char* str);
void vec4_print(const vec4_t& v);

// operator overloading
vec4_t operator+(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator+=(vec4_t& out, const vec4_t& v);

vec4_t operator-(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator-=(vec4_t& out, const vec4_t& v);

vec4_t operator*(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator*=(vec4_t& out, const vec4_t& v);

vec4_t operator/(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator/=(vec4_t& out, const vec4_t& v);

vec4_t operator+(const vec4_t& v, num_t s);
vec4_t& operator+=(vec4_t& out, num_t s);

vec4_t operator-(const vec4_t& v, num_t s);
vec4_t& operator-=(vec4_t& out, num_t s);

vec4_t operator*(const vec4_t& v, num_t s);
vec4_t& operator*=(vec4_t& out, num_t s);

vec4_t operator/(const vec4_t& v, num_t s);
vec4_t& operator/=(vec4_t& out, num_t s);
