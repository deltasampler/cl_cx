#pragma once

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#undef MAT2X3_T
#include "mat2x3_t.h"
#include "vec2_t.h"

// arithmetic - matrix x matrix
void mat2x3_add(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1);
mat2x3_t mat2x3n_add(const mat2x3_t& m0, const mat2x3_t& m1);
void mat2x3m_add(mat2x3_t& out, const mat2x3_t& m);

void mat2x3_sub(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1);
mat2x3_t mat2x3n_sub(const mat2x3_t& m0, const mat2x3_t& m1);
void mat2x3m_sub(mat2x3_t& out, const mat2x3_t& m);

// arithmetic - matrix x scalar
void mat2x3_muls(mat2x3_t& out, const mat2x3_t& m, num_t s);
mat2x3_t mat2x3n_muls(const mat2x3_t& m, num_t s);
void mat2x3m_muls(mat2x3_t& out, num_t s);

// arithmetic - matrix x matrix x scalar
void mat2x3_addmuls(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1, num_t s);
mat2x3_t mat2x3n_addmuls(const mat2x3_t& m0, const mat2x3_t& m1, num_t s);
void mat2x3m_addmuls(mat2x3_t& out, const mat2x3_t& m, num_t s);

// product matrix x matrix
void mat2x3_mul(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1);
mat2x3_t mat2x3n_mul(const mat2x3_t& m0, const mat2x3_t& m1);
void mat2x3m_mul(mat2x3_t& out, const mat2x3_t& m);

// product matrix x vector
void mat2x3_mulmv(vec2_t& out, const vec2_t& v, const mat2x3_t& m);
vec2_t mat2x3n_mulmv(const vec2_t& v, const mat2x3_t& m);
void mat2x3m_mulmv(vec2_t& out, const mat2x3_t& m);

// special
num_t mat2x3_det(const mat2x3_t& m);
num_t mat2x3_frob(const mat2x3_t& m);

void mat2x3_inv(mat2x3_t& out, const mat2x3_t& m);
mat2x3_t mat2x3n_inv(const mat2x3_t& m);
void mat2x3m_inv(mat2x3_t& out);

// string
void mat2x3_str(const mat2x3_t& m, char* str);
void mat2x3_print(const mat2x3_t& m);
