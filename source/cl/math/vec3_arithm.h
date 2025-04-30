#pragma once

#include "vec3_t.h"

// arithmetic - vector x vector
void vec3_add(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_add(const vec3_t& v0, const vec3_t& v1);
void vec3m_add(vec3_t& out, const vec3_t& v);

void vec3_sub(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_sub(const vec3_t& v0, const vec3_t& v1);
void vec3m_sub(vec3_t& out, const vec3_t& v);

void vec3_mul(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_mul(const vec3_t& v0, const vec3_t& v1);
void vec3m_mul(vec3_t& out, const vec3_t& v);

void vec3_div(vec3_t& out, const vec3_t& v0, const vec3_t& v1);
vec3_t vec3n_div(const vec3_t& v0, const vec3_t& v1);
void vec3m_div(vec3_t& out, const vec3_t& v);

// arithmetic - vector x scalar
void vec3_adds(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_adds(const vec3_t& v, num_t s);
void vec3m_adds(vec3_t& out, num_t s);

void vec3_subs(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_subs(const vec3_t& v, num_t s);
void vec3m_subs(vec3_t& out, num_t s);

void vec3_muls(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_muls(const vec3_t& v, num_t s);
void vec3m_muls(vec3_t& out, num_t s);

void vec3_divs(vec3_t& out, const vec3_t& v, num_t s);
vec3_t vec3n_divs(const vec3_t& v, num_t s);
void vec3m_divs(vec3_t& out, num_t s);

// arithmetic - vector x vector x scalar
void vec3_addmuls(vec3_t& out, const vec3_t& v0, const vec3_t& v1, num_t s);
vec3_t vec3n_addmuls(const vec3_t& v0, const vec3_t& v1, num_t s);
void vec3m_addmuls(vec3_t& out, const vec3_t& v, num_t s);

// arithmetic operator overloading - vector x vector
vec3_t operator+(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator+=(vec3_t& out, const vec3_t& v);

vec3_t operator-(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator-=(vec3_t& out, const vec3_t& v);

vec3_t operator*(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator*=(vec3_t& out, const vec3_t& v);

vec3_t operator/(const vec3_t& v0, const vec3_t& v1);
vec3_t& operator/=(vec3_t& out, const vec3_t& v);

// arithmetic operator overloading - vector x scalar
vec3_t operator+(const vec3_t& v, num_t s);
vec3_t& operator+=(vec3_t& out, num_t s);

vec3_t operator-(const vec3_t& v, num_t s);
vec3_t& operator-=(vec3_t& out, num_t s);

vec3_t operator*(const vec3_t& v, num_t s);
vec3_t& operator*=(vec3_t& out, num_t s);

vec3_t operator/(const vec3_t& v, num_t s);
vec3_t& operator/=(vec3_t& out, num_t s);
