#pragma once

#include <cl/type.h>
#include "vec2_t.h"

void vec2_rand(vec2_t& out);
vec2_t vec2n_rand();

void vec2_rand_unit(vec2_t& out, f32 scale);
vec2_t vec2n_unit(f32 scale);
