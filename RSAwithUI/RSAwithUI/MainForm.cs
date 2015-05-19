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
using System.Security.Cryptography;

namespace RSAwithUI
{
    public partial class MainForm : Form
    {
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void GenKeys(int count);
        

        string[] keys;

        public MainForm()
        {
            InitializeComponent();
            keys = System.IO.File.ReadAllLines(@"keys.txt");

            NtextBox.Text = keys[0];
            EtextBox.Text = keys[1];
            DtextBox.Text = keys[2];
        }

        private void button1_Click(object sender, EventArgs e)
        {
            GenKeys(int.Parse(BitCountcomboBox.SelectedItem.ToString()));
            keys = System.IO.File.ReadAllLines(@"keys.txt");

            NtextBox.Text = keys[0];
            EtextBox.Text = keys[1];
            DtextBox.Text = keys[2];
        }

        private void button1_Click_2(object sender, EventArgs e)
        {
            keys[0] = NtextBox.Text;
            keys[1] = EtextBox.Text;
            keys[2] = DtextBox.Text;

            System.IO.File.WriteAllLines(@"keys.txt", keys);

            EncryptionForm ef = new EncryptionForm();
            ef.Visible = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            HashForm hf = new HashForm();
            hf.Visible = true;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            keys[0] = NtextBox.Text;
            keys[1] = EtextBox.Text;
            keys[2] = DtextBox.Text;

            System.IO.File.WriteAllLines(@"keys.txt", keys);

            SignatureForm sf = new SignatureForm();
            sf.Visible = true;
        }

        private void NtextBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !char.IsDigit(e.KeyChar) && !char.IsControl(e.KeyChar);
        }
    }
}
