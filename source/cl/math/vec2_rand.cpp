#include "math.h"
#include "rand.h"

#include "vec2_rand.h"

void vec2_rand(vec2_t& out) {
    out.x = num_t(random());
    out.y = num_t(random());
}

vec2_t pre(vec2n_rand)() {
    vec2_t out;

    vec2_rand(out);

    return out;
}
