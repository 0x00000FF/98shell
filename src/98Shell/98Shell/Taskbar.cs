using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _98Shell
{
    public partial class Taskbar : Form
    {
        public Taskbar()
        {
            InitializeComponent();
        }

        private void TestSize(object sender, EventArgs e)
        {
            ((Label)sender).Text = this.Size.ToString();
        }
    }
}
