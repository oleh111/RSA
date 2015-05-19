using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace RSAwithUI
{
    public partial class SignatureForm : Form
    {
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void RSASignature(int hash);

        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern int RSASignatureVerification(int hash);

        public SignatureForm()
        {
            InitializeComponent();
        }

        private void Encryptbutton_Click(object sender, EventArgs e)
        {
            System.IO.File.WriteAllText(@"opentext.txt", OpentextBox.Text);
            if(comboBox1.SelectedItem == "md5")
            {
                RSASignature(0);
            }
            if (comboBox1.SelectedItem == "sha1")
            {
                RSASignature(1);
            }
            textBox1.Text = System.IO.File.ReadAllText(@"signature.txt");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int res;
            System.IO.File.WriteAllText(@"opentext.txt", textBox3.Text);
            System.IO.File.WriteAllText(@"signature.txt", textBox2.Text);
            if (comboBox2.SelectedItem == "md5")
            {
                res = RSASignatureVerification(0);
            }
            else
            {
                res = RSASignatureVerification(1);
            }
            if(res == 1)
            {
                label7.Text = "Текст вірний";
                label7.ForeColor = Color.Green;
                label7.Font = new Font(label7.Font, FontStyle.Bold);
                label7.Visible = true;
            }
            else
            {
                label7.Text = "Текст змінено";
                label7.ForeColor = Color.Red;
                label7.Font = new Font(label7.Font, FontStyle.Bold);
                label7.Visible = true;
            }
        }

        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !char.IsDigit(e.KeyChar) && !char.IsControl(e.KeyChar);
        }
    }
}
