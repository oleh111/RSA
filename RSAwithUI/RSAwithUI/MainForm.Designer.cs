namespace RSAwithUI
{
    partial class MainForm
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
            this.GenKeysbutton = new System.Windows.Forms.Button();
            this.BitCountcomboBox = new System.Windows.Forms.ComboBox();
            this.label9 = new System.Windows.Forms.Label();
            this.keyGenerationgroupBox = new System.Windows.Forms.GroupBox();
            this.privateKeyGroupBox = new System.Windows.Forms.GroupBox();
            this.DtextBox = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.publicKeyGroupBox = new System.Windows.Forms.GroupBox();
            this.NtextBox = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.EtextBox = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.RSASignatureResulttextBox = new System.Windows.Forms.TextBox();
            this.RSASignatureVerificationbutton = new System.Windows.Forms.Button();
            this.label14 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.opentextRSAtextBox = new System.Windows.Forms.TextBox();
            this.RSASignaturebutton = new System.Windows.Forms.Button();
            this.label = new System.Windows.Forms.Label();
            this.RSASignaturetextBox = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.button3 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.keyGenerationgroupBox.SuspendLayout();
            this.privateKeyGroupBox.SuspendLayout();
            this.publicKeyGroupBox.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // GenKeysbutton
            // 
            this.GenKeysbutton.Location = new System.Drawing.Point(6, 197);
            this.GenKeysbutton.Name = "GenKeysbutton";
            this.GenKeysbutton.Size = new System.Drawing.Size(347, 23);
            this.GenKeysbutton.TabIndex = 0;
            this.GenKeysbutton.Text = "Згенерувати ключі";
            this.GenKeysbutton.UseVisualStyleBackColor = true;
            this.GenKeysbutton.Click += new System.EventHandler(this.button1_Click);
            // 
            // BitCountcomboBox
            // 
            this.BitCountcomboBox.FormattingEnabled = true;
            this.BitCountcomboBox.Items.AddRange(new object[] {
            "32",
            "64",
            "128",
            "256"});
            this.BitCountcomboBox.Location = new System.Drawing.Point(6, 170);
            this.BitCountcomboBox.Name = "BitCountcomboBox";
            this.BitCountcomboBox.Size = new System.Drawing.Size(105, 21);
            this.BitCountcomboBox.TabIndex = 17;
            this.BitCountcomboBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.NtextBox_KeyPress);
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(117, 173);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(20, 13);
            this.label9.TabIndex = 18;
            this.label9.Text = "біт";
            // 
            // keyGenerationgroupBox
            // 
            this.keyGenerationgroupBox.Controls.Add(this.privateKeyGroupBox);
            this.keyGenerationgroupBox.Controls.Add(this.publicKeyGroupBox);
            this.keyGenerationgroupBox.Controls.Add(this.GenKeysbutton);
            this.keyGenerationgroupBox.Controls.Add(this.BitCountcomboBox);
            this.keyGenerationgroupBox.Controls.Add(this.label9);
            this.keyGenerationgroupBox.Location = new System.Drawing.Point(12, 12);
            this.keyGenerationgroupBox.Name = "keyGenerationgroupBox";
            this.keyGenerationgroupBox.Size = new System.Drawing.Size(364, 245);
            this.keyGenerationgroupBox.TabIndex = 21;
            this.keyGenerationgroupBox.TabStop = false;
            this.keyGenerationgroupBox.Text = "Генерування ключів";
            // 
            // privateKeyGroupBox
            // 
            this.privateKeyGroupBox.Controls.Add(this.DtextBox);
            this.privateKeyGroupBox.Controls.Add(this.label5);
            this.privateKeyGroupBox.Location = new System.Drawing.Point(6, 108);
            this.privateKeyGroupBox.Name = "privateKeyGroupBox";
            this.privateKeyGroupBox.Size = new System.Drawing.Size(347, 56);
            this.privateKeyGroupBox.TabIndex = 22;
            this.privateKeyGroupBox.TabStop = false;
            this.privateKeyGroupBox.Text = "Закритий ключ";
            // 
            // DtextBox
            // 
            this.DtextBox.Location = new System.Drawing.Point(45, 19);
            this.DtextBox.Name = "DtextBox";
            this.DtextBox.Size = new System.Drawing.Size(293, 20);
            this.DtextBox.TabIndex = 0;
            this.DtextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.NtextBox_KeyPress);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(15, 22);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(15, 13);
            this.label5.TabIndex = 8;
            this.label5.Text = "D";
            // 
            // publicKeyGroupBox
            // 
            this.publicKeyGroupBox.Controls.Add(this.NtextBox);
            this.publicKeyGroupBox.Controls.Add(this.label3);
            this.publicKeyGroupBox.Controls.Add(this.EtextBox);
            this.publicKeyGroupBox.Controls.Add(this.label4);
            this.publicKeyGroupBox.Location = new System.Drawing.Point(6, 19);
            this.publicKeyGroupBox.Name = "publicKeyGroupBox";
            this.publicKeyGroupBox.Size = new System.Drawing.Size(347, 83);
            this.publicKeyGroupBox.TabIndex = 21;
            this.publicKeyGroupBox.TabStop = false;
            this.publicKeyGroupBox.Text = "Відкритий ключ";
            // 
            // NtextBox
            // 
            this.NtextBox.Location = new System.Drawing.Point(45, 23);
            this.NtextBox.Name = "NtextBox";
            this.NtextBox.Size = new System.Drawing.Size(293, 20);
            this.NtextBox.TabIndex = 2;
            this.NtextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.NtextBox_KeyPress);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(15, 26);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(15, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "N";
            // 
            // EtextBox
            // 
            this.EtextBox.Location = new System.Drawing.Point(45, 49);
            this.EtextBox.Name = "EtextBox";
            this.EtextBox.Size = new System.Drawing.Size(293, 20);
            this.EtextBox.TabIndex = 5;
            this.EtextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.NtextBox_KeyPress);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(15, 52);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(14, 13);
            this.label4.TabIndex = 6;
            this.label4.Text = "E";
            // 
            // RSASignatureResulttextBox
            // 
            this.RSASignatureResulttextBox.Location = new System.Drawing.Point(6, 196);
            this.RSASignatureResulttextBox.Name = "RSASignatureResulttextBox";
            this.RSASignatureResulttextBox.Size = new System.Drawing.Size(382, 20);
            this.RSASignatureResulttextBox.TabIndex = 16;
            // 
            // RSASignatureVerificationbutton
            // 
            this.RSASignatureVerificationbutton.Location = new System.Drawing.Point(0, 0);
            this.RSASignatureVerificationbutton.Name = "RSASignatureVerificationbutton";
            this.RSASignatureVerificationbutton.Size = new System.Drawing.Size(75, 23);
            this.RSASignatureVerificationbutton.TabIndex = 0;
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(6, 180);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(59, 13);
            this.label14.TabIndex = 14;
            this.label14.Text = "Перевірка";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(6, 16);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(88, 13);
            this.label10.TabIndex = 10;
            this.label10.Text = "Відкритий текст";
            // 
            // opentextRSAtextBox
            // 
            this.opentextRSAtextBox.Location = new System.Drawing.Point(6, 32);
            this.opentextRSAtextBox.Multiline = true;
            this.opentextRSAtextBox.Name = "opentextRSAtextBox";
            this.opentextRSAtextBox.Size = new System.Drawing.Size(382, 43);
            this.opentextRSAtextBox.TabIndex = 9;
            this.opentextRSAtextBox.Text = "RSA signature";
            // 
            // RSASignaturebutton
            // 
            this.RSASignaturebutton.Location = new System.Drawing.Point(0, 0);
            this.RSASignaturebutton.Name = "RSASignaturebutton";
            this.RSASignaturebutton.Size = new System.Drawing.Size(75, 23);
            this.RSASignaturebutton.TabIndex = 0;
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Location = new System.Drawing.Point(6, 78);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(41, 13);
            this.label.TabIndex = 13;
            this.label.Text = "Підпис";
            // 
            // RSASignaturetextBox
            // 
            this.RSASignaturetextBox.Location = new System.Drawing.Point(6, 94);
            this.RSASignaturetextBox.Multiline = true;
            this.RSASignaturetextBox.Name = "RSASignaturetextBox";
            this.RSASignaturetextBox.Size = new System.Drawing.Size(382, 43);
            this.RSASignaturetextBox.TabIndex = 12;
            this.RSASignaturetextBox.Text = "26726404556494830362818946405187059999104070842752086132387540522183647771911";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.button3);
            this.groupBox1.Controls.Add(this.button2);
            this.groupBox1.Controls.Add(this.button1);
            this.groupBox1.Location = new System.Drawing.Point(383, 13);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(195, 243);
            this.groupBox1.TabIndex = 22;
            this.groupBox1.TabStop = false;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(7, 76);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(179, 23);
            this.button3.TabIndex = 2;
            this.button3.Text = "Цифровий підпис";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(7, 47);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(179, 23);
            this.button2.TabIndex = 1;
            this.button2.Text = "Хешування";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(7, 18);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(179, 23);
            this.button1.TabIndex = 0;
            this.button1.Text = "Шифрування";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click_2);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(592, 268);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.keyGenerationgroupBox);
            this.Name = "MainForm";
            this.Text = "RSA";
            this.keyGenerationgroupBox.ResumeLayout(false);
            this.keyGenerationgroupBox.PerformLayout();
            this.privateKeyGroupBox.ResumeLayout(false);
            this.privateKeyGroupBox.PerformLayout();
            this.publicKeyGroupBox.ResumeLayout(false);
            this.publicKeyGroupBox.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button GenKeysbutton;
        private System.Windows.Forms.ComboBox BitCountcomboBox;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.GroupBox keyGenerationgroupBox;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.TextBox opentextRSAtextBox;
        private System.Windows.Forms.Button RSASignaturebutton;
        private System.Windows.Forms.Label label;
        private System.Windows.Forms.TextBox RSASignaturetextBox;
        private System.Windows.Forms.GroupBox privateKeyGroupBox;
        private System.Windows.Forms.TextBox DtextBox;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.GroupBox publicKeyGroupBox;
        private System.Windows.Forms.TextBox NtextBox;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox EtextBox;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox RSASignatureResulttextBox;
        private System.Windows.Forms.Button RSASignatureVerificationbutton;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button1;
    }
}

