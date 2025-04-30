#pragma once

#include "vec4_t.h"

// arithmetic vector x vector
void vec4_add(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_add(const vec4_t& v0, const vec4_t& v1);
void vec4m_add(vec4_t& out, const vec4_t& v);

void vec4_sub(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_sub(const vec4_t& v0, const vec4_t& v1);
void vec4m_sub(vec4_t& out, const vec4_t& v);

void vec4_mul(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_mul(const vec4_t& v0, const vec4_t& v1);
void vec4m_mul(vec4_t& out, const vec4_t& v);

void vec4_div(vec4_t& out, const vec4_t& v0, const vec4_t& v1);
vec4_t vec4n_div(const vec4_t& v0, const vec4_t& v1);
void vec4m_div(vec4_t& out, const vec4_t& v);

// arithmetic vector x scalar
void vec4_adds(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_adds(const vec4_t& v, num_t s);
void vec4m_adds(vec4_t& out, num_t s);

void vec4_subs(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_subs(const vec4_t& v, num_t s);
void vec4m_subs(vec4_t& out, num_t s);

void vec4_muls(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_muls(const vec4_t& v, num_t s);
void vec4m_muls(vec4_t& out, num_t s);

void vec4_divs(vec4_t& out, const vec4_t& v, num_t s);
vec4_t vec4n_divs(const vec4_t& v, num_t s);
void vec4m_divs(vec4_t& out, num_t s);

// arithmetic vector x vector x scalar
void vec4_addmuls(vec4_t& out, const vec4_t& v0, const vec4_t& v1, num_t s);
vec4_t vec4n_addmuls(const vec4_t& v0, const vec4_t& v1, num_t s);
void vec4m_addmuls(vec4_t& out, const vec4_t& v, num_t s);

// operator overloading
vec4_t operator+(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator+=(vec4_t& out, const vec4_t& v);

vec4_t operator-(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator-=(vec4_t& out, const vec4_t& v);

vec4_t operator*(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator*=(vec4_t& out, const vec4_t& v);

vec4_t operator/(const vec4_t& v0, const vec4_t& v1);
vec4_t& operator/=(vec4_t& out, const vec4_t& v);

vec4_t operator+(const vec4_t& v, num_t s);
vec4_t& operator+=(vec4_t& out, num_t s);

vec4_t operator-(const vec4_t& v, num_t s);
vec4_t& operator-=(vec4_t& out, num_t s);

vec4_t operator*(const vec4_t& v, num_t s);
vec4_t& operator*=(vec4_t& out, num_t s);

vec4_t operator/(const vec4_t& v, num_t s);
vec4_t& operator/=(vec4_t& out, num_t s);
