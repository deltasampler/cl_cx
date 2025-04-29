#include "math.h"

// number properties
f32 abs(f32 x) {
    return fabsf(x);
}

f32 sign(f32 x) {
    if (x < 0.0) return -1.0;
    if (x > 0.0) return 1.0;

    return 0.0;
}

f32 fract(f32 x) {
    return x - floorf(x);
}

f32 mod(f32 x, f32 y) {
    return fmodf(x, y);
}

// power/root
f32 pow(f32 x, f32 y) {
    return powf(x, y);
}

f32 sqrt(f32 x) {
    return sqrtf(x);
}

f32 invsqrt(f32 x) {
    return 1.0 / sqrtf(x);
}

f32 cbrt(f32 x) {
    return cbrtf(x);
}

// magnitude
f32 hypot(f32 x, f32 y) {
    return hypotf(x, y);
}

f32 hypot(f32 x, f32 y, f32 z) {
    return sqrtf(x * x + y * y + z * z);
}

f32 hypot(f32 x, f32 y, f32 z, f32 w) {
    return sqrtf(x * x + y * y + z * z + w * w);
}

f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6) {
    return sqrtf(i0 * i0 + i1 * i1 + i2 * i2 + i3 * i3 + i4 * i4 + i5 * i5 + i6 * i6);
}

f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5) {
    return sqrtf(i0 * i0 + i1 * i1 + i2 * i2 + i3 * i3 + i4 * i4 + i5 * i5);
}

f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6, f32 i7, f32 i8) {
    return sqrtf(i0 * i0 + i1 * i1 + i2 * i2 + i3 * i3 + i4 * i4 + i5 * i5 + i6 * i6 + i7 * i7 + i8 * i8);
}

f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6, f32 i7, f32 i8, f32 i9, f32 i10, f32 i11, f32 i12, f32 f13, f32 f14, f32 f15) {
    return sqrtf(i0 * i0 + i1 * i1 + i2 * i2 + i3 * i3 + i4 * i4 + i5 * i5 + i6 * i6 + i7 * i7 + i8 * i8 + i9 * i9 + i10 * i10 + i11 * i11 + i12 * i12 + f13 * f13 + f14 * f14 + f15 * f15);
}

// exponential
f32 exp(f32 x) {
    return expf(x);
}

f32 exp2(f32 x) {
    return exp2f(x);
}

// logarithmic
f32 log(f32 x) {
    return logf(x);
}

f32 log2(f32 x) {
    return log2f(x);
}

f32 log10(f32 x) {
    return log10f(x);
}

// angles
f32 rad(f32 x) {
    return x * PI / 180.0;
}

f32 deg(f32 x) {
    return x * 180.0 / PI;
}

// trigonometric
f32 sin(f32 x) {
    return sinf(x);
}

f32 cos(f32 x) {
    return cosf(x);
}

f32 tan(f32 x) {
    return tanf(x);
}

f32 asin(f32 x) {
    return asinf(x);
}

f32 acos(f32 x) {
    return acosf(x);
}

f32 atan(f32 x) {
    return atanf(x);
}

f32 atan2(f32 y, f32 x) {
    return atan2f(y, x);
}

f32 sinh(f32 x) {
    return sinhf(x);
}

f32 cosh(f32 x) {
    return coshf(x);
}

f32 tanh(f32 x) {
    return tanhf(x);
}

f32 asinh(f32 x) {
    return asinhf(x);
}

f32 acosh(f32 x) {
    return acoshf(x);
}

f32 atanh(f32 x) {
    return atanhf(x);
}

// rounding
f32 trunc(f32 x) {
    return truncf(x);
}

f32 floor(f32 x) {
    return floorf(x);
}

f32 ceil(f32 x) {
    return ceilf(x);
}

f32 round(f32 x) {
    return roundf(x);
}

f32 round2(f32 x, f32 y) {
    f32 factor = powf(10.0, y);

    return roundf(x * factor) / factor;
}

// bounding
f32 min(f32 x, f32 y) {
    return fminf(x, y);
}

f32 min(f32 x, f32 y, f32 z) {
    return fminf(fminf(x, y), z);
}

f32 max(f32 x, f32 y) {
    return fmaxf(x, y);
}

f32 max(f32 x, f32 y, f32 z) {
    return fmaxf(fmaxf(x, y), z);
}

f32 clamp(f32 x, f32 min, f32 max) {
    return fminf(fmaxf(x, min), max);
}

f32 wrap(f32 x, f32 max) {
    return fmodf(x + max, max);
}

f32 wrap2(f32 x, f32 min, f32 max) {
    f32 r = max - min;

    return fmodf(fmodf(x - min, r) + r, r) + min;
}

// interpolation
f32 lerp(f32 x, f32 y, f32 t) {
    return x + t * (y - x);
}

f32 lerp2(f32 x, f32 y, f32 t) {
    return x * (1.0 - t) + y * t;
}

// step
f32 step(f32 e, f32 x) {
    if (x < e) {
        return 0.0;
    }

    return 1.0;
}

f32 smoothstep(f32 e0, f32 e1, f32 x) {
    if (x <= e0) {
        return 0.0;
    }

    if (x >= e1) {
        return 1.0;
    }

    f32 t = (x - e0) / (e1 - e0);

    return t * t * (3.0 - 2.0 * t);
}

// indexing
f32 index2(f32 x, f32 y, f32 w) {
    return y * w + x;
}
