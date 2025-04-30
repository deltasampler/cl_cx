#include <stdio.h>
#include "math.h"

#include "mat4.h"

#include "mat4_t.cpp"
#include "mat4_affine.cpp"
#include "mat4_proj.cpp"
#include "mat4_cam.cpp"

// arithmetic - matrix x matrix
void mat4_add(mat4_t& out, const mat4_t& m0, const mat4_t& m1) {
    out.e00 = m0.e00 + m1.e00;
    out.e01 = m0.e01 + m1.e01;
    out.e02 = m0.e02 + m1.e02;
    out.e03 = m0.e03 + m1.e03;
    out.e10 = m0.e10 + m1.e10;
    out.e11 = m0.e11 + m1.e11;
    out.e12 = m0.e12 + m1.e12;
    out.e13 = m0.e13 + m1.e13;
    out.e20 = m0.e20 + m1.e20;
    out.e21 = m0.e21 + m1.e21;
    out.e22 = m0.e22 + m1.e22;
    out.e23 = m0.e23 + m1.e23;
    out.e30 = m0.e30 + m1.e30;
    out.e31 = m0.e31 + m1.e31;
    out.e32 = m0.e32 + m1.e32;
    out.e33 = m0.e33 + m1.e33;
}

mat4_t mat4n_add(const mat4_t& m0, const mat4_t& m1) {
    mat4_t out;

    mat4_add(out, m0, m1);

    return out;
}

void mat4m_add(mat4_t& out, const mat4_t& m) {
    mat4_add(out, out, m);
}

void mat4_sub(mat4_t& out, const mat4_t& m0, const mat4_t& m1) {
    out.e00 = m0.e00 - m1.e00;
    out.e01 = m0.e01 - m1.e01;
    out.e02 = m0.e02 - m1.e02;
    out.e03 = m0.e03 - m1.e03;
    out.e10 = m0.e10 - m1.e10;
    out.e11 = m0.e11 - m1.e11;
    out.e12 = m0.e12 - m1.e12;
    out.e13 = m0.e13 - m1.e13;
    out.e20 = m0.e20 - m1.e20;
    out.e21 = m0.e21 - m1.e21;
    out.e22 = m0.e22 - m1.e22;
    out.e23 = m0.e23 - m1.e23;
    out.e30 = m0.e30 - m1.e30;
    out.e31 = m0.e31 - m1.e31;
    out.e32 = m0.e32 - m1.e32;
    out.e33 = m0.e33 - m1.e33;
}

mat4_t mat4n_sub(const mat4_t& m0, const mat4_t& m1) {
    mat4_t out;

    mat4_sub(out, m0, m1);

    return out;
}

void mat4m_sub(mat4_t& out, const mat4_t& m) {
    mat4_sub(out, out, m);
}

// arithmetic - matrix x scalar
void mat4_muls(mat4_t& out, const mat4_t& m, num_t s) {
    out.e00 = m.e00 * s;
    out.e01 = m.e01 * s;
    out.e02 = m.e02 * s;
    out.e03 = m.e03 * s;
    out.e10 = m.e10 * s;
    out.e11 = m.e11 * s;
    out.e12 = m.e12 * s;
    out.e13 = m.e13 * s;
    out.e20 = m.e20 * s;
    out.e21 = m.e21 * s;
    out.e22 = m.e22 * s;
    out.e23 = m.e23 * s;
    out.e30 = m.e30 * s;
    out.e31 = m.e31 * s;
    out.e32 = m.e32 * s;
    out.e33 = m.e33 * s;
}

mat4_t mat4n_muls(const mat4_t& m, num_t s) {
    mat4_t out;

    mat4_muls(out, m, s);

    return out;
}

void mat4m_muls(mat4_t& out, num_t s) {
    mat4_muls(out, out, s);
}

// arithmetic - matrix x matrix x scalar
void mat4_addmuls(mat4_t& out, const mat4_t& m0, const mat4_t& m1, num_t s) {
    out.e00 = m0.e00 + m1.e00 * s;
    out.e01 = m0.e01 + m1.e01 * s;
    out.e02 = m0.e02 + m1.e02 * s;
    out.e03 = m0.e03 + m1.e03 * s;
    out.e10 = m0.e10 + m1.e10 * s;
    out.e11 = m0.e11 + m1.e11 * s;
    out.e12 = m0.e12 + m1.e12 * s;
    out.e13 = m0.e13 + m1.e13 * s;
    out.e20 = m0.e20 + m1.e20 * s;
    out.e21 = m0.e21 + m1.e21 * s;
    out.e22 = m0.e22 + m1.e22 * s;
    out.e23 = m0.e23 + m1.e23 * s;
    out.e30 = m0.e30 + m1.e30 * s;
    out.e31 = m0.e31 + m1.e31 * s;
    out.e32 = m0.e32 + m1.e32 * s;
    out.e33 = m0.e33 + m1.e33 * s;
}

mat4_t mat4n_addmuls(const mat4_t& m0, const mat4_t& m1, num_t s) {
    mat4_t out;

    mat4_addmuls(out, m0, m1, s);

    return out;
}

void mat4m_addmuls(mat4_t& out, const mat4_t& m, num_t s) {
    mat4_addmuls(out, out, m, s);
}

// product matrix x matrix
void mat4_mul(mat4_t& out, const mat4_t& m0, const mat4_t& m1) {
    num_t a00 = m0.e00, a01 = m0.e01, a02 = m0.e02, a03 = m0.e03,
          a10 = m0.e10, a11 = m0.e11, a12 = m0.e12, a13 = m0.e13,
          a20 = m0.e20, a21 = m0.e21, a22 = m0.e22, a23 = m0.e23,
          a30 = m0.e30, a31 = m0.e31, a32 = m0.e32, a33 = m0.e33;
    num_t b00 = m1.e00, b01 = m1.e01, b02 = m1.e02, b03 = m1.e03,
          b10 = m1.e10, b11 = m1.e11, b12 = m1.e12, b13 = m1.e13,
          b20 = m1.e20, b21 = m1.e21, b22 = m1.e22, b23 = m1.e23,
          b30 = m1.e30, b31 = m1.e31, b32 = m1.e32, b33 = m1.e33;

    out.e00 = a00 * b00 + a10 * b01 + a20 * b02 + a30 * b03;
    out.e01 = a01 * b00 + a11 * b01 + a21 * b02 + a31 * b03;
    out.e02 = a02 * b00 + a12 * b01 + a22 * b02 + a32 * b03;
    out.e03 = a03 * b00 + a13 * b01 + a23 * b02 + a33 * b03;
    out.e10 = a00 * b10 + a10 * b11 + a20 * b12 + a30 * b13;
    out.e11 = a01 * b10 + a11 * b11 + a21 * b12 + a31 * b13;
    out.e12 = a02 * b10 + a12 * b11 + a22 * b12 + a32 * b13;
    out.e13 = a03 * b10 + a13 * b11 + a23 * b12 + a33 * b13;
    out.e20 = a00 * b20 + a10 * b21 + a20 * b22 + a30 * b23;
    out.e21 = a01 * b20 + a11 * b21 + a21 * b22 + a31 * b23;
    out.e22 = a02 * b20 + a12 * b21 + a22 * b22 + a32 * b23;
    out.e23 = a03 * b20 + a13 * b21 + a23 * b22 + a33 * b23;
    out.e30 = a00 * b30 + a10 * b31 + a20 * b32 + a30 * b33;
    out.e31 = a01 * b30 + a11 * b31 + a21 * b32 + a31 * b33;
    out.e32 = a02 * b30 + a12 * b31 + a22 * b32 + a32 * b33;
    out.e33 = a03 * b30 + a13 * b31 + a23 * b32 + a33 * b33;
}

mat4_t mat4n_mul(const mat4_t& m0, const mat4_t& m1) {
    mat4_t out;

    mat4_mul(out, m0, m1);

    return out;
}

void mat4m_mul(mat4_t& out, const mat4_t& m) {
    mat4_mul(out, out, m);
}

// product matrix x vector
void mat4_mulmv(vec4_t& out, const vec4_t& v, const mat4_t& m) {
    num_t x = v.x, y = v.y, z = v.z, w = v.w;

    out.x = x * m.e00 + y * m.e10 + z * m.e20 + w * m.e30;
    out.y = x * m.e01 + y * m.e11 + z * m.e21 + w * m.e31;
    out.z = x * m.e02 + y * m.e12 + z * m.e22 + w * m.e32;
    out.w = x * m.e03 + y * m.e13 + z * m.e23 + w * m.e33;
}

vec4_t mat4n_mulmv(const vec4_t& v, const mat4_t& m) {
    vec4_t out;

    mat4_mulmv(out, v, m);

    return out;
}

void mat4m_mulmv(vec4_t& out, const mat4_t& m) {
    mat4_mulmv(out, out, m);
}

void mat4_mulvm(vec4_t& out, const vec4_t& v, const mat4_t& m) {
    num_t x = v.x, y = v.y, z = v.z, w = v.w;

    out.x = x * m.e00 + y * m.e01 + z * m.e02 + w * m.e03;
    out.y = x * m.e10 + y * m.e11 + z * m.e12 + w * m.e13;
    out.z = x * m.e20 + y * m.e21 + z * m.e22 + w * m.e23;
    out.w = x * m.e30 + y * m.e31 + z * m.e32 + w * m.e33;
}

vec4_t mat4n_mulvm(const vec4_t& v, const mat4_t& m) {
    vec4_t out;

    mat4_mulvm(out, v, m);

    return out;
}

void mat4m_mulvm(vec4_t& out, const mat4_t& m) {
    mat4_mulvm(out, out, m);

}

// special
num_t mat4_det(const mat4_t& m) {
    num_t a00 = m.e00, a01 = m.e01, a02 = m.e02, a03 = m.e03,
          a10 = m.e10, a11 = m.e11, a12 = m.e12, a13 = m.e13,
          a20 = m.e20, a21 = m.e21, a22 = m.e22, a23 = m.e23,
          a30 = m.e30, a31 = m.e31, a32 = m.e32, a33 = m.e33;

    num_t b0 = a00 * a11 - a01 * a10;
    num_t b1 = a00 * a12 - a02 * a10;
    num_t b2 = a01 * a12 - a02 * a11;
    num_t b3 = a20 * a31 - a21 * a30;
    num_t b4 = a20 * a32 - a22 * a30;
    num_t b5 = a21 * a32 - a22 * a31;
    num_t b6 = a00 * b5 - a01 * b4 + a02 * b3;
    num_t b7 = a10 * b5 - a11 * b4 + a12 * b3;
    num_t b8 = a20 * b2 - a21 * b1 + a22 * b0;
    num_t b9 = a30 * b2 - a31 * b1 + a32 * b0;

    return a13 * b6 - a03 * b7 + a33 * b8 - a23 * b9;
}

num_t mat4_frob(const mat4_t& m) {
    return hypot(
        m.e00, m.e01, m.e02, m.e03,
        m.e10, m.e11, m.e12, m.e13,
        m.e20, m.e21, m.e22, m.e23,
        m.e30, m.e31, m.e32, m.e33
    );
}

void mat4_transp(mat4_t& out, const mat4_t& m) {
    num_t e00 = m.e00, e01 = m.e01, e02 = m.e02, e03 = m.e03,
          e10 = m.e10, e11 = m.e11, e12 = m.e12, e13 = m.e13,
          e20 = m.e20, e21 = m.e21, e22 = m.e22, e23 = m.e23,
          e30 = m.e30, e31 = m.e31, e32 = m.e32, e33 = m.e33;

    out.e00 = e00;
    out.e01 = e10;
    out.e02 = e20;
    out.e03 = e30;
    out.e10 = e01;
    out.e11 = e11;
    out.e12 = e21;
    out.e13 = e31;
    out.e20 = e02;
    out.e21 = e12;
    out.e22 = e22;
    out.e23 = e32;
    out.e30 = e03;
    out.e31 = e13;
    out.e32 = e23;
    out.e33 = e33;
}

mat4_t mat4n_transp(const mat4_t& m) {
    mat4_t out;

    mat4_transp(out, m);

    return out;
}

void mat4m_transp(mat4_t& out) {
    mat4_transp(out, out);
}

void mat4_adjoint(mat4_t& out, const mat4_t& m) {
    num_t a00 = m.e00, a01 = m.e01, a02 = m.e02, a03 = m.e03,
          a10 = m.e10, a11 = m.e11, a12 = m.e12, a13 = m.e13,
          a20 = m.e20, a21 = m.e21, a22 = m.e22, a23 = m.e23,
          a30 = m.e30, a31 = m.e31, a32 = m.e32, a33 = m.e33;

    num_t b00 = a00 * a11 - a01 * a10;
    num_t b01 = a00 * a12 - a02 * a10;
    num_t b02 = a00 * a13 - a03 * a10;
    num_t b03 = a01 * a12 - a02 * a11;
    num_t b04 = a01 * a13 - a03 * a11;
    num_t b05 = a02 * a13 - a03 * a12;
    num_t b06 = a20 * a31 - a21 * a30;
    num_t b07 = a20 * a32 - a22 * a30;
    num_t b08 = a20 * a33 - a23 * a30;
    num_t b09 = a21 * a32 - a22 * a31;
    num_t b10 = a21 * a33 - a23 * a31;
    num_t b11 = a22 * a33 - a23 * a32;

    out.e00 = a11 * b11 - a12 * b10 + a13 * b09;
    out.e01 = a02 * b10 - a01 * b11 - a03 * b09;
    out.e02 = a31 * b05 - a32 * b04 + a33 * b03;
    out.e03 = a22 * b04 - a21 * b05 - a23 * b03;
    out.e10 = a12 * b08 - a10 * b11 - a13 * b07;
    out.e11 = a00 * b11 - a02 * b08 + a03 * b07;
    out.e12 = a32 * b02 - a30 * b05 - a33 * b01;
    out.e13 = a20 * b05 - a22 * b02 + a23 * b01;
    out.e20 = a10 * b10 - a11 * b08 + a13 * b06;
    out.e21 = a01 * b08 - a00 * b10 - a03 * b06;
    out.e22 = a30 * b04 - a31 * b02 + a33 * b00;
    out.e23 = a21 * b02 - a20 * b04 - a23 * b00;
    out.e30 = a11 * b07 - a10 * b09 - a12 * b06;
    out.e31 = a00 * b09 - a01 * b07 + a02 * b06;
    out.e32 = a31 * b01 - a30 * b03 - a32 * b00;
    out.e33 = a20 * b03 - a21 * b01 + a22 * b00;
}

mat4_t mat4n_adjoint(const mat4_t& m) {
    mat4_t out;

    mat4_adjoint(out, m);

    return out;
}

void mat4m_adjoint(mat4_t& out) {
    mat4_adjoint(out, out);
}

void mat4_inv(mat4_t& out, const mat4_t& m) {
    num_t a00 = m.e00, a01 = m.e01, a02 = m.e02, a03 = m.e03,
          a10 = m.e10, a11 = m.e11, a12 = m.e12, a13 = m.e13,
          a20 = m.e20, a21 = m.e21, a22 = m.e22, a23 = m.e23,
          a30 = m.e30, a31 = m.e31, a32 = m.e32, a33 = m.e33;

    num_t b00 = a00 * a11 - a01 * a10;
    num_t b01 = a00 * a12 - a02 * a10;
    num_t b02 = a00 * a13 - a03 * a10;
    num_t b03 = a01 * a12 - a02 * a11;
    num_t b04 = a01 * a13 - a03 * a11;
    num_t b05 = a02 * a13 - a03 * a12;
    num_t b06 = a20 * a31 - a21 * a30;
    num_t b07 = a20 * a32 - a22 * a30;
    num_t b08 = a20 * a33 - a23 * a30;
    num_t b09 = a21 * a32 - a22 * a31;
    num_t b10 = a21 * a33 - a23 * a31;
    num_t b11 = a22 * a33 - a23 * a32;

    num_t det = b00 * b11 - b01 * b10 + b02 * b09 + b03 * b08 - b04 * b07 + b05 * b06;

    if (abs(det) < num_t(EPSILON)) {
        return;
    }

    det = num_t(1.0) / det;

    out.e00 = (a11 * b11 - a12 * b10 + a13 * b09) * det;
    out.e01 = (a02 * b10 - a01 * b11 - a03 * b09) * det;
    out.e02 = (a31 * b05 - a32 * b04 + a33 * b03) * det;
    out.e03 = (a22 * b04 - a21 * b05 - a23 * b03) * det;
    out.e10 = (a12 * b08 - a10 * b11 - a13 * b07) * det;
    out.e11 = (a00 * b11 - a02 * b08 + a03 * b07) * det;
    out.e12 = (a32 * b02 - a30 * b05 - a33 * b01) * det;
    out.e13 = (a20 * b05 - a22 * b02 + a23 * b01) * det;
    out.e20 = (a10 * b10 - a11 * b08 + a13 * b06) * det;
    out.e21 = (a01 * b08 - a00 * b10 - a03 * b06) * det;
    out.e22 = (a30 * b04 - a31 * b02 + a33 * b00) * det;
    out.e23 = (a21 * b02 - a20 * b04 - a23 * b00) * det;
    out.e30 = (a11 * b07 - a10 * b09 - a12 * b06) * det;
    out.e31 = (a00 * b09 - a01 * b07 + a02 * b06) * det;
    out.e32 = (a31 * b01 - a30 * b03 - a32 * b00) * det;
    out.e33 = (a20 * b03 - a21 * b01 + a22 * b00) * det;
}

mat4_t mat4n_inv(const mat4_t& m) {
    mat4_t out;

    mat4_inv(out, m);

    return out;
}

void mat4m_inv(mat4_t& out) {
    mat4_inv(out, out);
}

// string
void mat4_str(const mat4_t& m, char* str) {
    sprintf(
        str,
        "mat4(\n\t%f, %f, %f, %f,\n\t%f, %f, %f, %f,\n\t%f, %f, %f, %f\n\t%f, %f, %f, %f\n)",
        m.e00, m.e10, m.e20, m.e30,
        m.e01, m.e11, m.e21, m.e31,
        m.e02, m.e12, m.e22, m.e32,
        m.e03, m.e13, m.e23, m.e33
    );
}

void mat4_print(const mat4_t& m) {
    char str[256];

    mat4_str(m, str);

    printf("%s\n", str);
}
