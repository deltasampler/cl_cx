#include "math.h"

#include "vec2_other.h"

// rounding
void vec2_trunc(vec2_t& out, const vec2_t& v) {
    out.x = trunc(v.x);
    out.y = trunc(v.y);
}

vec2_t vec2n_trunc(const vec2_t& v) {
    vec2_t out;

    vec2_trunc(out, v);

    return out;
}

void vec2m_trunc(vec2_t& out) {
    vec2_trunc(out, out);
}

void vec2_floor(vec2_t& out, const vec2_t& v) {
    out.x = floor(v.x);
    out.y = floor(v.y);
}

vec2_t vec2n_floor(const vec2_t& v) {
    vec2_t out;

    vec2_floor(out, v);

    return out;
}

void vec2m_floor(vec2_t& out) {
    vec2_floor(out, out);
}

void vec2_ceil(vec2_t& out, const vec2_t& v) {
    out.x = ceil(v.x);
    out.y = ceil(v.y);
}

vec2_t vec2n_ceil(const vec2_t& v) {
    vec2_t out;

    vec2_ceil(out, v);

    return out;
}

void vec2m_ceil(vec2_t& out) {
    vec2_ceil(out, out);
}

void vec2_round(vec2_t& out, const vec2_t& v) {
    out.x = round(v.x);
    out.y = round(v.y);
}

vec2_t vec2n_round(const vec2_t& v) {
    vec2_t out;

    vec2_round(out, v);

    return out;
}

void vec2m_round(vec2_t& out) {
    vec2_round(out, out);
}

// bounding
void vec2_min(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = min(v0.x, v1.x);
    out.y = min(v0.y, v1.y);
}

vec2_t vec2n_min(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_min(out, v0, v1);

    return out;
}

void vec2_max(vec2_t& out, const vec2_t& v0, const vec2_t& v1) {
    out.x = max(v0.x, v1.x);
    out.y = max(v0.y, v1.y);
}

vec2_t vec2n_max(const vec2_t& v0, const vec2_t& v1) {
    vec2_t out;

    vec2_max(out, v0, v1);

    return out;
}

void vec2_clamp(vec2_t& out, const vec2_t& v, const vec2_t& min, const vec2_t& max) {
    out.x = clamp(v.x, min.x, max.x);
    out.y = clamp(v.y, min.y, max.y);
}

vec2_t vec2n_clamp(const vec2_t& v, const vec2_t& min, const vec2_t& max) {
    vec2_t out;

    vec2_clamp(out, v, min, max);

    return out;
}

void vec2m_clamp(vec2_t& out, const vec2_t& min, const vec2_t& max) {
    vec2_clamp(out, out, min, max);
}

// comparison
bool vec2_equals_exact(const vec2_t& v0, const vec2_t& v1) {
    return v0.x == v1.x && v0.y == v1.y;
}

bool vec2_equals(const vec2_t& v0, const vec2_t& v1, num_t e) {
    num_t a0 = v0.x, a1 = v0.y;
    num_t b0 = v1.x, b1 = v1.y;

    return (
        abs(a0 - b0) <= e * max(num_t(1.0), abs(a0), abs(b0)) &&
        abs(a1 - b1) <= e * max(num_t(1.0), abs(a1), abs(b1))
    );
}

// special
void vec2_swap(vec2_t& out, const vec2_t& v) {
    out.x = v.y;
    out.y = v.x;
}

vec2_t vec2n_swap(const vec2_t& v) {
    vec2_t out;

    vec2_swap(out, v);

    return out;
}

void vec2m_swap(vec2_t& out) {
    vec2_swap(out, out);
}
