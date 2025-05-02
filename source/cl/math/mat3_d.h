#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec2_d.h"
#include "vec3_d.h"
#include "mat3/struct.h"
#include "mat3/base.h"
#include "mat3/real.h"
