#pragma once

#include <cl/type.h>

#define mat3_t fmat3_t
#define num_t f32

struct mat3_t {
    union {
        struct {
            num_t e00; num_t e01; num_t e02;
            num_t e10; num_t e11; num_t e12;
            num_t e20; num_t e21; num_t e22;
        };
        struct {
            num_t i0; num_t i1; num_t i2;
            num_t i3; num_t i4; num_t i5;
            num_t i6; num_t i7; num_t i8;
        };
        num_t arr[9];
    };
};
