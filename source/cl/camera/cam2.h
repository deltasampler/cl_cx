#pragma once

#include <cl/math/vec2_t.h>
#include <cl/math/mat4_t.h>

struct cam2_t {
    vec2_t position;
    f32 scale;
    f32 roll;
    vec2_t right;
    vec2_t up;
    vec2_t world_up;
    mat4_t projection;
    f32 near;
    f32 far;
    mat4_t view;
    f32 movement_speed;
    f32 roll_speed;
    f32 zoom_speed;
};

cam2_t cam2_new();

void cam2_move_right(cam2_t& cam, f32 dir);
void cam2_move_up(cam2_t& cam, f32 dir);

void cam2_roll(cam2_t& cam, f32 dir);

void cam2_zoom(cam2_t& cam, f32 dir);

void cam2_compute_proj(cam2_t& cam, s32 viewport_x, s32 viewport_y);
void cam2_compute_view(cam2_t& cam);
