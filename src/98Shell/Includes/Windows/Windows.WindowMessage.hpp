#pragma once

#include <Windows/Windows.hpp>

namespace Windows
{
    enum class WindowMessage : u32
    {
        Null             = WM_NULL,
        Create           = WM_CREATE,
        Destroy          = WM_DESTROY,
        Move             = WM_MOVE,
        Size             = WM_SIZE,
        Activate         = WM_ACTIVATE,
        SetFocus         = WM_SETFOCUS,
        KlllFocus        = WM_KILLFOCUS,
        Enable           = WM_ENABLE,
        SetRedraw        = WM_SETREDRAW,
        SetText          = WM_SETTEXT,
        GetText          = WM_GETTEXT,
        GetTextLength    = WM_GETTEXTLENGTH,
        Paint            = WM_PAINT,
        Close            = WM_CLOSE,
        QueryEndSession  = WM_QUERYENDSESSION,
        Quit             = WM_QUIT,
        QueryOpen        = WM_QUERYOPEN,
        EraseBackground  = WM_ERASEBKGND,
        SysColorChange   = WM_SYSCOLORCHANGE,
        EndSession       = WM_ENDSESSION,
        ShowWindow       = WM_SHOWWINDOW,

    };
}