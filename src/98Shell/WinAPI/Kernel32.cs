using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace W98Shell.WinAPI
{
    internal static class Kernel32
    {
        public static int GetLastError()
        {
            return Marshal.GetLastWin32Error();
        }
    }
}
