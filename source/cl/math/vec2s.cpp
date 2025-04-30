#include <stdio.h>

#include "vec2s.h"

#include "vec2_t.cpp"
#include "vec2_arithm.cpp"

// string
void vec2_str(const vec2_t& v, char* str) {
    sprintf(str, "vec2(%i, %i)", num_t(v.x), num_t(v.y));
}

void vec2_print(const vec2_t& v) {
    char str[128];

    vec2_str(v, str);

    printf("%s\n", str);
}
