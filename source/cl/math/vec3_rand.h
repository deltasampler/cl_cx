#pragma once

#include <cl/type.h>
#include "vec3_t.h"

void vec3_rand(vec3_t& out);
vec3_t vec3n_rand();

void vec3_rand_unit(vec3_t& out, f32 scale);
vec3_t vec3n_unit(f32 scale);
