#include "math.h"
#include "rand.h"

#include "vec4_rand.h"

void vec4_rand(vec4_t& out) {
    out.x = (num_t)random();
    out.y = (num_t)random();
    out.z = (num_t)random();
    out.w = (num_t)random();
}

vec4_t vec4n_rand() {
    vec4_t out;

    vec4_rand(out);

    return out;
}
