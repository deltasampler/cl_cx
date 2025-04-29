#include "math.h"

#include "vec4_other.h"

// rounding
void vec4_trunc(vec4_t& out, const vec4_t& v) {
    out.x = trunc(v.x);
    out.y = trunc(v.y);
    out.z = trunc(v.z);
    out.w = trunc(v.w);
}

vec4_t vec4n_trunc(const vec4_t& v) {
    vec4_t out;

    vec4_trunc(out, v);

    return out;
}

void vec4m_trunc(vec4_t& out) {
    vec4_trunc(out, out);
}

void vec4_floor(vec4_t& out, const vec4_t& v) {
    out.x = floor(v.x);
    out.y = floor(v.y);
    out.z = floor(v.z);
    out.w = floor(v.w);
}

vec4_t vec4n_floor(const vec4_t& v) {
    vec4_t out;

    vec4_floor(out, v);

    return out;
}

void vec4m_floor(vec4_t& out) {
    vec4_floor(out, out);
}

void vec4_ceil(vec4_t& out, const vec4_t& v) {
    out.x = ceil(v.x);
    out.y = ceil(v.y);
    out.z = ceil(v.z);
    out.w = ceil(v.w);
}

vec4_t vec4n_ceil(const vec4_t& v) {
    vec4_t out;

    vec4_ceil(out, v);

    return out;
}

void vec4m_ceil(vec4_t& out) {
    vec4_ceil(out, out);
}

void vec4_round(vec4_t& out, const vec4_t& v) {
    out.x = round(v.x);
    out.y = round(v.y);
    out.z = round(v.z);
    out.w = round(v.w);
}

vec4_t vec4n_round(const vec4_t& v) {
    vec4_t out;

    vec4_round(out, v);

    return out;
}

void vec4m_round(vec4_t& out) {
    vec4_round(out, out);
}

// bounding
void vec4_min(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = min(v0.x, v1.x);
    out.y = min(v0.y, v1.y);
    out.z = min(v0.z, v1.z);
    out.w = min(v0.w, v1.w);
}

vec4_t vec4n_min(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_min(out, v0, v1);

    return out;
}

void vec4_max(vec4_t& out, const vec4_t& v0, const vec4_t& v1) {
    out.x = max(v0.x, v1.x);
    out.y = max(v0.y, v1.y);
    out.z = max(v0.z, v1.z);
    out.w = max(v0.w, v1.w);
}

vec4_t vec4n_max(const vec4_t& v0, const vec4_t& v1) {
    vec4_t out;

    vec4_max(out, v0, v1);

    return out;
}

void vec4_clamp(vec4_t& out, const vec4_t& v, const vec4_t& min, const vec4_t& max) {
    out.x = clamp(v.x, min.x, max.x);
    out.y = clamp(v.y, min.y, max.y);
    out.z = clamp(v.z, min.z, max.z);
    out.w = clamp(v.w, min.w, max.w);
}

vec4_t vec4n_clamp(const vec4_t& v, const vec4_t& min, const vec4_t& max) {
    vec4_t out;

    vec4_clamp(out, v, min, max);

    return out;
}

void vec4m_clamp(vec4_t& out, const vec4_t& min, const vec4_t& max) {
    vec4_clamp(out, out, min, max);
}

// comparison
bool vec4_equals_exact(const vec4_t& v0, const vec4_t& v1) {
    return v0.x == v1.x && v0.y == v1.y && v0.z == v1.z && v0.w == v1.w;
}

bool vec4_equals(const vec4_t& v0, const vec4_t& v1, num_t e) {
    num_t a0 = v0.x, a1 = v0.y, a2 = v0.z, a3 = v0.w;
    num_t b0 = v1.x, b1 = v1.y, b2 = v1.z, b3 = v1.w;

    return (
        abs(a0 - b0) <= e * max(num_t(1.0), abs(a0), abs(b0)) &&
        abs(a1 - b1) <= e * max(num_t(1.0), abs(a1), abs(b1)) &&
        abs(a2 - b2) <= e * max(num_t(1.0), abs(a2), abs(b2)) &&
        abs(a3 - b3) <= e * max(num_t(1.0), abs(a3), abs(b3))
    );
}
