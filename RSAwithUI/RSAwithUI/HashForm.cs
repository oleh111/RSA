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
    public partial class HashForm : Form
    {
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void MD5Hash();

        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void SHA1Hash();

        public HashForm()
        {
            InitializeComponent();
        }

        private void Encryptbutton_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedItem == "md5")
            {
                System.IO.File.WriteAllText(@"tohash.txt", OpentextBox.Text);
                MD5Hash();
                textBox1.Text = System.IO.File.ReadAllText(@"md5.txt");
            }
            if (comboBox1.SelectedItem == "sha1")
            {
                System.IO.File.WriteAllText(@"tohash.txt", OpentextBox.Text);
                SHA1Hash();
                textBox1.Text = System.IO.File.ReadAllText(@"sha1.txt");
            }
        }
    }
}
