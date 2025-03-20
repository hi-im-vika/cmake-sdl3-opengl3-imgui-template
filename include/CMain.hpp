/**
 * CMain.hpp - new file
 * 2025-03-20
 * vika <https://github.com/hi-im-vika>
 */

#pragma once

#include <iostream>
#include <spdlog/spdlog.h>
#include <imgui.h>
#include <backends/imgui_impl_sdl3.h>
#include <backends/imgui_impl_opengl3.h>
#include <SDL3/SDL.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL3/SDL_opengles2.h>
#else
#include <SDL3/SDL_opengl.h>
#endif

#include "CBase.hpp"

class CMain : public CBase {
private:
    // SDL
    SDL_Window* _window;
    SDL_GLContext _gl_context;

    // imgui
    bool _show_demo_window;
    bool _show_another_window;
    ImVec4 _clear_colour;
    float _imgui_float;
    int _imgui_ctr;

    std::string _text;
    uint _count;

public:
    CMain();
    ~CMain();

    void update() override;
    void draw() override;
};