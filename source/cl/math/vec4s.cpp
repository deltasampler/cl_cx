#include <stdio.h>

#include "vec4s.h"

#include "vec4_t.cpp"
#include "vec4_arithm.cpp"

// string
void vec4_str(const vec4_t& v, char* str) {
    sprintf(str, "vec4(%i, %i, %i, %i)", num_t(v.x), num_t(v.y), num_t(v.z), num_t(v.w));
}

void vec4_print(const vec4_t& v) {
    char str[128];

    vec4_str(v, str);

    printf("%s\n", str);
}
