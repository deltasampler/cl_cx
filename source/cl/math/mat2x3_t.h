#ifndef MAT2X3_T
#define MAT2X3_T

#include <cl/type.h>

#ifndef num_t
    #define num_t f32
#endif

#ifndef pre
    #define pre(name) f##name
#endif

#undef mat2x3_t
#define mat2x3_t pre(mat2x3_t)

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

// creation
mat2x3_t mat2x3(num_t x = num_t(1));
mat2x3_t mat2x3(num_t e00, num_t e01, num_t e10, num_t e11, num_t e20, num_t e21);

void mat2x3_zero(mat2x3_t& out);
mat2x3_t pre(mat2x3n_zero)();

void mat2x3_ident(mat2x3_t& out);
mat2x3_t pre(mat2x3n_ident)();

void mat2x3_set(mat2x3_t& out, num_t e00, num_t e01, num_t e10, num_t e11);

void mat2x3_copy(mat2x3_t& out, const mat2x3_t& m);
mat2x3_t mat2x3n_copy(const mat2x3_t& m);

#endif
