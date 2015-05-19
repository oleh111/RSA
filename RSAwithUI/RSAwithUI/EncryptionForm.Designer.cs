namespace RSAwithUI
{
    partial class EncryptionForm
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
            this.encryptionGroupBox = new System.Windows.Forms.GroupBox();
            this.label6 = new System.Windows.Forms.Label();
            this.OpentextBox = new System.Windows.Forms.TextBox();
            this.Encryptbutton = new System.Windows.Forms.Button();
            this.label7 = new System.Windows.Forms.Label();
            this.CryptotextBox = new System.Windows.Forms.TextBox();
            this.decryptionGroupBox = new System.Windows.Forms.GroupBox();
            this.label11 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.inputCryptoTexttextBox = new System.Windows.Forms.TextBox();
            this.Decryptbutton = new System.Windows.Forms.Button();
            this.ResulttextBox = new System.Windows.Forms.TextBox();
            this.encryptionGroupBox.SuspendLayout();
            this.decryptionGroupBox.SuspendLayout();
            this.SuspendLayout();
            // 
            // encryptionGroupBox
            // 
            this.encryptionGroupBox.Controls.Add(this.label6);
            this.encryptionGroupBox.Controls.Add(this.OpentextBox);
            this.encryptionGroupBox.Controls.Add(this.Encryptbutton);
            this.encryptionGroupBox.Controls.Add(this.label7);
            this.encryptionGroupBox.Controls.Add(this.CryptotextBox);
            this.encryptionGroupBox.Location = new System.Drawing.Point(12, 12);
            this.encryptionGroupBox.Name = "encryptionGroupBox";
            this.encryptionGroupBox.Size = new System.Drawing.Size(397, 182);
            this.encryptionGroupBox.TabIndex = 24;
            this.encryptionGroupBox.TabStop = false;
            this.encryptionGroupBox.Text = "Шифрування";
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
            // 
            // Encryptbutton
            // 
            this.Encryptbutton.Location = new System.Drawing.Point(6, 147);
            this.Encryptbutton.Name = "Encryptbutton";
            this.Encryptbutton.Size = new System.Drawing.Size(382, 23);
            this.Encryptbutton.TabIndex = 11;
            this.Encryptbutton.Text = "Зашифрувати";
            this.Encryptbutton.Click += new System.EventHandler(this.Encryptbutton_Click);
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
            this.CryptotextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.CryptotextBox_KeyPress);
            // 
            // decryptionGroupBox
            // 
            this.decryptionGroupBox.Controls.Add(this.label11);
            this.decryptionGroupBox.Controls.Add(this.label8);
            this.decryptionGroupBox.Controls.Add(this.inputCryptoTexttextBox);
            this.decryptionGroupBox.Controls.Add(this.Decryptbutton);
            this.decryptionGroupBox.Controls.Add(this.ResulttextBox);
            this.decryptionGroupBox.Location = new System.Drawing.Point(415, 12);
            this.decryptionGroupBox.Name = "decryptionGroupBox";
            this.decryptionGroupBox.Size = new System.Drawing.Size(397, 182);
            this.decryptionGroupBox.TabIndex = 25;
            this.decryptionGroupBox.TabStop = false;
            this.decryptionGroupBox.Text = "Розшифрування";
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
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(6, 78);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(121, 13);
            this.label8.TabIndex = 16;
            this.label8.Text = "Розшифрований текст";
            // 
            // inputCryptoTexttextBox
            // 
            this.inputCryptoTexttextBox.Location = new System.Drawing.Point(6, 32);
            this.inputCryptoTexttextBox.Multiline = true;
            this.inputCryptoTexttextBox.Name = "inputCryptoTexttextBox";
            this.inputCryptoTexttextBox.Size = new System.Drawing.Size(382, 43);
            this.inputCryptoTexttextBox.TabIndex = 12;
            this.inputCryptoTexttextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.CryptotextBox_KeyPress);
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
            // 
            // EncryptionForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(824, 202);
            this.Controls.Add(this.decryptionGroupBox);
            this.Controls.Add(this.encryptionGroupBox);
            this.Name = "EncryptionForm";
            this.Text = "EncryptionForm";
            this.encryptionGroupBox.ResumeLayout(false);
            this.encryptionGroupBox.PerformLayout();
            this.decryptionGroupBox.ResumeLayout(false);
            this.decryptionGroupBox.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox encryptionGroupBox;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox OpentextBox;
        private System.Windows.Forms.Button Encryptbutton;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.TextBox CryptotextBox;
        private System.Windows.Forms.GroupBox decryptionGroupBox;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox inputCryptoTexttextBox;
        private System.Windows.Forms.Button Decryptbutton;
        private System.Windows.Forms.TextBox ResulttextBox;

    }
}