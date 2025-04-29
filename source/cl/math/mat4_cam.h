#pragma once

#include "mat4_t.h"
#include "vec3_t.h"

void mat4_look_at(mat4_t& out, const vec3_t& eye, const vec3_t& center, const vec3_t& up);
mat4_t mat4n_look_at(const vec3_t& eye, const vec3_t& center, const vec3_t& up);

void mat4_target_to(mat4_t& out, const vec3_t& eye, const vec3_t& target, const vec3_t& up);
mat4_t mat4n_target_to(const vec3_t& eye, const vec3_t& target, const vec3_t& up);
