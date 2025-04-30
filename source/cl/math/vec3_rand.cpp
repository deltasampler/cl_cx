#include "math.h"
#include "rand.h"

#include "vec3_rand.h"

void vec3_rand(vec3_t& out) {
    out.x = num_t(random());
    out.y = num_t(random());
    out.z = num_t(random());
}

vec3_t pre(vec3n_rand)() {
    vec3_t out;

    vec3_rand(out);

    return out;
}
