#pragma once

#include <cl/types.h>

#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "vec2_u.h"
#include "vec3_u.h"
#include "mat3/struct.h"
#include "mat3/base.h"
#include "mat3/int.h"
