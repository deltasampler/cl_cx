#pragma once

#undef VEC4_T
#include "vec4_t.h"
#include "vec4_arithm.h"

// unary
void vec4_abs(vec4_t& out, const vec4_t& v);
vec4_t vec4n_abs(const vec4_t& out);
void vec4m_abs(vec4_t& out);

void vec4_neg(vec4_t& out, const vec4_t& v);
vec4_t vec4n_neg(const vec4_t& out);
void vec4m_neg(vec4_t& out);

void vec4_inv(vec4_t& out, const vec4_t& v);
vec4_t vec4n_inv(const vec4_t& out);
void vec4m_inv(vec4_t& out);

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
