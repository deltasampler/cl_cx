#pragma once

#include "vec2_t.h"

// arithmetic - vector x vector
void vec2_add(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_add(const vec2_t& v0, const vec2_t& v1);
void vec2m_add(vec2_t& out, const vec2_t& v);

void vec2_sub(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_sub(const vec2_t& v0, const vec2_t& v1);
void vec2m_sub(vec2_t& out, const vec2_t& v);

void vec2_mul(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_mul(const vec2_t& v0, const vec2_t& v1);
void vec2m_mul(vec2_t& out, const vec2_t& v);

void vec2_div(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_div(const vec2_t& v0, const vec2_t& v1);
void vec2m_div(vec2_t& out, const vec2_t& v);

// arithmetic - vector x scalar
void vec2_adds(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_adds(const vec2_t& v, num_t s);
void vec2m_adds(vec2_t& out, num_t s);

void vec2_subs(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_subs(const vec2_t& v, num_t s);
void vec2m_subs(vec2_t& out, num_t s);

void vec2_muls(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_muls(const vec2_t& v, num_t s);
void vec2m_muls(vec2_t& out, num_t s);

void vec2_divs(vec2_t& out, const vec2_t& v, num_t s);
vec2_t vec2n_divs(const vec2_t& v, num_t s);
void vec2m_divs(vec2_t& out, num_t s);

// arithmetic - vector x vector x scalar
void vec2_addmuls(vec2_t& out, const vec2_t& v0, const vec2_t& v1, num_t s);
vec2_t vec2n_addmuls(const vec2_t& v0, const vec2_t& v1, num_t s);
void vec2m_addmuls(vec2_t& out, const vec2_t& v, num_t s);

// arithmetic operator overloading - vector x vector
vec2_t operator+(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator+=(vec2_t& out, const vec2_t& v);

vec2_t operator-(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator-=(vec2_t& out, const vec2_t& v);

vec2_t operator*(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator*=(vec2_t& out, const vec2_t& v);

vec2_t operator/(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator/=(vec2_t& out, const vec2_t& v);

// arithmetic operator overloading - vector x scalar
vec2_t operator+(const vec2_t& v, num_t s);
vec2_t& operator+=(vec2_t& out, num_t s);

vec2_t operator-(const vec2_t& v, num_t s);
vec2_t& operator-=(vec2_t& out, num_t s);

vec2_t operator*(const vec2_t& v, num_t s);
vec2_t& operator*=(vec2_t& out, num_t s);

vec2_t operator/(const vec2_t& v, num_t s);
vec2_t& operator/=(vec2_t& out, num_t s);
