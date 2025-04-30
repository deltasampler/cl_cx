#include "mat2x3_t.h"

// creation
mat2x3_t mat2x3(num_t x) {
    mat2x3_t out;

    out.e00 = x;
    out.e01 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = x;
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);

    return out;
}

mat2x3_t mat2x3(num_t e00, num_t e01, num_t e10, num_t e11, num_t e20, num_t e21) {
    mat2x3_t out;

    out.e00 = e00;
    out.e01 = e01;
    out.e10 = e10;
    out.e11 = e11;
    out.e20 = e20;
    out.e21 = e21;

    return out;
}

void mat2x3_zero(mat2x3_t& out) {
    out.e00 = num_t(0.0);
    out.e01 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = num_t(0.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
}

mat2x3_t mat2x3n_zero() {
    mat2x3_t out;

    mat2x3_zero(out);

    return out;
}

void mat2x3_ident(mat2x3_t& out) {
    out.e00 = num_t(1.0);
    out.e01 = num_t(0.0);
    out.e10 = num_t(0.0);
    out.e11 = num_t(1.0);
    out.e20 = num_t(0.0);
    out.e21 = num_t(0.0);
}

mat2x3_t mat2x3n_ident() {
    mat2x3_t out;

    mat2x3_ident(out);

    return out;
}

void mat2x3_set(mat2x3_t& out, num_t e00, num_t e01, num_t e10, num_t e11, num_t e20, num_t e21) {
    out.e00 = e00;
    out.e01 = e01;
    out.e10 = e10;
    out.e11 = e11;
    out.e20 = e20;
    out.e21 = e21;
}

void mat2x3_copy(mat2x3_t& out, const mat2x3_t& m) {
    out.e00 = m.e00;
    out.e01 = m.e01;
    out.e10 = m.e10;
    out.e11 = m.e11;
    out.e20 = m.e20;
    out.e21 = m.e21;
}

mat2x3_t mat2x3n_copy(const mat2x3_t& m) {
    mat2x3_t out;

    mat2x3_copy(out, m);

    return out;
}
