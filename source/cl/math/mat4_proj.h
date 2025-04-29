#pragma once

#include "mat4_t.h"

void mat4_perspective(mat4_t& out, num_t fov, num_t aspect, num_t near, num_t far);
mat4_t mat4n_perspective(num_t fov, num_t aspect, num_t near, num_t far);
