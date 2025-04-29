#include "math.h"
#include "mat4.h"

#include "mat4_cam.h"

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
        abs(eyex - centerx) < num_t(EPSILON) &&
        abs(eyey - centery) < num_t(EPSILON) &&
        abs(eyez - centerz) < num_t(EPSILON)
    ) {
        mat4_ident(out);

        return;
    }

    z0 = eyex - centerx;
    z1 = eyey - centery;
    z2 = eyez - centerz;
    len = num_t(1.0) / hypot(z0, z1, z2);
    z0 *= len;
    z1 *= len;
    z2 *= len;
    x0 = upy * z2 - upz * z1;
    x1 = upz * z0 - upx * z2;
    x2 = upx * z1 - upy * z0;
    len = hypot(x0, x1, x2);

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
    len = hypot(y0, y1, y2);

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
        len = num_t(1.0) / sqrt(len);
        z0 *= len;
        z1 *= len;
        z2 *= len;
    }
  
    num_t x0 = upy * z2 - upz * z1,
          x1 = upz * z0 - upx * z2,
          x2 = upx * z1 - upy * z0;

    len = x0 * x0 + x1 * x1 + x2 * x2;

    if (len > num_t(0.0)) {
        len = num_t(1.0) / sqrt(len);
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
