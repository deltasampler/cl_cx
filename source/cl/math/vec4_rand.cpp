#include "math.h"
#include "rand.h"

#include "vec4_rand.h"

void vec4_rand(vec4_t& out) {
    out.x = num_t(frand());
    out.y = num_t(frand());
    out.z = num_t(frand());
    out.w = num_t(frand());
}

vec4_t vec4n_rand() {
    vec4_t out;

    vec4_rand(out);

    return out;
}
