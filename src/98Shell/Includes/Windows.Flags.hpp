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

    enum class WindowStyle : u32
    {
        Bordered         = 0x00800000L,
        Titlebar         = 0x00C00000L,
        Child            = 0x40000000L,
        Disabled         = 0x08000000L,
        DialogFrame      = 0x00400000L,
        Group            = 0x00020000L,
        HScrollbar       = 0x00100000L,
        VScrollbar       = 0x00200000L,
        Minimized        = 0x20000000L,
        Maximized        = 0x00010000L,
        HasMinButton     = 0x00020000L,
        HasMaxButton     = 0x00010000L,
        Overlapped       = 0x00000000L,
        Popup            = 0x80000000L,
        SystemMenu       = 0x00080000L,
        ThickFrame       = 0x00040000L,
        Visible          = 0x10000000L,

        OverlappedWindow = WindowStyle::Overlapped   | WindowStyle::Titlebar | WindowStyle::SystemMenu | WindowStyle::ThickFrame |
                           WindowStyle::HasMinButton | WindowStyle::HasMaxButton,
        PopupWindow      = WindowStyle::Popup        | WindowStyle::Bordered | WindowStyle::SystemMenu,

    };

    enum class WindowStyleEx : u32
    {

    };

}