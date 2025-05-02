#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "vec2_f.h"
#include "vec3_f.h"
#include "mat3/struct.h"
#include "mat3/base.h"
#include "mat3/real.h"
