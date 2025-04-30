#include <stdio.h>

#include "vec3s.h"

#include "vec3_t.cpp"
#include "vec3_arithm.cpp"

// string
void vec3_str(const vec3_t& v, char* str) {
    sprintf(str, "vec3(%i, %i, %i)", num_t(v.x), num_t(v.y), num_t(v.z));
}

void vec3_print(const vec3_t& v) {
    char str[128];

    vec3_str(v, str);

    printf("%s\n", str);
}
