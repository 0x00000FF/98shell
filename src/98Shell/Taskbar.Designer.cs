namespace W98Shell
{
    partial class Taskbar
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.StartButton = new System.Windows.Forms.Button();
            this.panel1 = new System.Windows.Forms.Panel();
            this.retroButton1 = new W98Shell.RetroControls.RetroButton();
            this.retroButton2 = new W98Shell.RetroControls.RetroButton();
            this.retroButton3 = new W98Shell.RetroControls.RetroButton();
            this.SuspendLayout();
            // 
            // StartButton
            // 
            this.StartButton.Font = new System.Drawing.Font("Arial", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.StartButton.Location = new System.Drawing.Point(2, 3);
            this.StartButton.Name = "StartButton";
            this.StartButton.Size = new System.Drawing.Size(53, 22);
            this.StartButton.TabIndex = 0;
            this.StartButton.Text = "Start";
            this.StartButton.UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this.panel1.Location = new System.Drawing.Point(62, 3);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(200, 100);
            this.panel1.TabIndex = 1;
            // 
            // retroButton1
            // 
            this.retroButton1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.retroButton1.Location = new System.Drawing.Point(62, 210);
            this.retroButton1.Name = "retroButton1";
            this.retroButton1.Size = new System.Drawing.Size(100, 22);
            this.retroButton1.TabIndex = 2;
            this.retroButton1.TextFont = new System.Drawing.Font("Arial", 8.25F);
            // 
            // retroButton2
            // 
            this.retroButton2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.retroButton2.Location = new System.Drawing.Point(162, 210);
            this.retroButton2.Name = "retroButton2";
            this.retroButton2.Size = new System.Drawing.Size(100, 22);
            this.retroButton2.TabIndex = 2;
            this.retroButton2.TextFont = new System.Drawing.Font("Arial", 8.25F);
            // 
            // retroButton3
            // 
            this.retroButton3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.retroButton3.Location = new System.Drawing.Point(262, 210);
            this.retroButton3.Name = "retroButton3";
            this.retroButton3.Size = new System.Drawing.Size(100, 22);
            this.retroButton3.TabIndex = 2;
            this.retroButton3.TextFont = new System.Drawing.Font("Arial", 8.25F);
            // 
            // Taskbar
            // 
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.None;
            this.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ClientSize = new System.Drawing.Size(800, 235);
            this.ControlBox = false;
            this.Controls.Add(this.retroButton3);
            this.Controls.Add(this.retroButton2);
            this.Controls.Add(this.retroButton1);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.StartButton);
            this.DoubleBuffered = true;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Taskbar";
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.Manual;
            this.Text = "98Shell Taskbar";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button StartButton;
        private System.Windows.Forms.Panel panel1;
        private RetroControls.RetroButton retroButton1;
        private RetroControls.RetroButton retroButton2;
        private RetroControls.RetroButton retroButton3;
    }
}

