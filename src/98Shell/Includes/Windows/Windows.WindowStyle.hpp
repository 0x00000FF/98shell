#pragma once

#include <Windows/Windows.hpp>

namespace Windows
{
    enum class WindowStyle : u32
    {
        Border                = 0x00800000L,
        Caption               = 0x00C00000L,
        Child                 = 0x40000000L,
        ChildWindow           = (u32)Child,
        ClipChildren          = 0x02000000L,
        ClipSiblings          = 0x04000000L,
        Disabled              = 0x08000000L,
        DialogFrame           = 0x00400000L,
        Group                 = 0x00020000L,
        HScrollbar            = 0x00100000L,
        Iconic                = 0x20000000L,
        Maximized             = 0x01000000L,
        HasMaxButton          = 0x00010000L,
        Minimized             = (u32)Iconic,
        HasMinButton          = 0x00020000L,
        Overlapped            = 0x00000000L,
        Tiled                 = (u32)Overlapped,
        Popup                 = 0x80000000L,
        SystemMenu            = 0x00080000L,
        SizeBox               = 0x00040000L,
        ThickFrame            = (u32)SizeBox,
        TabStop               = 0x00010000L,
        Visible               = 0x10000000L,
        VScrollbar            = 0x00200000L,
        OverlappedWindow      = WindowStyle::Overlapped | WindowStyle::Caption      | WindowStyle::SystemMenu |
                                WindowStyle::ThickFrame | WindowStyle::HasMinButton | WindowStyle::HasMaxButton,
        TitledWindow          = (u32)OverlappedWindow,
        PopupWindow           = WindowStyle::Popup | WindowStyle::Border | WindowStyle::SystemMenu,

    };

    enum class WindowStyleEx : u32
    {
        AcceptFiles           = 0x00000010L,
        AppWindow             = 0x00040000L,
        ClientEdge            = 0x00000200L,
        Composited            = 0x02000000L,
        ContextHelp           = 0x00000400L,
        ControlParent         = 0x00010000L,
        DlgModalFrame         = 0x00000001L,
        Layered               = 0x00080000L,
        RightToLeftLayout     = 0x00400000L,
        LeftToRightLayout     = 0x00000000L,
        LeftScrollbar         = 0x00004000L,
        MDIChild              = 0x00000040L,
        NoActivate            = 0x08000000L,
        NoInheritLayout       = 0x00100000L,
        NoParentNotify        = 0x00000004L,
        NoRedirectionBitmap   = 0x00200000L,
        RightAligned          = 0x00001000L,
        RightToLeftReading    = 0x00002000L,
        StaticEdge            = 0x00020000L,
        ToolWindow            = 0x00000080L,
        TopMost               = 0x00000008L,
        Transparent           = 0x00000020L,
        WindowEdge            = 0x00000100L,

        OverlappedWindow      = WindowStyleEx::WindowEdge | WindowStyleEx::ClientEdge,
        PaletteWindow         = WindowStyleEx::WindowEdge | WindowStyleEx::ToolWindow | WindowStyleEx::TopMost
    };
}