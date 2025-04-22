#pragma once
#include <cl/type.h>

#define vec2_t fvec2_t
#define num_t f32

struct vec2_t {
    union {
        struct {
            num_t x;
            num_t y;
        };
        num_t arr[2];
    };
};

/* creation */
// vec2
vec2_t vec2(num_t x = 0.0);
vec2_t vec2(num_t x, num_t y);

// vec2_zero
void vec2_zero(vec2_t& out);
vec2_t vec2n_zero();

// vec2_set
void vec2_set(vec2_t& out, num_t x, num_t y);

// vec2_copy
void vec2_copy(vec2_t& out, const vec2_t& v);
vec2_t vec2n_copy(const vec2_t& v);

/* arithmetic vector x vector */
// vec2_add
void vec2_add(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_add(const vec2_t& v0, const vec2_t& v1);
void vec2m_add(vec2_t& out, const vec2_t& v);

// vec2_sub
void vec2_sub(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_sub(const vec2_t& v0, const vec2_t& v1);
void vec2m_sub(vec2_t& out, const vec2_t& v);

// vec2_mul
void vec2_mul(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_mul(const vec2_t& v0, const vec2_t& v1);
void vec2m_mul(vec2_t& out, const vec2_t& v);

// vec2_div
void vec2_div(vec2_t& out, const vec2_t& v0, const vec2_t& v1);
vec2_t vec2n_div(const vec2_t& v0, const vec2_t& v1);
void vec2m_div(vec2_t& out, const vec2_t& v);

/* string */
void vec2_print(const vec2_t& out);

/* operator overloading */
// operator+
vec2_t operator+(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator+=(vec2_t& out, const vec2_t& v);

// operator-
vec2_t operator-(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator-=(vec2_t& out, const vec2_t& v);

// operator*
vec2_t operator*(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator*=(vec2_t& out, const vec2_t& v);

// operator/
vec2_t operator/(const vec2_t& v0, const vec2_t& v1);
vec2_t& operator/=(vec2_t& out, const vec2_t& v);
