#pragma once

#include "vec2_t.h"
#include "mat2_t.h"
#include "mat2x3_t.h"
#include "mat3_t.h"
#include "mat4_t.h"

void vec2_transf_mat2(vec2_t& out, const vec2_t& v, const mat2_t& m);
vec2_t vec2n_transf_mat2(const vec2_t& v, const mat2_t& m);
void vec2m_transf_mat2(vec2_t& out, const mat2_t& m);

void vec2_transf_2x3(vec2_t& out, const vec2_t& v, const mat2x3_t& m);
vec2_t vec2n_transf_2x3(const vec2_t& v, const mat2x3_t& m);
void vec2m_transf_2x3(vec2_t& out, const mat2x3_t& m);

void vec2_transf_mat3(vec2_t& out, const vec2_t& v, const mat3_t& m);
vec2_t vec2n_transf_mat3(const vec2_t& v, const mat3_t& m);
void vec2m_transf_mat3(vec2_t& out, const mat3_t& m);

void vec2_transf_mat4(vec2_t& out, const vec2_t& v, const mat4_t& m);
vec2_t vec2n_transf_mat4(const vec2_t& v, const mat4_t& m);
void vec2m_transf_mat4(vec2_t& out, const mat4_t& m);
