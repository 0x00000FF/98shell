#pragma once

#include <Windows/Windows.hpp>

namespace Windows
{
    enum class WindowMessage : u32
    {
        Null             = 0,
        Create           = 1,
        Destroy          = 2,
        Move             = 3,
        Size             = 5,
        Activate         = 6,
        SetFocus         = 7,
        KlllFocus        = 8,
        Enable           = 10,
        SetRedraw        = 11,
        SetText          = 12,
        GetText          = 13,
        GetTextLength    = 14,
        Paint            = 15,
        Close            = 16,
        QueryEndSession  = 17,
        Quit             = 18,
        QueryOpen        = 19,
        EraseBackground  = 20,
        SysColorChange   = 21,
        EndSession       = 22,
        ShowWindow       = 24,

    };

    #if UNICODE
    using OnCreateArgs  = CREATESTRUCTW;
    #else
    using OnCreateArgs  = CREATESTRUCTA;
    #endif
}