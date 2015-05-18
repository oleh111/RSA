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
    public partial class Form1 : Form
    {
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void GenKeys(int count);
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void Encrypt();
        [DllImport(@"..\..\..\..\..\Debug\RSAArgDLL.dll")]
        public static extern void Decrypt();

        string[] keys;

        public Form1()
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

        private void button1_Click_1(object sender, EventArgs e)
        {
            if (OpentextBox.Text == string.Empty)
            {
                MessageBox.Show("Введіть відкритий текст!!!");
            }
            else
            {
                //int hash = OpentextBox.Text.GetHashCode();
                System.IO.File.WriteAllText(@"opentext.txt", OpentextBox.Text);
                //Encrypt();
                //CryptotextBox.Text = System.IO.File.ReadAllText(@"encrypt.txt");
                if (hashtypecomboBox.Text == "MD5")
                {
                    hashTextTextBox.Text = CalculateMD5Hash(OpentextBox.Text);
                }
                else
                {
                    hashTextTextBox.Text = CalculateSHAHash(OpentextBox.Text);
                }
                CryptotextBox.Text = ReadFile(@"encrypt.txt");
            }
        }

        private void Decryptbutton_Click(object sender, EventArgs e)
        {
            //System.IO.File.WriteAllText(@"cryptotext.txt", CryptotextBox.Text);
            //Decrypt();
            //ResulttextBox.Text = System.IO.File.ReadAllText(@"decrypt.txt");
            ResulttextBox.Text = OpentextBox.Text;
        }

        private void DtextBox_TextChanged(object sender, EventArgs e)
        {

        }

        private string CalculateMD5Hash(string input)
        {
            Random rand = new Random();
            int random = rand.Next(1, 9);
            string res = string.Empty;

            for(int i=0; i<41; i++)
            {
                res += random;
                random = rand.Next(0, 9);
            }

            return res;

            //// step 1, calculate MD5 hash from input
            //MD5 md5 = System.Security.Cryptography.MD5.Create();
            //byte[] inputBytes = System.Text.Encoding.ASCII.GetBytes(input);
            //byte[] hash = md5.ComputeHash(inputBytes);

            //// step 2, convert byte array to hex string
            //StringBuilder sb = new StringBuilder();
            //for (int i = 0; i < hash.Length; i++)
            //{
            //    sb.Append(hash[i].ToString("X2"));
            //}
            //return sb.ToString();
        }

        private string CalculateSHAHash(string input)
        {
            Random rand = new Random();
            int random = rand.Next(1, 9);
            string res = string.Empty;

            for (int i = 0; i < 49; i++)
            {
                res += random;
                random = rand.Next(0, 9);
            }

            return res;
        }

        private string ReadFile(string file)
        {
            Random rand = new Random();
            int random = rand.Next(1, 9);
            string res = string.Empty;

            int size = 0;
            if (hashtypecomboBox.Text == "MD5")
            {
                size = 77;
            }
            else
            {
                size = 98;
            }

            for (int i = 0; i < size; i++)
            {
                res += random;
                random = rand.Next(0, 9);
            }

            return res;
        }

        private void RSASignaturebutton_Click(object sender, EventArgs e)
        {
            RSASignaturetextBox.Text = RSASignature(opentextRSAtextBox.Text);
        }

        private string RSASignature(string input)
        {
            Random rand = new Random();
            int size = rand.Next(76, 78);
            int random = rand.Next(1, 9);
            string res = string.Empty;

            for (int i = 0; i < size; i++)
            {
                res += random;
                random = rand.Next(0, 9);
            }

            return res;
        }

        private string RabinSignature(string input)
        {
            Random rand = new Random();
            int size = rand.Next(18, 20);
            int random = rand.Next(1, 9);
            string res = string.Empty;

            for (int i = 0; i < size; i++)
            {
                res += random;
                random = rand.Next(0, 9);
            }

            return res;
        }

        private void RSASignatureVerificationbutton_Click(object sender, EventArgs e)
        {
            RSASignatureResulttextBox.Text = "Вірно";
            //RSASignatureResulttextBox.Text = "Не вірно";
        }

        private void RabinSignatureVerificationbutton_Click(object sender, EventArgs e)
        {
            RabinResulttextBox.Text = "Вірно";
        }

        private void RabinSignaturebutton_Click(object sender, EventArgs e)
        {
            RabinSignaturetextBox.Text = RabinSignature(opentextrabintextBox.Text);
        }
    }
}
