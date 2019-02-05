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

            var lineStart = new Point(thisRect.X, thisRect.Y);
            var lineEnd = new Point(thisRect.X + this.Width - 1, thisRect.Y);

            g.DrawLine(topLinePen, lineStart, lineEnd);

            lineEnd.X = thisRect.X;
            lineEnd.Y = thisRect.Y + this.Height - 1;
            g.DrawLine(topLinePen, lineStart, lineEnd);

            lineStart.X = thisRect.X + 1;
            lineStart.Y = thisRect.Y + 1;
            lineEnd.X = thisRect.X + this.Width - 2;
            lineEnd.Y = lineStart.Y;
            g.DrawLine(topLinePen2, lineStart, lineEnd);

            lineEnd.X = lineStart.X;
            lineEnd.Y = thisRect.Y + this.Height - 2;
            g.DrawLine(topLinePen2, lineStart, lineEnd);

            lineStart.X = thisRect.X + this.Width - 2;
            lineStart.Y = thisRect.Y + 1;
            lineEnd.X = lineStart.X;
            g.DrawLine(bottomLinePen, lineStart, lineEnd);

            lineStart = lineEnd;
            lineEnd.X = thisRect.X + 1;
            lineEnd.Y = thisRect.Y + this.Height - 2;
            g.DrawLine(bottomLinePen, lineStart, lineEnd);

            lineStart.X = thisRect.X + this.Width - 1;
            lineStart.Y = thisRect.Y - 1;
            lineEnd.X = lineStart.X;
            lineEnd.Y = lineStart.Y + this.Height;
            g.DrawLine(bottomLinePen2, lineStart, lineEnd);

            lineStart = lineEnd;
            lineEnd.X = thisRect.X;
            g.DrawLine(bottomLinePen2, lineStart, lineEnd);
        }

        protected override void OnBackColorChanged(EventArgs e)
        {
            base.OnBackColorChanged(e);

            topLinePen2.Color = this.BackColor;
        }
    }
}
