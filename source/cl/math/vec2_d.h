#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec2/struct.h"
#include "vec2/base.h"
#include "vec2/real.h"
