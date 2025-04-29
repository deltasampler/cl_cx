#include "vec2_transf.h"

void vec2_transf_mat2(vec2_t& out, const vec2_t& v, const mat2_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e10;
    out.y = x * m.e01 + y * m.e11;
}

vec2_t vec2n_transf_mat2(const vec2_t& v, const mat2_t& m) {
    vec2_t out;

    vec2_transf_mat2(out, v, m);

    return out;
}

void vec2m_transf_mat2(vec2_t& out, const mat2_t& m) {
    vec2_transf_mat2(out, out, m);
}

void vec2_transf_2x3(vec2_t& out, const vec2_t& v, const mat2x3_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e10 + m.e20;
    out.y = x * m.e01 + y * m.e11 + m.e21;
}

vec2_t vec2n_transf_2x3(const vec2_t& v, const mat2x3_t& m) {
    vec2_t out;

    vec2_transf_2x3(out, v, m);

    return out;
}

void vec2m_transf_2x3(vec2_t& out, const mat2x3_t& m) {
    vec2_transf_2x3(out, out, m);
}

void vec2_transf_mat3(vec2_t& out, const vec2_t& v, const mat3_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e10 + m.e20;
    out.y = x * m.e01 + y * m.e11 + m.e21;
}

vec2_t vec2n_transf_mat3(const vec2_t& v, const mat3_t& m) {
    vec2_t out;

    vec2_transf_mat3(out, v, m);

    return out;
}

void vec2m_transf_mat3(vec2_t& out, const mat3_t& m) {
    vec2_transf_mat3(out, out, m);
}

void vec2_transf_mat4(vec2_t& out, const vec2_t& v, const mat4_t& m) {
    num_t x = v.x, y = v.y;

    out.x = x * m.e00 + y * m.e10 + m.e30;
    out.y = x * m.e01 + y * m.e11 + m.e31;
}

vec2_t vec2n_transf_mat4(const vec2_t& v, const mat4_t& m) {
    vec2_t out;

    vec2_transf_mat4(out, v, m);

    return out;
}

void vec2m_transf_mat4(vec2_t& out, const mat4_t& m) {
    vec2_transf_mat4(out, out, m);
}
