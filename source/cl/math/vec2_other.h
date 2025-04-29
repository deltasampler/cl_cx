#pragma once

#include "vec2_t.h"

// rounding
void vec2_trunc(vec2_t& out, const vec2_t& v);
vec2_t vec2n_trunc(const vec2_t& v);
void vec2m_trunc(vec2_t& out);

void vec2_floor(vec2_t& out, const vec2_t& v);
vec2_t vec2n_floor(const vec2_t& v);
void vec2m_floor(vec2_t& out);

void vec2_ceil(vec2_t& out, const vec2_t& v);
vec2_t vec2n_ceil(const vec2_t& v);
void vec2m_ceil(vec2_t& out);

void vec2_round(vec2_t& out, const vec2_t& v);
vec2_t vec2n_round(const vec2_t& v);
void vec2m_round(vec2_t& out);

void vec2_snap(vec2_t& out, const vec2_t& v, const vec2_t c);
vec2_t vec2n_snap(const vec2_t& v, const vec2_t c);
void vec2m_snap(vec2_t& out, const vec2_t c);

// bounding
void vec2_min(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_min(const vec2_t& v0, const vec2_t& v1);

void vec2_max(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_max(const vec2_t& v0, const vec2_t& v1);

void vec2_clamp(vec2_t& out, const vec2_t& v, const vec2_t& min, const vec2_t& max);
vec2_t vec2n_clamp(const vec2_t& v, const vec2_t& min, const vec2_t& max);
void vec2m_clamp(vec2_t& out, const vec2_t& min, const vec2_t& max);

// comparison
bool vec2_equals_exact(const vec2_t& v0, const vec2_t& v1);
bool vec2_equals(const vec2_t& v0, const vec2_t& v1, num_t e = 0.000001);

// special
void vec2_swap(vec2_t& out, const vec2_t& v);
vec2_t vec2n_swap(const vec2_t& out);
void vec2m_swap(vec2_t& out);
