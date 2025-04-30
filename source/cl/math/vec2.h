#pragma once

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#undef VEC2_T
#include "vec2_t.h"
#undef VEC2_ARITHM
#include "vec2_arithm.h"

// unary
void vec2_abs(vec2_t& out, const vec2_t& v);
vec2_t vec2n_abs(const vec2_t& out);
void vec2m_abs(vec2_t& out);

void vec2_neg(vec2_t& out, const vec2_t& v);
vec2_t vec2n_neg(const vec2_t& out);
void vec2m_neg(vec2_t& out);

void vec2_inv(vec2_t& out, const vec2_t& v);
vec2_t vec2n_inv(const vec2_t& out);
void vec2m_inv(vec2_t& out);

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
