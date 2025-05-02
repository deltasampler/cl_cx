#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f64

#undef pre
#define pre(name) d##name

#include "vec3/struct.h"
#include "vec3/base.h"
#include "vec3/real.h"
