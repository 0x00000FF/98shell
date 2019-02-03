using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace W98Shell
{
    public partial class Taskbar : Form
    {
        private static bool firstRun = false;

        public Taskbar()
        {
            InitializeComponent();

            if ( WinAPI.User32.SetWindowsHook(0, IntPtr.Zero) == IntPtr.Zero )
            {

            }
        }

        private void TestSize(object sender, EventArgs e)
        {
            ((Label)sender).Text = this.Size.ToString();
        }
    }
}
