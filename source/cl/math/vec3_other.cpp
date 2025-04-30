#include "math.h"

#include "vec3_other.h"

// rounding
void vec3_trunc(vec3_t& out, const vec3_t& v) {
    out.x = trunc(v.x);
    out.y = trunc(v.y);
    out.z = trunc(v.z);
}

vec3_t vec3n_trunc(const vec3_t& v) {
    vec3_t out;

    vec3_trunc(out, v);

    return out;
}

void vec3m_trunc(vec3_t& out) {
    vec3_trunc(out, out);
}

void vec3_floor(vec3_t& out, const vec3_t& v) {
    out.x = floor(v.x);
    out.y = floor(v.y);
    out.z = floor(v.z);
}

vec3_t vec3n_floor(const vec3_t& v) {
    vec3_t out;

    vec3_floor(out, v);

    return out;
}

void vec3m_floor(vec3_t& out) {
    vec3_floor(out, out);
}

void vec3_ceil(vec3_t& out, const vec3_t& v) {
    out.x = ceil(v.x);
    out.y = ceil(v.y);
    out.z = ceil(v.z);
}

vec3_t vec3n_ceil(const vec3_t& v) {
    vec3_t out;

    vec3_ceil(out, v);

    return out;
}

void vec3m_ceil(vec3_t& out) {
    vec3_ceil(out, out);
}

void vec3_round(vec3_t& out, const vec3_t& v) {
    out.x = round(v.x);
    out.y = round(v.y);
    out.z = round(v.z);
}

vec3_t vec3n_round(const vec3_t& v) {
    vec3_t out;

    vec3_round(out, v);

    return out;
}

void vec3m_round(vec3_t& out) {
    vec3_round(out, out);
}

void vec3_snap(vec3_t& out, const vec3_t& v, const vec3_t c) {
    out.x = round(v.x / c.x) * c.x;
    out.y = round(v.y / c.y) * c.y;
    out.z = round(v.z / c.z) * c.z;
}

vec3_t vec3n_snap(const vec3_t& v, const vec3_t c) {
    vec3_t out;

    vec3_snap(out, v, c);

    return out;
}

void vec3m_snap(vec3_t& out, const vec3_t c) {
    vec3_snap(out, out, c);
}

// bounding
void vec3_min(vec3_t& out, const vec3_t& v0, const vec3_t& v1) {
    out.x = min(v0.x, v1.x);
    out.y = min(v0.y, v1.y);
    out.z = min(v0.z, v1.z);
}

vec3_t vec3n_min(const vec3_t& v0, const vec3_t& v1) {
    vec3_t out;

    vec3_min(out, v0, v1);

    return out;
}

void vec3_max(vec3_t& out, const vec3_t& v0, const vec3_t& v1) {
    out.x = max(v0.x, v1.x);
    out.y = max(v0.y, v1.y);
    out.z = max(v0.z, v1.z);
}

vec3_t vec3n_max(const vec3_t& v0, const vec3_t& v1) {
    vec3_t out;

    vec3_max(out, v0, v1);

    return out;
}

void vec3_clamp(vec3_t& out, const vec3_t& v, const vec3_t& min, const vec3_t& max) {
    out.x = clamp(v.x, min.x, max.x);
    out.y = clamp(v.y, min.y, max.y);
    out.z = clamp(v.z, min.z, max.z);
}

vec3_t vec3n_clamp(const vec3_t& v, const vec3_t& min, const vec3_t& max) {
    vec3_t out;

    vec3_clamp(out, v, min, max);

    return out;
}

void vec3m_clamp(vec3_t& out, const vec3_t& min, const vec3_t& max) {
    vec3_clamp(out, out, min, max);
}

// comparison
bool vec3_equals_exact(const vec3_t& v0, const vec3_t& v1) {
    return v0.x == v1.x && v0.y == v1.y && v0.z == v1.z;
}

bool vec3_equals(const vec3_t& v0, const vec3_t& v1, num_t e) {
    num_t a0 = v0.x, a1 = v0.y, a2 = v0.z;
    num_t b0 = v1.x, b1 = v1.y, b2 = v1.z;

    return (
        abs(a0 - b0) <= e * max(num_t(1.0), abs(a0), abs(b0)) &&
        abs(a1 - b1) <= e * max(num_t(1.0), abs(a1), abs(b1)) &&
        abs(a2 - b2) <= e * max(num_t(1.0), abs(a2), abs(b2))
    );
}
