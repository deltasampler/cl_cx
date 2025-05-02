#pragma once

#include <cl/types.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "vec2_s.h"
#include "mat2/struct.h"
#include "mat2/base.h"
#include "mat2/int.h"
