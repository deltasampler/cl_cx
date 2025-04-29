#pragma once

#include "mat2x3_t.h"
#include "vec2_t.h"

void mat2x3_translation(mat2x3_t& out, const vec2_t& v);
mat2x3_t mat2x3n_translation(const vec2_t& v);

void mat2x3_rotation(mat2x3_t& out, num_t r);
mat2x3_t mat2x3n_rotation(num_t r);

void mat2x3_scaling(mat2x3_t& out, const vec2_t& v);
mat2x3_t mat2x3n_scaling(const vec2_t& v);

void mat2x3_translate(mat2x3_t& out, const mat2x3_t& m, const vec2_t& v);
mat2x3_t mat2x3n_translate(const mat2x3_t& m, const vec2_t& v);
void mat2x3m_translate(mat2x3_t& out, const vec2_t& v);

void mat2x3_rotate(mat2x3_t& out, const mat2x3_t& m, num_t r);
mat2x3_t mat2x3n_rotate(const mat2x3_t& m, num_t r);
void mat2x3m_rotate(mat2x3_t& out, num_t r);

void mat2x3_scale(mat2x3_t& out, const mat2x3_t& m, const vec2_t& v);
mat2x3_t mat2x3n_scale(const mat2x3_t& m, const vec2_t& v);
void mat2x3m_scale(mat2x3_t& out, const vec2_t& v);
