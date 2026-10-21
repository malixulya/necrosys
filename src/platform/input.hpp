#pragma once
#include "ntl/types.hpp"
#include <array>
namespace necro
{
constexpr sz64 INPUT_KEYS_MAX = 256;
class Input
{
  public:
    Input() = delete;
    ~Input() = delete;
    Input(const Input& input) = delete;
    static auto Init() -> b8;
    static auto Terminate() -> b8;
    static void Update();
    static auto IsKeyDown(sz64 index) -> b8;
    static auto IsKeyUp(sz64 index) -> b8;
    static auto IsKeyPressed(sz64 index) -> b8;
    static auto IsKeyHeld(sz64 index) -> b8;
    static auto IsKeyReleased(sz64 index) -> b8;

  private:
    static std::array<b8, INPUT_KEYS_MAX> keys;
    static std::array<b8, INPUT_KEYS_MAX> keys_previous;
};
} // namespace necro
