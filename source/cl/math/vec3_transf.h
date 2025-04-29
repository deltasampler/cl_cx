#pragma once

#include "vec3_t.h"
#include "mat3_t.h"
#include "mat4_t.h"

void vec3_transf_mat3(vec3_t& out, const vec3_t& v, const mat3_t& m);
vec3_t vec3n_transf_mat3(const vec3_t& v, const mat3_t& m);
void vec3m_transf_mat3(vec3_t& out, const mat3_t& m);

void vec3_transf_mat4(vec3_t& out, const vec3_t& v, const mat4_t& m);
vec3_t vec3n_transf_mat4(const vec3_t& v, const mat4_t& m);
void vec3m_transf_mat4(vec3_t& out, const mat4_t& m);
