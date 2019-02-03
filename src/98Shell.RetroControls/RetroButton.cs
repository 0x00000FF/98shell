using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Resources;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace W98Shell.RetroControls
{
    [ToolboxItem(true)]
    [Description("Retro Command Button"), Category("98Shell.RetroControl")]
    public class RetroButton : RetroControlBase
    {
        private static Brush stringBrush;

        private Font m_Font;
        public Font TextFont
        {
            get
            {
                return m_Font;
            }

            set
            {
                m_Font = value;
            }
        }

        public RetroButton()
        {
            m_Font = new Font("Arial", 8.25f);
        }

        private static void SwitchPen(ref Pen left, ref Pen right)
        {
            Pen _temp = left;
            left = right;
            right = _temp;
        }


        protected void TogglePressState(bool state)
        {
            SwitchPen(ref topLinePen, ref bottomLinePen2);
            SwitchPen(ref topLinePen2, ref bottomLinePen);

            var _color = this.BackColor;
            byte R, G, B;

            if (state)
            {
                R = (byte)(_color.R + 20);
                G = (byte)(_color.G + 20);
                B = (byte)(_color.B + 20);

                m_Font = new Font("Arial", 8.25f, FontStyle.Bold);
            }
            else
            {
                R = (byte)(_color.R - 20);
                G = (byte)(_color.G - 20);
                B = (byte)(_color.B - 20);

                m_Font = new Font("Arial", 8.25f);
            }

            this.BackColor = Color.FromArgb(R, G, B);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);

            if (stringBrush == null) stringBrush = new SolidBrush(Color.Black);

            var icon = Properties.Icons.windows;
            var g = e.Graphics;

            g.DrawIcon(icon, new Rectangle(3, 3, 16, 16));
            g.DrawString("Windows 98", m_Font, stringBrush, 21, 3);
        }

        protected override void OnMouseDown(MouseEventArgs e)
        {
            base.OnMouseDown(e);

            TogglePressState(true);
        }

        protected override void OnMouseUp(MouseEventArgs e)
        {
            base.OnMouseUp(e);

            TogglePressState(false);
        }

        protected override void OnResize(EventArgs e)
        {
            base.OnResize(e);

        }
    }
}
