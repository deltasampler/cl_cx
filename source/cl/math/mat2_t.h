#pragma once

#include <cl/type.h>

#define mat2_t fmat2_t
#define num_t f32

struct mat2_t {
    union {
        struct {
            num_t e00; num_t e01;
            num_t e10; num_t e11;
        };
        struct {
            num_t i0; num_t i1;
            num_t i2; num_t i3;
        };
        num_t arr[4];
    };
};
