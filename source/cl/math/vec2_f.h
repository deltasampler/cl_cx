#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "vec2/struct.h"
#include "vec2/base.h"
#include "vec2/real.h"
