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
    return mhypot(
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

    if (mabs(det) < num_t(EPSILON)) {
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

// affine
void mat4_translation(mat4_t& out, const vec3_t& v) {
    out.e00 = num_t(1.0);
    out.e01 = num_t(0.0);
    out.e02 = num_t(0.0);
    out.e03 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = num_t(1.0);
    out.e12 = num_t(0.0);
    out.e13 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
    out.e22 = num_t(1.0);
    out.e23 = num_t(0.0);
    out.e30 = v.x;
    out.e31 = v.y;
    out.e32 = v.z;
    out.e33 = num_t(1.0);
}

mat4_t mat4n_translation(const vec3_t& v) {
    mat4_t out;

    mat4_translation(out, v);

    return out;
}

void mat4_rotation(mat4_t& out, num_t r, const vec3_t& axis) {

}

mat4_t mat4n_rotation(num_t r, const vec3_t& axis) {
    mat4_t out;

    mat4_rotation(out, r, axis);

    return out;
}

void mat4_rotation_x(mat4_t& out, num_t r) {
    num_t s = msin(r), c = mcos(r);

    out.e00 = num_t(1.0);
    out.e01 = num_t(0.0);
    out.e02 = num_t(0.0);
    out.e03 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = c;
    out.e12 = s;
    out.e13 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = -s;
    out.e22 = c;
    out.e23 = num_t(0.0);
    out.e30 = num_t(0.0);
    out.e31 = num_t(0.0);
    out.e32 = num_t(0.0);
    out.e33 = num_t(1.0);
}

mat4_t mat4n_rotation_x(num_t r) {
    mat4_t out;

    mat4_rotation_x(out, r);

    return out;
}

void mat4_rotation_y(mat4_t& out, num_t r) {
    num_t s = msin(r), c = mcos(r);

    out.e00 = c;
    out.e01 = num_t(0.0);
    out.e02 = -s;
    out.e03 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = num_t(1.0);
    out.e12 = num_t(0.0);
    out.e13 = num_t(0.0);
    out.e20 = s;
    out.e21 = num_t(0.0);
    out.e22 = c;
    out.e23 = num_t(0.0);
    out.e30 = num_t(0.0);
    out.e31 = num_t(0.0);
    out.e32 = num_t(0.0);
    out.e33 = num_t(1.0);
}

mat4_t mat4n_rotation_y(num_t r) {
    mat4_t out;

    mat4_rotation_y(out, r);

    return out;
}

void mat4_rotation_z(mat4_t& out, num_t r) {
    num_t s = msin(r), c = mcos(r);

    out.e00 = c;
    out.e01 = s;
    out.e02 = num_t(0.0);
    out.e03 = num_t(0.0);
    out.e10 = -s;
    out.e11 = c;
    out.e12 = num_t(0.0);
    out.e13 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
    out.e22 = num_t(1.0);
    out.e23 = num_t(0.0);
    out.e30 = num_t(0.0);
    out.e31 = num_t(0.0);
    out.e32 = num_t(0.0);
    out.e33 = num_t(1.0);
}

mat4_t mat4n_rotation_z(num_t r) {
    mat4_t out;

    mat4_rotation_z(out, r);

    return out;
}

void mat4_scaling(mat4_t& out, const vec3_t& v) {
    out.e00 = v.x;
    out.e01 = num_t(0.0);
    out.e02 = num_t(0.0);
    out.e03 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = v.y;
    out.e12 = num_t(0.0);
    out.e13 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
    out.e22 = v.z;
    out.e23 = num_t(0.0);
    out.e30 = num_t(0.0);
    out.e31 = num_t(0.0);
    out.e32 = num_t(0.0);
    out.e33 = num_t(1.0);
}

mat4_t mat4n_scaling(const vec3_t& v) {
    mat4_t out;

    mat4_scaling(out, v);

    return out;
}

void mat4_translate(mat4_t& out, const mat4_t& m, const vec3_t& v) {
    num_t x = v.x, y = v.y, z = v.z;

    out.e30 = m.e00 * x + m.e10 * y + m.e20 * z + m.e30;
    out.e31 = m.e01 * x + m.e11 * y + m.e21 * z + m.e31;
    out.e32 = m.e02 * x + m.e12 * y + m.e22 * z + m.e32;
    out.e33 = m.e03 * x + m.e13 * y + m.e23 * z + m.e33;
}

mat4_t mat4n_translate(const mat4_t& m, const vec3_t& v) {
    mat4_t out;

    mat4_translate(out, m, v);

    return out;
}

void mat4m_translate(mat4_t& out, const vec3_t& v) {
    mat4_translate(out, out, v);
}

void mat4_rotate(mat4_t& out, const mat4_t& m, num_t r, const vec3_t& axis) {
    num_t x = axis.x, y = axis.y, z = axis.z;
    num_t len = msqrt(x * x + y * y + z * z);
    num_t s, c, t;
    num_t a00, a01, a02, a03;
    num_t a10, a11, a12, a13;
    num_t a20, a21, a22, a23;
    num_t b00, b01, b02;
    num_t b10, b11, b12;
    num_t b20, b21, b22;

    if (len < num_t(EPSILON)) {
        return;
    }

    len = num_t(1.0) / len;
    x *= len;
    y *= len;
    z *= len;

    s = msin(r);
    c = mcos(r);
    t = num_t(1.0) - c;

    a00 = m.e00;
    a01 = m.e01;
    a02 = m.e02;
    a03 = m.e03;
    a10 = m.e10;
    a11 = m.e11;
    a12 = m.e12;
    a13 = m.e13;
    a20 = m.e20;
    a21 = m.e21;
    a22 = m.e22;
    a23 = m.e23;

    b00 = x * x * t + c;
    b01 = y * x * t + z * s;
    b02 = z * x * t - y * s;
    b10 = x * y * t - z * s;
    b11 = y * y * t + c;
    b12 = z * y * t + x * s;
    b20 = x * z * t + y * s;
    b21 = y * z * t - x * s;
    b22 = z * z * t + c;

    out.e00 = a00 * b00 + a10 * b01 + a20 * b02;
    out.e01 = a01 * b00 + a11 * b01 + a21 * b02;
    out.e02 = a02 * b00 + a12 * b01 + a22 * b02;
    out.e03 = a03 * b00 + a13 * b01 + a23 * b02;
    out.e10 = a00 * b10 + a10 * b11 + a20 * b12;
    out.e11 = a01 * b10 + a11 * b11 + a21 * b12;
    out.e12 = a02 * b10 + a12 * b11 + a22 * b12;
    out.e13 = a03 * b10 + a13 * b11 + a23 * b12;
    out.e20 = a00 * b20 + a10 * b21 + a20 * b22;
    out.e21 = a01 * b20 + a11 * b21 + a21 * b22;
    out.e22 = a02 * b20 + a12 * b21 + a22 * b22;
    out.e23 = a03 * b20 + a13 * b21 + a23 * b22;
}

mat4_t mat4n_rotate(const mat4_t& m, num_t r, const vec3_t& axis) {
    mat4_t out;

    mat4_rotate(out, m, r, axis);

    return out;
}

void mat4m_rotate(mat4_t& out, num_t r, const vec3_t& axis) {
    mat4_rotate(out, out, r, axis);
}

void mat4_rotate_x(mat4_t& out, const mat4_t& m, num_t r) {
    num_t e10 = m.e10, e11 = m.e11, e12 = m.e12,  e13 = m.e13,
          e20 = m.e20, e21 = m.e21, e22 = m.e22, e23 = m.e23;
    num_t s = msin(r), c = mcos(r);

    out.e10 = e10 * c + e20 * s;
    out.e11 = e11 * c + e21 * s;
    out.e12 = e12 * c + e22 * s;
    out.e13 = e13 * c + e23 * s;
    out.e20 = e20 * c - e10 * s;
    out.e21 = e21 * c - e11 * s;
    out.e22 = e22 * c - e12 * s;
    out.e23 = e23 * c - e13 * s;
}

mat4_t mat4n_rotate_x(const mat4_t& m, num_t r) {
    mat4_t out;

    mat4_rotate_x(out, m, r);

    return out;
}

void mat4m_rotate_x(mat4_t& out, num_t r) {
    mat4_rotate_x(out, out, r);
}

void mat4_rotate_y(mat4_t& out, const mat4_t& m, num_t r) {
    num_t e00 = m.e00, e01 = m.e01, e02 = m.e02,  e03 = m.e03,
          e20 = m.e20, e21 = m.e21, e22 = m.e22, e23 = m.e23;
    num_t s = msin(r), c = mcos(r);

    out.e00 = e00 * c - e20 * s;
    out.e01 = e01 * c - e21 * s;
    out.e02 = e02 * c - e22 * s;
    out.e03 = e03 * c - e23 * s;
    out.e20 = e00 * s + e20 * c;
    out.e21 = e01 * s + e21 * c;
    out.e22 = e02 * s + e22 * c;
    out.e23 = e03 * s + e23 * c;
}

mat4_t mat4n_rotate_y(const mat4_t& m, num_t r) {
    mat4_t out;

    mat4_rotate_y(out, m, r);

    return out;
}

void mat4m_rotate_y(mat4_t& out, num_t r) {
    mat4_rotate_y(out, out, r);
}

void mat4_rotate_z(mat4_t& out, const mat4_t& m, num_t r) {
    num_t e00 = m.e00, e01 = m.e01, e02 = m.e02, e03 = m.e03,
          e10 = m.e10, e11 = m.e11, e12 = m.e12, e13 = m.e13;
    num_t s = msin(r), c = mcos(r);

    out.e00 = e00 * c + e10 * s;
    out.e01 = e01 * c + e11 * s;
    out.e02 = e02 * c + e12 * s;
    out.e03 = e03 * c + e13 * s;
    out.e10 = e10 * c - e00 * s;
    out.e11 = e11 * c - e01 * s;
    out.e12 = e12 * c - e02 * s;
    out.e13 = e13 * c - e03 * s;
}

mat4_t mat4n_rotate_z(const mat4_t& m, num_t r) {
    mat4_t out;

    mat4_rotate_z(out, m, r);

    return out;
}

void mat4m_rotate_z(mat4_t& out, num_t r) {
    mat4_rotate_z(out, out, r);
}

void mat4_scale(mat4_t& out, const mat4_t& m, const vec3_t& v) {
    num_t x = v.x, y = v.y, z = v.z;

    out.e00 = m.e00 * x;
    out.e01 = m.e01 * x;
    out.e02 = m.e02 * x;
    out.e03 = m.e03 * x;
    out.e10 = m.e10 * y;
    out.e11 = m.e11 * y;
    out.e12 = m.e12 * y;
    out.e13 = m.e13 * y;
    out.e20 = m.e20 * z;
    out.e21 = m.e21 * z;
    out.e22 = m.e22 * z;
    out.e23 = m.e23 * z;
    out.e30 = m.e30;
    out.e31 = m.e31;
    out.e32 = m.e32;
    out.e33 = m.e33;
}

mat4_t mat4n_scale(const mat4_t& m, const vec3_t& v) {
    mat4_t out;

    mat4_scale(out, m, v);

    return out;
}

void mat4m_scale(mat4_t& out, const vec3_t& v) {
    mat4_scale(out, out, v);
}

// projection
void mat4_perspective(mat4_t& out, num_t fov, num_t aspect, num_t near, num_t far) {
    num_t f = num_t(1.0) / mtan(fov / num_t(2.0));
    num_t nf = num_t(1.0) / (near - far);

    out.e00 = f / aspect;
    out.e01 = num_t(0.0);
    out.e02 = num_t(0.0);
    out.e03 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = f;
    out.e12 = num_t(0.0);
    out.e13 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
    out.e22 = (far + near) * nf;
    out.e23 = num_t(-1.0);
    out.e30 = num_t(0.0);
    out.e31 = num_t(0.0);
    out.e32 = num_t(2.0) * far * near * nf;
    out.e33 = num_t(0.0);
}

mat4_t mat4n_perspective(num_t fov, num_t aspect, num_t near, num_t far) {
    mat4_t out;

    mat4_perspective(out, fov, aspect, near, far);

    return out;
}

// camera
void mat4_look_at(mat4_t& out, const vec3_t& eye, const vec3_t& center, const vec3_t& up) {
    num_t x0, x1, x2, y0, y1, y2, z0, z1, z2, len;
    num_t eyex = eye.x;
    num_t eyey = eye.y;
    num_t eyez = eye.z;
    num_t upx = up.x;
    num_t upy = up.y;
    num_t upz = up.z;
    num_t centerx = center.x;
    num_t centery = center.y;
    num_t centerz = center.z;

    if (
        mabs(eyex - centerx) < num_t(EPSILON) &&
        mabs(eyey - centery) < num_t(EPSILON) &&
        mabs(eyez - centerz) < num_t(EPSILON)
    ) {
        mat4_ident(out);

        return;
    }

    z0 = eyex - centerx;
    z1 = eyey - centery;
    z2 = eyez - centerz;
    len = num_t(1.0) / mhypot(z0, z1, z2);
    z0 *= len;
    z1 *= len;
    z2 *= len;
    x0 = upy * z2 - upz * z1;
    x1 = upz * z0 - upx * z2;
    x2 = upx * z1 - upy * z0;
    len = mhypot(x0, x1, x2);

    if (!len) {
        x0 = num_t(0.0);
        x1 = num_t(0.0);
        x2 = num_t(0.0);
    } else {
        len = num_t(1.0) / len;
        x0 *= len;
        x1 *= len;
        x2 *= len;
    }

    y0 = z1 * x2 - z2 * x1;
    y1 = z2 * x0 - z0 * x2;
    y2 = z0 * x1 - z1 * x0;
    len = mhypot(y0, y1, y2);

    if (!len) {
        y0 = num_t(0.0);
        y1 = num_t(0.0);
        y2 = num_t(0.0);
    } else {
        len = num_t(1.0) / len;
        y0 *= len;
        y1 *= len;
        y2 *= len;
    }

    out.e00 = x0;
    out.e01 = y0;
    out.e02 = z0;
    out.e03 = num_t(0.0);
    out.e10 = x1;
    out.e11 = y1;
    out.e12 = z1;
    out.e13 = num_t(0.0);
    out.e20 = x2;
    out.e21 = y2;
    out.e22 = z2;
    out.e23 = num_t(0.0);
    out.e30 = -(x0 * eyex + x1 * eyey + x2 * eyez);
    out.e31 = -(y0 * eyex + y1 * eyey + y2 * eyez);
    out.e32 = -(z0 * eyex + z1 * eyey + z2 * eyez);
    out.e33 = num_t(1.0);
}

mat4_t mat4n_look_at(const vec3_t& eye, const vec3_t& center, const vec3_t& up) {
    mat4_t out;

    mat4_look_at(out, eye, center, up);

    return out;
}

void mat4_target_to(mat4_t& out, const vec3_t& eye, const vec3_t& target, const vec3_t& up) {
    num_t eyex = eye.x, eyey = eye.y, eyez = eye.z;
    num_t upx = up.x, upy = up.y, upz = up.z;

    num_t z0 = eyex - target.x,
          z1 = eyey - target.y,
          z2 = eyez - target.z;

    num_t len = z0 * z0 + z1 * z1 + z2 * z2;

    if (len > num_t(0.0)) {
        len = num_t(1.0) / msqrt(len);
        z0 *= len;
        z1 *= len;
        z2 *= len;
    }
  
    num_t x0 = upy * z2 - upz * z1,
          x1 = upz * z0 - upx * z2,
          x2 = upx * z1 - upy * z0;

    len = x0 * x0 + x1 * x1 + x2 * x2;

    if (len > num_t(0.0)) {
        len = num_t(1.0) / msqrt(len);
        x0 *= len;
        x1 *= len;
        x2 *= len;
    }

    out.e00 = x0;
    out.e01 = x1;
    out.e02 = x2;
    out.e03 = num_t(0.0);
    out.e10 = z1 * x2 - z2 * x1;
    out.e11 = z2 * x0 - z0 * x2;
    out.e12 = z0 * x1 - z1 * x0;
    out.e13 = num_t(0.0);
    out.e20 = z0;
    out.e21 = z1;
    out.e22 = z2;
    out.e23 = num_t(0.0);
    out.e30 = eyex;
    out.e31 = eyey;
    out.e32 = eyez;
    out.e33 = num_t(1.0);
}

mat4_t mat4n_target_to(const vec3_t& eye, const vec3_t& target, const vec3_t& up) {
    mat4_t out;

    mat4_target_to(out, eye, target, up);

    return out;
}

// comparison
bool mat4_equals(const mat4_t& v0, const mat4_t& v1, num_t e) { 
    return mabs(v0.e00 - v1.e00) < e && mabs(v0.e01 - v1.e01) < e && mabs(v0.e02 - v1.e02) < e && mabs(v0.e03 - v1.e03) < e &&
           mabs(v0.e10 - v1.e10) < e && mabs(v0.e11 - v1.e11) < e && mabs(v0.e12 - v1.e12) < e && mabs(v0.e13 - v1.e13) < e &&
           mabs(v0.e20 - v1.e20) < e && mabs(v0.e21 - v1.e21) < e && mabs(v0.e22 - v1.e22) < e && mabs(v0.e23 - v1.e23) < e &&
           mabs(v0.e30 - v1.e30) < e && mabs(v0.e31 - v1.e31) < e && mabs(v0.e32 - v1.e32) < e && mabs(v0.e33 - v1.e33) < e;
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
