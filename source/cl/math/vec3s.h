#pragma once

#include <cl/type.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#undef VEC3_T
#include "vec3_t.h"
#include "vec3_arithm.h"

// string
void vec3_str(const vec3_t& v, char* str);
void vec3_print(const vec3_t& v);
