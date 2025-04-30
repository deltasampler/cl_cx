#include <stdio.h>
#include "math.h"

#include "mat2.h"

#include "mat2_t.cpp"
#include "mat2_affine.cpp"

// arithmetic matrix x matrix
void mat2_add(mat2_t& out, const mat2_t& m0, const mat2_t& m1) {
    out.e00 = m0.e00 + m1.e00;
    out.e01 = m0.e01 + m1.e01;
    out.e10 = m0.e10 + m1.e10;
    out.e11 = m0.e11 + m1.e11;
}

mat2_t mat2n_add(const mat2_t& m0, const mat2_t& m1) {
    mat2_t out;

    mat2_add(out, m0, m1);

    return out;
}

void mat2m_add(mat2_t& out, const mat2_t& m) {
    mat2_add(out, out, m);
}

void mat2_sub(mat2_t& out, const mat2_t& m0, const mat2_t& m1) {
    out.e00 = m0.e00 - m1.e00;
    out.e01 = m0.e01 - m1.e01;
    out.e10 = m0.e10 - m1.e10;
    out.e11 = m0.e11 - m1.e11;
}

mat2_t mat2n_sub(const mat2_t& m0, const mat2_t& m1) {
    mat2_t out;

    mat2_sub(out, m0, m1);

    return out;
}

void mat2m_sub(mat2_t& out, const mat2_t& m) {
    mat2_sub(out, out, m);
}

// arithmetic matrix x scalar
void mat2_muls(mat2_t& out, const mat2_t& m, num_t s) {
    out.e00 = m.e00 * s;
    out.e01 = m.e01 * s;
    out.e10 = m.e10 * s;
    out.e11 = m.e11 * s;
}

mat2_t mat2n_muls(const mat2_t& m, num_t s) {
    mat2_t out;

    mat2_muls(out, m, s);

    return out;
}

void mat2m_muls(mat2_t& out, num_t s) {
    mat2_muls(out, out, s);
}

// arithmetic matrix x matrix x scalar
void mat2_addmuls(mat2_t& out, const mat2_t& m0, const mat2_t& m1, num_t s) {
    out.e00 = m0.e00 + m1.e00 * s;
    out.e01 = m0.e01 + m1.e01 * s;
    out.e10 = m0.e10 + m1.e10 * s;
    out.e11 = m0.e11 + m1.e11 * s;
}

mat2_t mat2n_addmuls(const mat2_t& m0, const mat2_t& m1, num_t s) {
    mat2_t out;

    mat2_addmuls(out, m0, m1, s);

    return out;
}

void mat2m_addmuls(mat2_t& out, const mat2_t& m, num_t s) {
    mat2_addmuls(out, out, m, s);
}

// product matrix x matrix
void mat2_mul(mat2_t& out, const mat2_t& m0, const mat2_t& m1) {
    num_t a00 = m0.e00, a01 = m0.e01,
          a10 = m0.e10, a11 = m0.e11;
    num_t b00 = m1.e00, b01 = m1.e01,
          b10 = m1.e10, b11 = m1.e11;

    out.e00 = a00 * b00 + a10 * b01;
    out.e01 = a01 * b00 + a11 * b01;
    out.e10 = a00 * b10 + a10 * b11;
    out.e11 = a01 * b10 + a11 * b11;
}

mat2_t mat2n_mul(const mat2_t& m0, const mat2_t& m1) {
    mat2_t out;

    mat2_mul(out, m0, m1);

    return out;
}

void mat2m_mul(mat2_t& out, const mat2_t& m) {
    mat2_mul(out, out, m);
}

// product matrix x vector
void mat2_mulmv(vec2_t& out, const vec2_t& v, const mat2_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e10;
    out.y = x * m.e01 + y * m.e11;
}

vec2_t mat2n_mulmv(const vec2_t& v, const mat2_t& m) {
    vec2_t out;

    mat2_mulmv(out, v, m);

    return out;
}

void mat2m_mulmv(vec2_t& out, const mat2_t& m) {
    mat2_mulmv(out, out, m);
}

void mat2_mulvm(vec2_t& out, const vec2_t& v, const mat2_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e01;
    out.y = x * m.e10 + y * m.e11;
}

vec2_t mat2n_mulvm(const vec2_t& v, const mat2_t& m) {
    vec2_t out;

    mat2_mulvm(out, v, m);

    return out;
}

void mat2m_mulvm(vec2_t& out, const mat2_t& m) {
    mat2_mulvm(out, out, m);
}

// special
num_t mat2_det(const mat2_t& m) {
    return m.e00 * m.e11 - m.e10 * m.e01;
}

num_t mat2_frob(const mat2_t& m) {
    return hypot(
        m.e00, m.e01,
        m.e10, m.e11
    );
}

void mat2_transp(mat2_t& out, const mat2_t& m) {
    num_t temp = m.e01;

    out.e00 = m.e00;
    out.e01 = m.e10;
    out.e10 = temp;
    out.e11 = m.e11;
}

mat2_t mat2n_transp(const mat2_t& m) {
    mat2_t out;

    mat2_transp(out, m);

    return out;
}

void mat2m_transp(mat2_t& out) {
    mat2_transp(out, out);
}

void mat2_adjoint(mat2_t& out, const mat2_t& m) {
    out.e00 = m.e11;
    out.e01 = -m.e01;
    out.e10 = -m.e10;
    out.e11 = m.e00;
}

mat2_t mat2n_adjoint(const mat2_t& m) {
    mat2_t out;

    mat2_adjoint(out, m);

    return out;
}

void mat2m_adjoint(mat2_t& out) {
    mat2_adjoint(out, out);
}

void mat2_inv(mat2_t& out, const mat2_t& m) {
    num_t e00 = m.e00, e01 = m.e01,
          e10 = m.e10, e11 = m.e11;
    num_t det = e00 * e11 - e10 * e01;

    if (abs(det) < num_t(EPSILON)) {
        return;
    }

    det = num_t(1.0) / det;

    out.e00 = e11 * det;
    out.e01 = -e01 * det;
    out.e10 = -e10 * det;
    out.e11 = e00 * det;
}

mat2_t mat2n_inv(const mat2_t& m) {
    mat2_t out;

    mat2_inv(out, m);

    return out;
}

void mat2m_inv(mat2_t& out) {
    mat2_inv(out, out);
}

// string
void mat2_str(const mat2_t& m, char* str) {
    sprintf(
        str,
        "mat2(\n\t%f, %f,\n\t%f, %f\n)",
        m.e00, m.e10,
        m.e01, m.e11
    );
}

void mat2_print(const mat2_t& m) {
    char str[128];

    mat2_str(m, str);

    printf("%s\n", str);
}
