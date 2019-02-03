using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using Microsoft.Win32.SafeHandles;

namespace W98Shell.WinAPI
{
    internal static class User32
    {
        public delegate bool EnumWindowProc(IntPtr handle, IntPtr Params);

        [DllImport("user32.dll", SetLastError = true)]
        public static extern bool EnumWindows(EnumWindowProc enumProc, IntPtr Params);

        public delegate bool LowLevelHookProc(int MSG, IntPtr wParam, IntPtr lParam);

        [DllImport("user32.dll", SetLastError = true)]
        public static extern IntPtr SetWindowsHook(int Hook, IntPtr hookProc);



    }
}
