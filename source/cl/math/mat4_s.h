#pragma once

#include <cl/types.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "vec3_s.h"
#include "vec4_s.h"
#include "mat4/struct.h"
#include "mat4/base.h"
#include "mat4/int.h"
