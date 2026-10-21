#pragma once
#include <SDL3/SDL.h>
#include "ntl/types.hpp"
namespace necro
{
class Window
{
  public:
    Window() = delete;
    ~Window() = delete;
    auto Init() -> b8;
    auto Terminate() -> b8;
    auto ShouldClose() -> b8;
    void Close();

  private:
    static SDL_Window* window;
    static SDL_Event event;
};
} // namespace necro
