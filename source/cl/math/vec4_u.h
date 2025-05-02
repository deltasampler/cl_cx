#pragma once

#include <cl/types.h>

#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "vec4/struct.h"
#include "vec4/base.h"
#include "vec4/int.h"
