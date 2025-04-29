#include "math.h"
#include "rand.h"

#include "vec3_rand.h"

void vec3_rand(vec3_t& out) {
    out.x = (num_t)random();
    out.y = (num_t)random();
    out.z = (num_t)random();
}

vec3_t vec3n_rand() {
    vec3_t out;

    vec3_rand(out);

    return out;
}

void vec3_rand_unit(vec3_t& out, f32 scale) {
    num_t r = (num_t)random() * num_t(2.0) * num_t(PI);
    num_t z = (num_t)random() * num_t(2.0) - num_t(1.0);
    num_t z_scale = sqrt(num_t(1.0) - z * z) * scale;

    out.x = cos(r) * z_scale;
    out.y = sin(r) * z_scale;
    out.z = z * scale;
}

vec3_t vec3n_unit(f32 scale) {
    vec3_t out;

    vec3_rand_unit(out, scale);

    return out;
}
