#pragma once
#include <cl/type.h>

#define FSTR_CAP 256

struct fstr_t {
    char data[FSTR_CAP];
    usize len;
};

void fstr_new(fstr_t& str);
void fstr_assign(fstr_t& str, char c);
void fstr_assign(fstr_t& str, const char* cstr);
void fstr_concat(fstr_t& str, char c);
void fstr_concat(fstr_t& str, const char* cstr);
char fstr_at(fstr_t& str, usize i);
