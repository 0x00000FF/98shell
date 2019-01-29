#pragma once

#include <Windows/Windows.hpp>

namespace Windows
{
    #undef GetMessage                                  // Fucking WinAPI
                                                       
    enum class WindowHook : u32                        
    {                                                  
        Keyboard        = WH_KEYBOARD,                           
        GetMessage      = WH_GETMESSAGE,                           
        CallWndProc     = WH_CALLWNDPROC,                           
        Cbt             = WH_CBT,                           
        SysMsgFilter    = WH_SYSMSGFILTER,                           
        Mouse           = WH_MOUSE,
        Debug           = WH_DEBUG,
        Shell           = WH_SHELL,
        ForegroundIdle  = WH_FOREGROUNDIDLE,
        CallWndProcRet  = WH_CALLWNDPROCRET,
        LowKeyboard     = WH_KEYBOARD_LL,
        LowMouse        = WH_MOUSE_LL
    };

    #if UNICODE
    #define GetMessage GetMessageW
    #else
    #define GetMessage GetMessageA
    #endif
}