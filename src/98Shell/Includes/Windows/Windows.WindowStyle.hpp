#pragma once

#include <Windows/Windows.hpp>

namespace Windows
{
    enum class WindowStyle : u32
    {
        Border                = WS_BORDER,
        Caption               = WS_CAPTION,
        Child                 = WS_CHILD,
        ChildWindow           = (u32)Child,
        ClipChildren          = WS_CLIPCHILDREN,
        ClipSiblings          = WS_CLIPSIBLINGS,
        Disabled              = WS_DISABLED,
        DialogFrame           = WS_DLGFRAME,
        Group                 = WS_GROUP,
        HScrollbar            = WS_HSCROLL,
        Iconic                = WS_ICONIC,
        Maximized             = WS_MAXIMIZE,
        HasMaxButton          = WS_MAXIMIZEBOX,
        Minimized             = (u32)Iconic,
        HasMinButton          = WS_MINIMIZEBOX,
        Overlapped            = WS_OVERLAPPED,
        Tiled                 = (u32)Overlapped,
        Popup                 = WS_POPUP,
        SystemMenu            = WS_SYSMENU,
        SizeBox               = WS_SIZEBOX,
        ThickFrame            = (u32)SizeBox,
        TabStop               = WS_TABSTOP,
        Visible               = WS_VISIBLE,
        VScrollbar            = WS_VSCROLL,
        OverlappedWindow      = WindowStyle::Overlapped | WindowStyle::Caption      | WindowStyle::SystemMenu |
                                WindowStyle::ThickFrame | WindowStyle::HasMinButton | WindowStyle::HasMaxButton,
        TitledWindow          = (u32)OverlappedWindow,
        PopupWindow           = WindowStyle::Popup | WindowStyle::Border | WindowStyle::SystemMenu,

    };

    enum class WindowStyleEx : u32
    {
        AcceptFiles           = WS_EX_ACCEPTFILES,
        AppWindow             = WS_EX_APPWINDOW,
        ClientEdge            = WS_EX_CLIENTEDGE,
        Composited            = WS_EX_COMPOSITED,
        ContextHelp           = WS_EX_CONTEXTHELP,
        ControlParent         = WS_EX_CONTROLPARENT,
        DlgModalFrame         = WS_EX_DLGMODALFRAME,
        Layered               = WS_EX_LAYERED,
        RightToLeftLayout     = WS_EX_LAYOUTRTL,
        LeftToRightLayout     = WS_EX_LTRREADING,
        LeftScrollbar         = WS_EX_LEFTSCROLLBAR,
        MDIChild              = WS_EX_MDICHILD,
        NoActivate            = WS_EX_NOACTIVATE,
        NoInheritLayout       = WS_EX_NOINHERITLAYOUT,
        NoParentNotify        = WS_EX_NOPARENTNOTIFY,
        NoRedirectionBitmap   = WS_EX_NOREDIRECTIONBITMAP,
        RightAligned          = WS_EX_RIGHT,
        RightToLeftReading    = WS_EX_RTLREADING,
        StaticEdge            = WS_EX_STATICEDGE,
        ToolWindow            = WS_EX_TOOLWINDOW,
        TopMost               = WS_EX_TOPMOST,
        Transparent           = WS_EX_TRANSPARENT,
        WindowEdge            = WS_EX_WINDOWEDGE,

        OverlappedWindow      = WindowStyleEx::WindowEdge | WindowStyleEx::ClientEdge,
        PaletteWindow         = WindowStyleEx::WindowEdge | WindowStyleEx::ToolWindow | WindowStyleEx::TopMost
    };
}