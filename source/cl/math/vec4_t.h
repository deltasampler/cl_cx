#pragma once

#include <cl/type.h>

#define vec4_t fvec4_t
#define num_t f32

struct vec4_t {
    union {
        struct {
            num_t x;
            num_t y;
            num_t z;
            num_t w;
        };
        num_t arr[4];
    };
};
