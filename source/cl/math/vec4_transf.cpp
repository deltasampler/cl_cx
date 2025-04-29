#include "vec4_transf.h"

void vec4_transf_mat4(vec4_t& out, const vec4_t& v, const mat4_t& m) {
    num_t x = v.x, y = v.y, z = v.z, w = v.w;

    out.x = m.e00 * x + m.e10 * y + m.e20 * z + m.e30 * w;
    out.y = m.e01 * x + m.e11 * y + m.e21 * z + m.e31 * w;
    out.z = m.e02 * x + m.e12 * y + m.e22 * z + m.e32 * w;
    out.w = m.e03 * x + m.e13 * y + m.e23 * z + m.e33 * w;
}

vec4_t vec4n_transf_mat4(const vec4_t& v, const mat4_t& m) {
    vec4_t out;

    vec4_transf_mat4(out, v, m);

    return out;
}

void vec4m_transf_mat4(vec4_t& out, const mat4_t& m) {
    vec4_transf_mat4(out, out, m);
}
