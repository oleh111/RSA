#include <iostream>
#include <time.h>
#include <cmath>
#include "RSA.h"
#include <fstream>
#include "md5.h"
#include "sha1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string str = "qwertyuiop asdfghjkl 1234567890";

	cout << "text = " << str << endl;
	cout << "md5 hash = " << md5(str) << endl;
	cout << "sha1 hash = " << sha1(str) << endl;

	//RSA rsa = RSA(32);
	//while(true)
	//{
	RSA rsa = RSA(32);
	string n, prk, pbk;
	n = rsa.n.ToString();
	prk = rsa.d.ToString();
	pbk = rsa.e.ToString();
	cout << "public key" << endl;
	cout << "n=" << n << " " << "e=" << pbk << endl << "private key" << endl << "d=" << prk << endl;
	//}
	string sign = rsa.RSASignature(str, "md5");
	cout << "RSA signature using md5 " << sign << endl;
	sign = rsa.RSASignature(str, "sha1");
	cout << "RSA signature using sha1 " << sign << endl;
	//cout<<rsa.RSASignatureVerification(sign, str, "md5")<<endl;

	str = rsa.Encrypt("ораорор", 0);
	cout << str << endl;
	str = rsa.Decrypt(str, 0);
	cout << str << endl;

	/*string ans = "n";
	do
	{
	cin>>str;
	cout<<"Encrypt - ";
	str = rsa.Encrypt(str, 0);
	cout<<str<<endl;

	cout<<"Decrypt - ";
	cout<<rsa.Decrypt(str, 0)<<endl;
	cout<<"continue(y/n)"<<endl;
	cin>>ans;
	}
	while(ans == "y");*/
	system("pause");
	return 0;
}
