#ifndef MAT2_T
#define MAT2_T

#include <cl/type.h>

#ifndef num_t
    #define num_t f32
#endif

#ifndef pre
    #define pre(name) f##name
#endif

#undef mat2_t
#define mat2_t pre(mat2_t)

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

// creation
mat2_t mat2(num_t x = num_t(1.0));
mat2_t mat2(num_t e00, num_t e01, num_t e10, num_t e11);

void mat2_zero(mat2_t& out);
mat2_t mat2n_zero();

void mat2_ident(mat2_t& out);
mat2_t mat2n_ident();

void mat2_set(mat2_t& out, num_t e00, num_t e01, num_t e10, num_t e11);

void mat2_copy(mat2_t& out, const mat2_t& m);
mat2_t mat2n_copy(const mat2_t& m);

#endif
