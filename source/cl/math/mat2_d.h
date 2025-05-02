#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec2_d.h"
#include "mat2/struct.h"
#include "mat2/base.h"
#include "mat2/real.h"
