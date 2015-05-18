namespace RSAwithUI
{
    partial class Form1
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
            this.label6 = new System.Windows.Forms.Label();
            this.OpentextBox = new System.Windows.Forms.TextBox();
            this.Encryptbutton = new System.Windows.Forms.Button();
            this.label7 = new System.Windows.Forms.Label();
            this.CryptotextBox = new System.Windows.Forms.TextBox();
            this.Decryptbutton = new System.Windows.Forms.Button();
            this.ResulttextBox = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
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
            this.encryptionGroupBox = new System.Windows.Forms.GroupBox();
            this.decryptionGroupBox = new System.Windows.Forms.GroupBox();
            this.label11 = new System.Windows.Forms.Label();
            this.inputCryptoTexttextBox = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.RSASignatureResulttextBox = new System.Windows.Forms.TextBox();
            this.RSASignatureVerificationbutton = new System.Windows.Forms.Button();
            this.label14 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.opentextRSAtextBox = new System.Windows.Forms.TextBox();
            this.RSASignaturebutton = new System.Windows.Forms.Button();
            this.label = new System.Windows.Forms.Label();
            this.RSASignaturetextBox = new System.Windows.Forms.TextBox();
            this.keyGenerationgroupBox.SuspendLayout();
            this.privateKeyGroupBox.SuspendLayout();
            this.publicKeyGroupBox.SuspendLayout();
            this.encryptionGroupBox.SuspendLayout();
            this.decryptionGroupBox.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // GenKeysbutton
            // 
            this.GenKeysbutton.Location = new System.Drawing.Point(6, 197);
            this.GenKeysbutton.Name = "GenKeysbutton";
            this.GenKeysbutton.Size = new System.Drawing.Size(347, 23);
            this.GenKeysbutton.TabIndex = 0;
            this.GenKeysbutton.Text = "Генерувати ключі";
            this.GenKeysbutton.UseVisualStyleBackColor = true;
            this.GenKeysbutton.Click += new System.EventHandler(this.button1_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(6, 16);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(88, 13);
            this.label6.TabIndex = 10;
            this.label6.Text = "Відкритий текст";
            // 
            // OpentextBox
            // 
            this.OpentextBox.Location = new System.Drawing.Point(6, 32);
            this.OpentextBox.Multiline = true;
            this.OpentextBox.Name = "OpentextBox";
            this.OpentextBox.Size = new System.Drawing.Size(382, 43);
            this.OpentextBox.TabIndex = 9;
            this.OpentextBox.Text = "RSA cryptosystem";
            //// 
            //// Encryptbutton
            //// 
            //this.Encryptbutton.Location = new System.Drawing.Point(6, 141);
            //this.Encryptbutton.Name = "Encryptbutton";
            //this.Encryptbutton.Size = new System.Drawing.Size(382, 23);
            //this.Encryptbutton.TabIndex = 11;
            //this.Encryptbutton.Text = "Зашифрувати";
            //this.Encryptbutton.UseVisualStyleBackColor = true;
            //this.Encryptbutton.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(6, 78);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(71, 13);
            this.label7.TabIndex = 13;
            this.label7.Text = "Криптотекст";
            // 
            // CryptotextBox
            // 
            this.CryptotextBox.Location = new System.Drawing.Point(6, 94);
            this.CryptotextBox.Multiline = true;
            this.CryptotextBox.Name = "CryptotextBox";
            this.CryptotextBox.Size = new System.Drawing.Size(382, 43);
            this.CryptotextBox.TabIndex = 12;
            this.CryptotextBox.Text = "8681359594679695914090651159084399489881935115451638754554535463861315537718";
            // 
            // Decryptbutton
            // 
            this.Decryptbutton.Location = new System.Drawing.Point(6, 143);
            this.Decryptbutton.Name = "Decryptbutton";
            this.Decryptbutton.Size = new System.Drawing.Size(382, 23);
            this.Decryptbutton.TabIndex = 14;
            this.Decryptbutton.Text = "Дешифрувати";
            this.Decryptbutton.UseVisualStyleBackColor = true;
            this.Decryptbutton.Click += new System.EventHandler(this.Decryptbutton_Click);
            // 
            // ResulttextBox
            // 
            this.ResulttextBox.Location = new System.Drawing.Point(6, 94);
            this.ResulttextBox.Multiline = true;
            this.ResulttextBox.Name = "ResulttextBox";
            this.ResulttextBox.Size = new System.Drawing.Size(382, 43);
            this.ResulttextBox.TabIndex = 15;
            this.ResulttextBox.Text = "RSA cryptosystem";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(6, 78);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(121, 13);
            this.label8.TabIndex = 16;
            this.label8.Text = "Розшифрований текст";
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
            this.DtextBox.TabIndex = 7;
            this.DtextBox.TextChanged += new System.EventHandler(this.DtextBox_TextChanged);
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
            // encryptionGroupBox
            // 
            this.encryptionGroupBox.Controls.Add(this.label6);
            this.encryptionGroupBox.Controls.Add(this.OpentextBox);
            this.encryptionGroupBox.Controls.Add(this.Encryptbutton);
            this.encryptionGroupBox.Controls.Add(this.label7);
            this.encryptionGroupBox.Controls.Add(this.CryptotextBox);
            this.encryptionGroupBox.Location = new System.Drawing.Point(382, 12);
            this.encryptionGroupBox.Name = "encryptionGroupBox";
            this.encryptionGroupBox.Size = new System.Drawing.Size(397, 182);
            this.encryptionGroupBox.TabIndex = 22;
            this.encryptionGroupBox.TabStop = false;
            this.encryptionGroupBox.Text = "Шифрування";
            // 
            // decryptionGroupBox
            // 
            this.decryptionGroupBox.Controls.Add(this.label11);
            this.decryptionGroupBox.Controls.Add(this.label8);
            this.decryptionGroupBox.Controls.Add(this.inputCryptoTexttextBox);
            this.decryptionGroupBox.Controls.Add(this.Decryptbutton);
            this.decryptionGroupBox.Controls.Add(this.ResulttextBox);
            this.decryptionGroupBox.Location = new System.Drawing.Point(785, 16);
            this.decryptionGroupBox.Name = "decryptionGroupBox";
            this.decryptionGroupBox.Size = new System.Drawing.Size(397, 182);
            this.decryptionGroupBox.TabIndex = 23;
            this.decryptionGroupBox.TabStop = false;
            this.decryptionGroupBox.Text = "Шифрування";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(6, 16);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(71, 13);
            this.label11.TabIndex = 13;
            this.label11.Text = "Криптотекст";
            // 
            // inputCryptoTexttextBox
            // 
            this.inputCryptoTexttextBox.Location = new System.Drawing.Point(6, 32);
            this.inputCryptoTexttextBox.Multiline = true;
            this.inputCryptoTexttextBox.Name = "inputCryptoTexttextBox";
            this.inputCryptoTexttextBox.Size = new System.Drawing.Size(382, 43);
            this.inputCryptoTexttextBox.TabIndex = 12;
            this.inputCryptoTexttextBox.Text = "8681359594679695914090651159084399489881935115451638754554535463861315537718";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.RSASignatureResulttextBox);
            this.groupBox1.Controls.Add(this.RSASignatureVerificationbutton);
            this.groupBox1.Controls.Add(this.label14);
            this.groupBox1.Controls.Add(this.label10);
            this.groupBox1.Controls.Add(this.opentextRSAtextBox);
            this.groupBox1.Controls.Add(this.RSASignaturebutton);
            this.groupBox1.Controls.Add(this.label);
            this.groupBox1.Controls.Add(this.RSASignaturetextBox);
            this.groupBox1.Location = new System.Drawing.Point(382, 200);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(397, 254);
            this.groupBox1.TabIndex = 24;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Цифровий підпис RSA";
            this.groupBox1.Enter += new System.EventHandler(this.groupBox1_Enter);
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
            this.RSASignatureVerificationbutton.Location = new System.Drawing.Point(6, 222);
            this.RSASignatureVerificationbutton.Name = "RSASignatureVerificationbutton";
            this.RSASignatureVerificationbutton.Size = new System.Drawing.Size(382, 23);
            this.RSASignatureVerificationbutton.TabIndex = 15;
            this.RSASignatureVerificationbutton.Text = "Перевірити";
            this.RSASignatureVerificationbutton.UseVisualStyleBackColor = true;
            this.RSASignatureVerificationbutton.Click += new System.EventHandler(this.RSASignatureVerificationbutton_Click);
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
            this.RSASignaturebutton.Location = new System.Drawing.Point(6, 154);
            this.RSASignaturebutton.Name = "RSASignaturebutton";
            this.RSASignaturebutton.Size = new System.Drawing.Size(382, 23);
            this.RSASignaturebutton.TabIndex = 11;
            this.RSASignaturebutton.Text = "Генерувати підпис";
            this.RSASignaturebutton.UseVisualStyleBackColor = true;
            this.RSASignaturebutton.Click += new System.EventHandler(this.RSASignaturebutton_Click);
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
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1191, 460);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.decryptionGroupBox);
            this.Controls.Add(this.encryptionGroupBox);
            this.Controls.Add(this.keyGenerationgroupBox);
            this.Name = "Form1";
            this.Text = "RSA";
            this.keyGenerationgroupBox.ResumeLayout(false);
            this.keyGenerationgroupBox.PerformLayout();
            this.privateKeyGroupBox.ResumeLayout(false);
            this.privateKeyGroupBox.PerformLayout();
            this.publicKeyGroupBox.ResumeLayout(false);
            this.publicKeyGroupBox.PerformLayout();
            this.encryptionGroupBox.ResumeLayout(false);
            this.encryptionGroupBox.PerformLayout();
            this.decryptionGroupBox.ResumeLayout(false);
            this.decryptionGroupBox.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button GenKeysbutton;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox OpentextBox;
        private System.Windows.Forms.Button Encryptbutton;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox CryptotextBox;
        private System.Windows.Forms.Button Decryptbutton;
        private System.Windows.Forms.TextBox ResulttextBox;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.ComboBox BitCountcomboBox;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.GroupBox keyGenerationgroupBox;
        private System.Windows.Forms.GroupBox encryptionGroupBox;
        private System.Windows.Forms.GroupBox decryptionGroupBox;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.TextBox inputCryptoTexttextBox;
        private System.Windows.Forms.GroupBox groupBox1;
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
    }
}

