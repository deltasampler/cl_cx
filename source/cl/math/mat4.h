#pragma once

#include "mat4_t.h"
#include "vec4_t.h"

// creation
mat4_t mat4(num_t x = num_t(1.0));
mat4_t mat4(num_t e00, num_t e01, num_t e02, num_t e03, num_t e10, num_t e11, num_t e12, num_t e13, num_t e20, num_t e21, num_t e22, num_t e23, num_t e30, num_t e31, num_t e32, num_t e33);

void mat4_set(mat4_t& out, num_t e00, num_t e01, num_t e02, num_t e03, num_t e10, num_t e11, num_t e12, num_t e13, num_t e20, num_t e21, num_t e22, num_t e23, num_t e30, num_t e31, num_t e32, num_t e33);

void mat4_copy(mat4_t& out, const mat4_t& m);
mat4_t mat4n_copy(const mat4_t& m);

// unary
void mat4_zero(mat4_t& out);
mat4_t mat4n_zero();

void mat4_ident(mat4_t& out);
mat4_t mat4n_ident();

// arithmetic matrix x matrix
void mat4_add(mat4_t& out, const mat4_t& m0, const mat4_t& m1);
mat4_t mat4n_add(const mat4_t& m0, const mat4_t& m1);
void mat4m_add(mat4_t& out, const mat4_t& m);

void mat4_sub(mat4_t& out, const mat4_t& m0, const mat4_t& m1);
mat4_t mat4n_sub(const mat4_t& m0, const mat4_t& m1);
void mat4m_sub(mat4_t& out, const mat4_t& m);

// arithmetic matrix x scalar
void mat4_muls(mat4_t& out, const mat4_t& m, num_t s);
mat4_t mat4n_muls(const mat4_t& m, num_t s);
void mat4m_muls(mat4_t& out, num_t s);

// arithmetic matrix x matrix x scalar
void mat4_addmuls(mat4_t& out, const mat4_t& m0, const mat4_t& m1, num_t s);
mat4_t mat4n_addmuls(const mat4_t& m0, const mat4_t& m1, num_t s);
void mat4m_addmuls(mat4_t& out, const mat4_t& m, num_t s);

// product matrix x matrix
void mat4_mul(mat4_t& out, const mat4_t& m0, const mat4_t& m1);
mat4_t mat4n_mul(const mat4_t& m0, const mat4_t& m1);
void mat4m_mul(mat4_t& out, const mat4_t& m);

// product matrix x vector
void mat4_mulmv(vec4_t& out, const vec4_t& v, const mat4_t& m);
vec4_t mat4n_mulmv(const vec4_t& v, const mat4_t& m);
void mat4m_mulmv(vec4_t& out, const mat4_t& m);

void mat4_mulvm(vec4_t& out, const vec4_t& v, const mat4_t& m);
vec4_t mat4n_mulvm(const vec4_t& v, const mat4_t& m);
void mat4m_mulvm(vec4_t& out, const mat4_t& m);

// special
num_t mat4_det(const mat4_t& m);
num_t mat4_frob(const mat4_t& m);

void mat4_transp(mat4_t& out, const mat4_t& m);
mat4_t mat4n_transp(const mat4_t& m);
void mat4m_transp(mat4_t& out);

void mat4_adjoint(mat4_t& out, const mat4_t& m);
mat4_t mat4n_adjoint(const mat4_t& m);
void mat4m_adjoint(mat4_t& out);

void mat4_inv(mat4_t& out, const mat4_t& m);
mat4_t mat4n_inv(const mat4_t& m);
void mat4m_inv(mat4_t& out);

// string
void mat4_str(const mat4_t& m, char* str);
void mat4_print(const mat4_t& m);
