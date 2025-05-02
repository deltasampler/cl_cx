#pragma once

#include <cl/types.h>

#undef num_t
#define num_t s32

#undef pre
#define pre(name) s##name

#include "vec4/struct.h"
#include "vec4/base.h"
#include "vec4/int.h"

// basic
void vec4_abs(vec4_t& out, const vec4_t& v);
vec4_t vec4n_abs(const vec4_t& out);
void vec4m_abs(vec4_t& out);

void vec4_neg(vec4_t& out, const vec4_t& v);
vec4_t vec4n_neg(const vec4_t& out);
void vec4m_neg(vec4_t& out);
