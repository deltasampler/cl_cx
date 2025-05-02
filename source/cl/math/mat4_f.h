#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "vec3_f.h"
#include "vec4_f.h"
#include "mat4/struct.h"
#include "mat4/base.h"
#include "mat4/real.h"
