#include "fstr.h"

void fstr_new(fstr_t& str) {
    str.data[0] = '\0';
    str.len = 0;
}

void fstr_assign(fstr_t& str, char c) {
    str.data[0] = c;
    str.data[1] = '\0';
    str.len = 1;
}

void fstr_assign(fstr_t& str, const char* cstr) {
    str.len = 0;

    while (cstr[str.len] != '\0' && str.len < FSTR_CAP - 1) {
        str.data[str.len] = cstr[str.len];
        str.len += 1;
    }

    str.data[str.len] = '\0';
}

void fstr_concat(fstr_t& str, char c) {
    str.data[str.len] = c;
    str.len += 1;
    str.data[str.len] = '\0';
}

void fstr_concat(fstr_t& str, const char* cstr) {
    usize len = 0;

    while (cstr[len] != '\0' && str.len < FSTR_CAP - 1) {
        str.data[str.len] = cstr[len];
        str.len += 1;
        len += 1;
    }

    str.data[str.len] = '\0';
}

char fstr_at(fstr_t& str, usize i) {
    if (i >= str.len || i >= FSTR_CAP) {
        return '\0';
    }

    return str.data[i];
}
