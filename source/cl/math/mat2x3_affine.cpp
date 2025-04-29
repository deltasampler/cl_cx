#include "math.h"

#include "mat2x3_affine.h"

void mat2x3_translation(mat2x3_t& out, const vec2_t& v) {
    out.e00 = num_t(1.0);
    out.e01 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = num_t(1.0);
    out.e20 = v.x;
    out.e21 = v.y;
}

mat2x3_t mat2x3n_translation(const vec2_t& v) {
    mat2x3_t out;

    mat2x3_translation(out, v);

    return out;
}

void mat2x3_rotation(mat2x3_t& out, num_t r) {
    num_t s = sin(r), c = cos(r);

    out.e00 = c;
    out.e01 = s;
    out.e10 = -s;
    out.e11 = c;
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
}

mat2x3_t mat2x3n_rotation(num_t r) {
    mat2x3_t out;

    mat2x3_rotation(out, r);

    return out;
}

void mat2x3_scaling(mat2x3_t& out, const vec2_t& v) {
    out.e00 = v.x;
    out.e01 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = v.y;
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
}

mat2x3_t mat2x3n_scaling(const vec2_t& v) {
    mat2x3_t out;

    mat2x3_scaling(out, v);

    return out;
}

void mat2x3_translate(mat2x3_t& out, const mat2x3_t& m, const vec2_t& v) {
    num_t e00 = m.e00, e01 = m.e01,
          e10 = m.e10, e11 = m.e11,
          e20 = m.e20, e21 = m.e21;
    num_t x = v.x, y = v.y;

    out.e00 = e00;
    out.e01 = e01;
    out.e10 = e10;
    out.e11 = e11;
    out.e20 = e00 * x + e10 * y + e20;
    out.e21 = e01 * x + e11 * y + e21;
}

mat2x3_t mat2x3n_translate(const mat2x3_t& m, const vec2_t& v) {
    mat2x3_t out;

    mat2x3_translate(out, m, v);

    return out;
}

void mat2x3m_translate(mat2x3_t& out, const vec2_t& v) {
    mat2x3_translate(out, out, v);
}

void mat2x3_rotate(mat2x3_t& out, const mat2x3_t& m, num_t r) {
    num_t e00 = m.e00, e01 = m.e01,
          e10 = m.e10, e11 = m.e11,
          e20 = m.e20, e21 = m.e21;
    num_t s = sin(r), c = cos(r);

    out.e00 = e00 * c + e10 * s;
    out.e01 = e01 * c + e11 * s;
    out.e10 = e00 * -s + e10 * c;
    out.e11 = e01 * -s + e11 * c;
    out.e20 = e20;
    out.e21 = e21;
}

mat2x3_t mat2x3n_rotate(const mat2x3_t& m, num_t r) {
    mat2x3_t out;

    mat2x3_rotate(out, m, r);

    return out;
}

void mat2x3m_rotate(mat2x3_t& out, num_t r) {
    mat2x3_rotate(out, out, r);
}

void mat2x3_scale(mat2x3_t& out, const mat2x3_t& m, const vec2_t& v) {
    num_t e00 = m.e00, e01 = m.e01,
          e10 = m.e10, e11 = m.e11,
          e20 = m.e20, e21 = m.e21;
    num_t x = v.x, y = v.y;

    out.e00 = e00 * x;
    out.e01 = e01 * x;
    out.e10 = e10 * y;
    out.e11 = e11 * y;
    out.e20 = e20;
    out.e21 = e21;
}

mat2x3_t mat2x3n_scale(const mat2x3_t& m, const vec2_t& v) {
    mat2x3_t out;

    mat2x3_scale(out, m, v);

    return out;
}

void mat2x3m_scale(mat2x3_t& out, const vec2_t& v) {
    mat2x3_scale(out, out, v);
}
