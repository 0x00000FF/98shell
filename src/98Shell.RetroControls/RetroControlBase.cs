using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace W98Shell.RetroControls
{
    [ToolboxItem(true)]
    [Description("RetroControl Base"), Category("98Shell.RetroControl")]
    public class RetroControlBase : UserControl
    {
        protected static Pen topLinePen = new Pen(Color.White);
        protected static Pen topLinePen2 = new Pen(Color.FromArgb(192, 192, 192));
        protected static Pen bottomLinePen = new Pen(Color.FromArgb(128, 128, 128));
        protected static Pen bottomLinePen2 = new Pen(Color.Black);

        public RetroControlBase()
        {
            this.BackColor = Color.FromArgb(192, 192, 192);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);

            var g = this.CreateGraphics();
            var thisRect = this.DisplayRectangle;

            var LineStart = new Point(thisRect.X, thisRect.Y);
            var LineEnd = new Point(thisRect.X + this.Width - 1, thisRect.Y);

            g.DrawLine(topLinePen, LineStart, LineEnd);

            LineEnd.X = thisRect.X;
            LineEnd.Y = thisRect.Y + this.Height - 1;
            g.DrawLine(topLinePen, LineStart, LineEnd);

            LineStart.X = thisRect.X + 1;
            LineStart.Y = thisRect.Y + 1;
            LineEnd.X = thisRect.X + this.Width - 2;
            LineEnd.Y = LineStart.Y;
            g.DrawLine(topLinePen2, LineStart, LineEnd);

            LineEnd.X = LineStart.X;
            LineEnd.Y = thisRect.Y + this.Height - 2;
            g.DrawLine(topLinePen2, LineStart, LineEnd);

            LineStart.X = thisRect.X + this.Width - 2;
            LineStart.Y = thisRect.Y + 1;
            LineEnd.X = LineStart.X;
            g.DrawLine(bottomLinePen, LineStart, LineEnd);

            LineStart = LineEnd;
            LineEnd.X = thisRect.X + 1;
            LineEnd.Y = thisRect.Y + this.Height - 2;
            g.DrawLine(bottomLinePen, LineStart, LineEnd);

            LineStart.X = thisRect.X + this.Width - 1;
            LineStart.Y = thisRect.Y - 1;
            LineEnd.X = LineStart.X;
            LineEnd.Y = LineStart.Y + this.Height;
            g.DrawLine(bottomLinePen2, LineStart, LineEnd);

            LineStart = LineEnd;
            LineEnd.X = thisRect.X;
            g.DrawLine(bottomLinePen2, LineStart, LineEnd);
        }

        protected override void OnBackColorChanged(EventArgs e)
        {
            base.OnBackColorChanged(e);

            topLinePen2.Color = this.BackColor;
        }
    }
}
