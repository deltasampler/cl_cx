#pragma once

#include <cl/types.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "vec2_s.h"
#include "vec3_s.h"
#include "mat3/struct.h"
#include "mat3/base.h"
#include "mat3/int.h"
