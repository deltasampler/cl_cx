#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec3_d.h"
#include "vec4_d.h"
#include "mat4/struct.h"
#include "mat4/base.h"
#include "mat4/real.h"
