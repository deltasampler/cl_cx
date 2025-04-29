#pragma once

#include <cl/type.h>

#define mat2x3_t fmat2x3_t
#define num_t f32

struct mat2x3_t {
    union {
        struct {
            num_t e00; num_t e01;
            num_t e10; num_t e11;
            num_t e20; num_t e21;
        };
        struct {
            num_t i0; num_t i1;
            num_t i2; num_t i3;
            num_t i4; num_t i5;
        };
        num_t arr[6];
    };
};
