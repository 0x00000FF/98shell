#pragma once

#include <type_traits>

namespace Windows
{
    template <class E, std::enable_if_t<std::is_enum<E>::value, int> = 0>
    constexpr u32 operator|(const u32& left, const E& right)
    {
        using T = typename std::underlying_type<E>::type;
        return static_cast<E>(left | static_cast<T>(right));
    }

    template <class E, std::enable_if_t<std::is_enum<E>::value, int> = 0>
    constexpr u32 operator|(const E&   left, const E& right)
    {
        using T = typename std::underlying_type<E>::type;
        return static_cast<E>(static_cast<T>(left) | static_cast<T>(right));
    }
}