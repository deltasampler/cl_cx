#pragma once

#include "vec4_t.h"

// rounding
void vec4_trunc(vec4_t& out, const vec4_t& v);
vec4_t vec4n_trunc(const vec4_t& v);
void vec4m_trunc(vec4_t& out);

void vec4_floor(vec4_t& out, const vec4_t& v);
vec4_t vec4n_floor(const vec4_t& v);
void vec4m_floor(vec4_t& out);

void vec4_ceil(vec4_t& out, const vec4_t& v);
vec4_t vec4n_ceil(const vec4_t& v);
void vec4m_ceil(vec4_t& out);

void vec4_round(vec4_t& out, const vec4_t& v);
vec4_t vec4n_round(const vec4_t& v);
void vec4m_round(vec4_t& out);

void vec4_snap(vec4_t& out, const vec4_t& v, const vec4_t c);
vec4_t vec4n_snap(const vec4_t& v, const vec4_t c);
void vec4m_snap(vec4_t& out, const vec4_t c);

// bounding
void vec4_min(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_min(const vec4_t& v0, const vec4_t& v1);

void vec4_max(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_max(const vec4_t& v0, const vec4_t& v1);

void vec4_clamp(vec4_t& out, const vec4_t& v, const vec4_t& min, const vec4_t& max);
vec4_t vec4n_clamp(const vec4_t& v, const vec4_t& min, const vec4_t& max);
void vec4m_clamp(vec4_t& out, const vec4_t& min, const vec4_t& max);

// comparison
bool vec4_equals_exact(const vec4_t& v0, const vec4_t& v1);
bool vec4_equals(const vec4_t& v0, const vec4_t& v1, num_t e = num_t(0.000001));

// special
void vec4_swap(vec4_t& out, const vec4_t& v);
vec4_t vec4n_swap(const vec4_t& out);
void vec4m_swap(vec4_t& out);
