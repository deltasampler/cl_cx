#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "vec2_f.h"
#include "mat2/struct.h"
#include "mat2/base.h"
#include "mat2/real.h"
