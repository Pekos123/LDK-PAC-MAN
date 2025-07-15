#include <../include/ldk/ldk.h>


struct Color4
{
    static constexpr ldk::Vec4 White = {1.0f, 1.0f, 1.0f, 1.0f};
    static constexpr ldk::Vec4 Black = {0.0f, 0.0f, 0.0f, 1.0f};
    static constexpr ldk::Vec4 Pink = { 1.0f, 0.71f, 0.75f, 1.0f };
    static constexpr ldk::Vec4 Cyan = { 0.0f, 1.0f, 1.0f, 1.0f };
    static constexpr ldk::Vec4 Orange = { 1.0f, 0.41f, 0.0f, 1.0f };
    static constexpr ldk::Vec4 Red = { 1.0f, 0.0f, 0.0f, 1.0f };
};