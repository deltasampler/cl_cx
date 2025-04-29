#include "math.h"
#include "rand.h"

#include "vec2_rand.h"

void vec2_rand(vec2_t& out) {
    out.x = (num_t)random();
    out.y = (num_t)random();
}

vec2_t vec2n_rand() {
    vec2_t out;

    vec2_rand(out);

    return out;
}

void vec2_rand_unit(vec2_t& out, f32 scale) {
    f32 r = num_t(PI) * num_t(2.0) * (num_t)random();

    out.x = cos(r) * scale;
    out.y = sin(r) * scale;
}

vec2_t vec2n_unit(f32 scale) {
    vec2_t out;

    vec2_rand_unit(out, scale);

    return out;
}
