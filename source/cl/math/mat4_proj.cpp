#include "math.h"

#include "mat4_proj.h"

void mat4_perspective(mat4_t& out, num_t fov, num_t aspect, num_t near, num_t far) {
    num_t f = num_t(1.0) / tan(fov / num_t(2.0));
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
