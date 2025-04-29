#include "vec3_transf.h"

void vec3_transf_mat3(vec3_t& out, const vec3_t& v, const mat3_t& m) {
    num_t x = v.x, y = v.y, z = v.z;

    out.x = x * m.e00 + y * m.e10 + z * m.e20;
    out.y = x * m.e01 + y * m.e11 + z * m.e21;
    out.z = x * m.e02 + y * m.e12 + z * m.e22;
}

vec3_t vec3n_transf_mat3(const vec3_t& v, const mat3_t& m) {
    vec3_t out;

    vec3_transf_mat3(out, v, m);

    return out;
}

void vec3m_transf_mat3(vec3_t& out, const mat3_t& m) {
    vec3_transf_mat3(out, out, m);
}

void vec3_transf_mat4(vec3_t& out, const vec3_t& v, const mat4_t& m) {
    num_t x = v.x, y = v.y, z = v.z;
    num_t w = (m.e03 * x + m.e13 * y + m.e23 * z + m.e33) || 1.0;

    out.x = (m.e00 * x + m.e10 * y + m.e20 * z + m.e30) / w;
    out.y = (m.e01 * x + m.e11 * y + m.e21 * z + m.e31) / w;
    out.z = (m.e02 * x + m.e12 * y + m.e22 * z + m.e32) / w;
}

vec3_t vec3n_transf_mat4(const vec3_t& v, const mat4_t& m) {
    vec3_t out;

    vec3_transf_mat4(out, v, m);

    return out;
}

void vec3m_transf_mat4(vec3_t& out, const mat4_t& m) {
    vec3_transf_mat4(out, out, m);
}
