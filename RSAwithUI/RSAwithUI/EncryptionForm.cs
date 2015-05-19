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
    public partial class EncryptionForm : Form
    {
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void Encrypt();
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void Decrypt();

        public EncryptionForm()
        {
            InitializeComponent();
        }

        private void Encryptbutton_Click(object sender, EventArgs e)
        {
            if (OpentextBox.Text == string.Empty)
            {
                MessageBox.Show("Введіть відкритий текст!!!");
            }
            else
            {
                System.IO.File.WriteAllText(@"opentext.txt", OpentextBox.Text);
                Encrypt();
                CryptotextBox.Text = System.IO.File.ReadAllText(@"encrypt.txt");
            }
        }

        private void Decryptbutton_Click(object sender, EventArgs e)
        {
            if (inputCryptoTexttextBox.Text == string.Empty)
            {
                MessageBox.Show("Введіть криптотекст!!!");
            }
            else
            {
                System.IO.File.WriteAllText(@"cryptotext.txt", inputCryptoTexttextBox.Text);
                Decrypt();
                ResulttextBox.Text = System.IO.File.ReadAllText(@"decrypt.txt");
            }
        }

        private void CryptotextBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !char.IsDigit(e.KeyChar) && !char.IsControl(e.KeyChar);
        }
    }
}
