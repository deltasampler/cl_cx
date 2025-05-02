#pragma once

#include <cl/types.h>

#undef num_t
#define num_t u32

#undef pre
#define pre(name) u##name

#include "vec2/struct.h"
#include "vec2/base.h"
#include "vec2/int.h"
