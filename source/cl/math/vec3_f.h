#pragma once

#include <cl/types.h>

#undef num_t
#define num_t f32

#undef pre
#define pre(name) f##name

#include "vec3/struct.h"
#include "vec3/base.h"
#include "vec3/real.h"
