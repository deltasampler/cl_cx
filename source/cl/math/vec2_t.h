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
