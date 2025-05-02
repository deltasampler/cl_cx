#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec4/struct.h"
#include "vec4/base.h"
#include "vec4/real.h"
