#pragma once

#include <math.h>
#include <cl/type.h>

#define EPSILON 0.000001
#define PI 3.141592653589793

// number properties
f32 abs(f32 x);
f32 sign(f32 x);
f32 fract(f32 x);
f32 mod(f32 x, f32 y);

// power/root
f32 pow(f32 x, f32 y);
f32 sqrt(f32 x);
f32 invsqrt(f32 x);
f32 cbrt(f32 x);

// magnitude
f32 hypot(f32 x, f32 y);
f32 hypot(f32 x, f32 y, f32 z);
f32 hypot(f32 x, f32 y, f32 z, f32 w);
f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5);
f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6);
f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6, f32 i7, f32 i8);
f32 hypot(f32 i0, f32 i1, f32 i2, f32 i3, f32 i4, f32 i5, f32 i6, f32 i7, f32 i8, f32 i9, f32 i10, f32 i11, f32 i12, f32 f13, f32 f14, f32 f15);

// exponential
f32 exp(f32 x);
f32 exp2(f32 x);

// logarithmic
f32 log(f32 x);
f32 log2(f32 x);
f32 log10(f32 x);

// angles
f32 rad(f32 x);
f32 deg(f32 x);

// trigonometric
f32 sin(f32 x);
f32 cos(f32 x);
f32 tan(f32 x);
f32 asin(f32 x);
f32 acos(f32 x);
f32 atan(f32 x);
f32 atan2(f32 y, f32 x);
f32 sinh(f32 x);
f32 cosh(f32 x);
f32 tanh(f32 x);
f32 asinh(f32 x);
f32 acosh(f32 x);
f32 atanh(f32 x);

// rounding
f32 trunc(f32 x);
f32 floor(f32 x);
f32 ceil(f32 x);
f32 round(f32 x);
f32 round2(f32 x, f32 y);

// bounding
f32 min(f32 x, f32 y);
f32 min(f32 x, f32 y, f32 z);
f32 max(f32 x, f32 y);
f32 max(f32 x, f32 y, f32 z);
f32 clamp(f32 x, f32 min, f32 max);
f32 wrap(f32 x, f32 max);
f32 wrap2(f32 x, f32 min, f32 max);

// interpolation
f32 lerp(f32 x, f32 y, f32 t);
f32 lerp2(f32 x, f32 y, f32 t);

// step
f32 step(f32 e, f32 x);
f32 smoothstep(f32 e0, f32 e1, f32 x);

// indexing
f32 index2(f32 x, f32 y, f32 w);
