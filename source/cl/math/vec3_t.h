#pragma once

#include <cl/type.h>

#define vec3_t fvec3_t
#define num_t f32

struct vec3_t {
    union {
        struct {
            num_t x;
            num_t y;
            num_t z;
        };
        num_t arr[3];
    };
};
