#include <stdlib.h>
#include "math.h"

#include "rand.h"

f32 random() {
    return (f32)rand() / (f32)RAND_MAX;
}

f32 rand_ex(f32 min, f32 max) {
    return floor(random() * (max - min) + min);
}

f32 rand_in(f32 min, f32 max) {
    return floor(random() * (max - min + 1.0f) + min);
}
