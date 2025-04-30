#pragma once

#include "vec3_t.h"

// rounding
void vec3_trunc(vec3_t& out, const vec3_t& v);
vec3_t vec3n_trunc(const vec3_t& v);
void vec3m_trunc(vec3_t& out);

void vec3_floor(vec3_t& out, const vec3_t& v);
vec3_t vec3n_floor(const vec3_t& v);
void vec3m_floor(vec3_t& out);

void vec3_ceil(vec3_t& out, const vec3_t& v);
vec3_t vec3n_ceil(const vec3_t& v);
void vec3m_ceil(vec3_t& out);

void vec3_round(vec3_t& out, const vec3_t& v);
vec3_t vec3n_round(const vec3_t& v);
void vec3m_round(vec3_t& out);

void vec3_snap(vec3_t& out, const vec3_t& v, const vec3_t c);
vec3_t vec3n_snap(const vec3_t& v, const vec3_t c);
void vec3m_snap(vec3_t& out, const vec3_t c);

// bounding
void vec3_min(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_min(const vec3_t& v0, const vec3_t& v1);

void vec3_max(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_max(const vec3_t& v0, const vec3_t& v1);

void vec3_clamp(vec3_t& out, const vec3_t& v, const vec3_t& min, const vec3_t& max);
vec3_t vec3n_clamp(const vec3_t& v, const vec3_t& min, const vec3_t& max);
void vec3m_clamp(vec3_t& out, const vec3_t& min, const vec3_t& max);

// comparison
bool vec3_equals_exact(const vec3_t& v0, const vec3_t& v1);
bool vec3_equals(const vec3_t& v0, const vec3_t& v1, num_t e = num_t(0.000001));
