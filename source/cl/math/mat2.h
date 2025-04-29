#pragma once

#include "mat2_t.h"
#include "vec2_t.h"

// creation
mat2_t mat2(num_t x = 1.0);
mat2_t mat2(num_t e00, num_t e01, num_t e10, num_t e11);

void mat2_set(mat2_t& out, num_t e00, num_t e01, num_t e10, num_t e11);

void mat2_copy(mat2_t& out, const mat2_t& m);
mat2_t mat2n_copy(const mat2_t& m);

// unary
void mat2_zero(mat2_t& out);
mat2_t mat2n_zero();

void mat2_ident(mat2_t& out);
mat2_t mat2n_ident();

// arithmetic matrix x matrix
void mat2_add(mat2_t& out, const mat2_t& m0, const mat2_t& m1);
mat2_t mat2n_add(const mat2_t& m0, const mat2_t& m1);
void mat2m_add(mat2_t& out, const mat2_t& m);

void mat2_sub(mat2_t& out, const mat2_t& m0, const mat2_t& m1);
mat2_t mat2n_sub(const mat2_t& m0, const mat2_t& m1);
void mat2m_sub(mat2_t& out, const mat2_t& m);

// arithmetic matrix x scalar
void mat2_muls(mat2_t& out, const mat2_t& m, num_t s);
mat2_t mat2n_muls(const mat2_t& m, num_t s);
void mat2m_muls(mat2_t& out, num_t s);

// arithmetic matrix x matrix x scalar
void mat2_addmuls(mat2_t& out, const mat2_t& m0, const mat2_t& m1, num_t s);
mat2_t mat2n_addmuls(const mat2_t& m0, const mat2_t& m1, num_t s);
void mat2m_addmuls(mat2_t& out, const mat2_t& m, num_t s);

// product matrix x matrix
void mat2_mul(mat2_t& out, const mat2_t& m0, const mat2_t& m1);
mat2_t mat2n_mul(const mat2_t& m0, const mat2_t& m1);
void mat2m_mul(mat2_t& out, const mat2_t& m);

// product matrix x vector
void mat2_mulmv(vec2_t& out, const vec2_t& v, const mat2_t& m);
vec2_t mat2n_mulmv(const vec2_t& v, const mat2_t& m);
void mat2m_mulmv(vec2_t& out, const mat2_t& m);

void mat2_mulvm(vec2_t& out, const vec2_t& v, const mat2_t& m);
vec2_t mat2n_mulvm(const vec2_t& v, const mat2_t& m);
void mat2m_mulvm(vec2_t& out, const mat2_t& m);

// special
num_t mat2_det(const mat2_t& m);
num_t mat2_frob(const mat2_t& m);

void mat2_transp(mat2_t& out, const mat2_t& m);
mat2_t mat2n_transp(const mat2_t& m);
void mat2m_transp(mat2_t& out);

void mat2_adjoint(mat2_t& out, const mat2_t& m);
mat2_t mat2n_adjoint(const mat2_t& m);
void mat2m_adjoint(mat2_t& out);

void mat2_inv(mat2_t& out, const mat2_t& m);
mat2_t mat2n_inv(const mat2_t& m);
void mat2m_inv(mat2_t& out);

// string
void mat2_str(const mat2_t& m, char* str);
void mat2_print(const mat2_t& m);
