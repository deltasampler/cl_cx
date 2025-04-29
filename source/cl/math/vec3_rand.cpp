#include "math.h"
#include "rand.h"

#include "vec3_rand.h"

void vec3_rand(vec3_t& out) {
    out.x = random();
    out.y = random();
    out.z = random();
}

vec3_t vec3n_rand() {
    vec3_t out;

    vec3_rand(out);

    return out;
}

void vec3_rand_unit(vec3_t& out, f32 scale) {
    num_t r = random() * 2.0 * PI;
    num_t z = random() * 2.0 - 1.0;
    num_t z_scale = sqrt(1.0 - z * z) * scale;

    out.x = cos(r) * z_scale;
    out.y = sin(r) * z_scale;
    out.z = z * scale;
}

vec3_t vec3n_unit(f32 scale) {
    vec3_t out;

    vec3_rand_unit(out, scale);

    return out;
}
