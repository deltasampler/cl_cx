#include "math.h"
#include "rand.h"

#include "vec4_rand.h"

void vec4_rand(vec4_t& out) {
    out.x = random();
    out.y = random();
    out.z = random();
    out.w = random();
}

vec4_t vec4n_rand() {
    vec4_t out;

    vec4_rand(out);

    return out;
}
