#pragma once

#include <cl/types.h>

#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "vec3_u.h"
#include "vec4_u.h"
#include "mat4/struct.h"
#include "mat4/base.h"
#include "mat4/int.h"
