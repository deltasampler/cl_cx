#pragma once

#include <cl/type.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#undef VEC4_T
#include "vec4_t.h"
#include "vec4_arithm.h"

// string
void vec4_str(const vec4_t& v, char* str);
void vec4_print(const vec4_t& v);
