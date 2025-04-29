#pragma once

#include "mat3_t.h"
#include "vec3_t.h"

// creation
mat3_t mat3(num_t x = 1.0);
mat3_t mat3(num_t e00, num_t e01, num_t e02, num_t e10, num_t e11, num_t e12, num_t e20, num_t e21, num_t e22);

void mat3_set(mat3_t& out, num_t e00, num_t e01, num_t e02, num_t e10, num_t e11, num_t e12, num_t e20, num_t e21, num_t e22);

void mat3_copy(mat3_t& out, const mat3_t& m);
mat3_t mat3n_copy(const mat3_t& m);

// unary
void mat3_zero(mat3_t& out);
mat3_t mat3n_zero();

void mat3_ident(mat3_t& out);
mat3_t mat3n_ident();

// arithmetic matrix x matrix
void mat3_add(mat3_t& out, const mat3_t& m0, const mat3_t& m1);
mat3_t mat3n_add(const mat3_t& m0, const mat3_t& m1);
void mat3m_add(mat3_t& out, const mat3_t& m);

void mat3_sub(mat3_t& out, const mat3_t& m0, const mat3_t& m1);
mat3_t mat3n_sub(const mat3_t& m0, const mat3_t& m1);
void mat3m_sub(mat3_t& out, const mat3_t& m);

// arithmetic matrix x scalar
void mat3_muls(mat3_t& out, const mat3_t& m, num_t s);
mat3_t mat3n_muls(const mat3_t& m, num_t s);
void mat3m_muls(mat3_t& out, num_t s);

// arithmetic matrix x matrix x scalar
void mat3_addmuls(mat3_t& out, const mat3_t& m0, const mat3_t& m1, num_t s);
mat3_t mat3n_addmuls(const mat3_t& m0, const mat3_t& m1, num_t s);
void mat3m_addmuls(mat3_t& out, const mat3_t& m, num_t s);

// product matrix x matrix
void mat3_mul(mat3_t& out, const mat3_t& m0, const mat3_t& m1);
mat3_t mat3n_mul(const mat3_t& m0, const mat3_t& m1);
void mat3m_mul(mat3_t& out, const mat3_t& m);

// product matrix x vector
void mat3_mulmv(vec3_t& out, const vec3_t& v, const mat3_t& m);
vec3_t mat3n_mulmv(const vec3_t& v, const mat3_t& m);
void mat3m_mulmv(vec3_t& out, const mat3_t& m);

void mat3_mulvm(vec3_t& out, const vec3_t& v, const mat3_t& m);
vec3_t mat3n_mulvm(const vec3_t& v, const mat3_t& m);
void mat3m_mulvm(vec3_t& out, const mat3_t& m);

// special
num_t mat3_det(const mat3_t& m);
num_t mat3_frob(const mat3_t& m);

void mat3_transp(mat3_t& out, const mat3_t& m);
mat3_t mat3n_transp(const mat3_t& m);
void mat3m_transp(mat3_t& out);

void mat3_adjoint(mat3_t& out, const mat3_t& m);
mat3_t mat3n_adjoint(const mat3_t& m);
void mat3m_adjoint(mat3_t& out);

void mat3_inv(mat3_t& out, const mat3_t& m);
mat3_t mat3n_inv(const mat3_t& m);
void mat3m_inv(mat3_t& out);

// string
void mat3_str(const mat3_t& m, char* str);
void mat3_print(const mat3_t& m);
