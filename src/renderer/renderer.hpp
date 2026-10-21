#pragma once
#include "ntl/types.hpp"
namespace necro
{
class Renderer
{
  public:
    Renderer();
    ~Renderer();
    auto Run() -> b8;

  private:
    auto Init() -> b8;
    auto MainLoop() -> b8;
    auto Terminate() -> b8;
};
} // namespace necro
