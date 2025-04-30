#pragma once

#include <cl/type.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#undef VEC2_T
#include "vec2_t.h"
#include "vec2_arithm.h"

// string
void vec2_str(const vec2_t& v, char* str);
void vec2_print(const vec2_t& v);
