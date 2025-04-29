#include <stdio.h>
#include "math.h"

#include "mat2x3.h"

// creation
mat2x3_t mat2x3(num_t x) {
    mat2x3_t out;

    out.e00 = x;
    out.e01 = 0.0;
    out.e10 = 0.0;
    out.e11 = x;
    out.e20 = 0.0;
    out.e21 = 0.0;

    return out;
}

mat2x3_t mat2x3(num_t e00, num_t e01, num_t e10, num_t e11, num_t e20, num_t e21) {
    mat2x3_t out;

    out.e00 = e00;
    out.e01 = e01;
    out.e10 = e10;
    out.e11 = e11;
    out.e20 = e20;
    out.e21 = e21;

    return out;
}

void mat2x3_set(mat2x3_t& out, num_t e00, num_t e01, num_t e10, num_t e11, num_t e20, num_t e21) {
    out.e00 = e00;
    out.e01 = e01;
    out.e10 = e10;
    out.e11 = e11;
    out.e20 = e20;
    out.e21 = e21;
}

void mat2x3_copy(mat2x3_t& out, const mat2x3_t& m) {
    out.e00 = m.e00;
    out.e01 = m.e01;
    out.e10 = m.e10;
    out.e11 = m.e11;
    out.e20 = m.e20;
    out.e21 = m.e21;
}

mat2x3_t mat2x3n_copy(const mat2x3_t& m) {
    mat2x3_t out;

    mat2x3_copy(out, m);

    return out;
}

// unary
void mat2x3_zero(mat2x3_t& out) {
    out.e00 = 0.0;
    out.e01 = 0.0;
    out.e10 = 0.0;
    out.e11 = 0.0;
    out.e20 = 0.0;
    out.e21 = 0.0;
}

mat2x3_t mat2x3n_zero() {
    mat2x3_t out;

    mat2x3_zero(out);

    return out;
}

void mat2x3_ident(mat2x3_t& out) {
    out.e00 = 1.0;
    out.e01 = 0.0;
    out.e10 = 0.0;
    out.e11 = 1.0;
    out.e20 = 0.0;
    out.e21 = 0.0;
}

mat2x3_t mat2x3n_ident() {
    mat2x3_t out;

    mat2x3_ident(out);

    return out;
}

// arithmetic matrix x matrix
void mat2x3_add(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1) {
    out.e00 = m0.e00 + m1.e00;
    out.e01 = m0.e01 + m1.e01;
    out.e10 = m0.e10 + m1.e10;
    out.e11 = m0.e11 + m1.e11;
    out.e20 = m0.e20 + m1.e20;
    out.e21 = m0.e21 + m1.e21;
}

mat2x3_t mat2x3n_add(const mat2x3_t& m0, const mat2x3_t& m1) {
    mat2x3_t out;

    mat2x3_add(out, m0, m1);

    return out;
}

void mat2x3m_add(mat2x3_t& out, const mat2x3_t& m) {
    mat2x3_add(out, out, m);
}

void mat2x3_sub(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1) {
    out.e00 = m0.e00 - m1.e00;
    out.e01 = m0.e01 - m1.e01;
    out.e10 = m0.e10 - m1.e10;
    out.e11 = m0.e11 - m1.e11;
    out.e20 = m0.e20 - m1.e20;
    out.e21 = m0.e21 - m1.e21;
}

mat2x3_t mat2x3n_sub(const mat2x3_t& m0, const mat2x3_t& m1) {
    mat2x3_t out;

    mat2x3_sub(out, m0, m1);

    return out;
}

void mat2x3m_sub(mat2x3_t& out, const mat2x3_t& m) {
    mat2x3_sub(out, out, m);
}

// arithmetic matrix x scalar
void mat2x3_muls(mat2x3_t& out, const mat2x3_t& m, num_t s) {
    out.e00 = m.e00 * s;
    out.e01 = m.e01 * s;
    out.e10 = m.e10 * s;
    out.e11 = m.e11 * s;
    out.e20 = m.e20 * s;
    out.e21 = m.e21 * s;
}

mat2x3_t mat2x3n_muls(const mat2x3_t& m, num_t s) {
    mat2x3_t out;

    mat2x3_muls(out, m, s);

    return out;
}

void mat2x3m_muls(mat2x3_t& out, num_t s) {
    mat2x3_muls(out, out, s);
}

// arithmetic matrix x matrix x scalar
void mat2x3_addmuls(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1, num_t s) {
    out.e00 = m0.e00 + m1.e00 * s;
    out.e01 = m0.e01 + m1.e01 * s;
    out.e10 = m0.e10 + m1.e10 * s;
    out.e11 = m0.e11 + m1.e11 * s;
    out.e20 = m0.e20 + m1.e20 * s;
    out.e21 = m0.e21 + m1.e21 * s;
}

mat2x3_t mat2x3n_addmuls(const mat2x3_t& m0, const mat2x3_t& m1, num_t s) {
    mat2x3_t out;

    mat2x3_addmuls(out, m0, m1, s);

    return out;
}

void mat2x3m_addmuls(mat2x3_t& out, const mat2x3_t& m, num_t s) {
    mat2x3_addmuls(out, out, m, s);
}

// product matrix x matrix
void mat2x3_mul(mat2x3_t& out, const mat2x3_t& m0, const mat2x3_t& m1) {
    num_t a00 = m0.e00, a01 = m0.e01,
          a10 = m0.e10, a11 = m0.e11,
          a20 = m0.e20, a21 = m0.e21;
    num_t b00 = m1.e00, b01 = m1.e01,
          b10 = m1.e10, b11 = m1.e11,
          b20 = m1.e20, b21 = m1.e21;

    out.e00 = a00 * b00 + a10 * b01;
    out.e01 = a01 * b00 + a11 * b01;
    out.e10 = a00 * b10 + a10 * b11;
    out.e11 = a01 * b10 + a11 * b11;
    out.e20 = a00 * b20 + a10 * b21 + a20;
    out.e21 = a01 * b20 + a11 * b21 + a21;
}

mat2x3_t mat2x3n_mul(const mat2x3_t& m0, const mat2x3_t& m1) {
    mat2x3_t out;

    mat2x3_mul(out, m0, m1);

    return out;
}

void mat2x3m_mul(mat2x3_t& out, const mat2x3_t& m) {
    mat2x3_mul(out, out, m);
}

// special
num_t mat2x3_det(const mat2x3_t& m) {
    return m.e00 * m.e11 - m.e01 * m.e10;
}

num_t mat2x3_frob(const mat2x3_t& m) {
    return hypot(
        m.e00, m.e01,
        m.e10, m.e11,
        m.e20, m.e21, 1.0
    );
}

void mat2x3_inv(mat2x3_t& out, const mat2x3_t& m) {
    num_t e00 = m.e00, e01 = m.e01,
          e10 = m.e10, e11 = m.e11,
          e20 = m.e20, e21 = m.e21;
    num_t det = e00 * e11 - e01 * e10;

    if (abs(det) < EPSILON) {
        return;
    }

    det = 1.0 / det;

    out.e00 = e11 * det;
    out.e01 = -e01 * det;
    out.e10 = -e10 * det;
    out.e11 = e00 * det;
    out.e20 = (e10 * e21 - e11 * e20) * det;
    out.e21 = (e01 * e20 - e00 * e21) * det;
}

mat2x3_t mat2x3n_inv(const mat2x3_t& m) {
    mat2x3_t out;

    mat2x3_inv(out, m);

    return out;
}

void mat2x3m_inv(mat2x3_t& out) {
    mat2x3_inv(out, out);
}

// string
void mat2x3_str(const mat2x3_t& m, char* str) {
    sprintf(
        str,
        "mat2x3(\n\t%f, %f,\n\t%f, %f\n,\n\t%f, %f\n)",
        m.e00, m.e10,
        m.e01, m.e11,
        m.e20, m.e21
    );
}

void mat2x3_print(const mat2x3_t& m) {
    char str[128];

    mat2x3_str(m, str);

    printf("%s\n", str);
}
