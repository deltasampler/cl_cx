#pragma once

#include "vec4_t.h"
#include "mat4_t.h"

void vec4_transf_mat4(vec4_t& out, const vec4_t& v, const mat4_t& m);
vec4_t vec4n_transf_mat4(const vec4_t& v, const mat4_t& m);
void vec4m_transf_mat4(vec4_t& out, const mat4_t& m);
