#include <iostream>
#include <time.h>
#include <cmath>
#include "RSA.h"
#include <fstream>
using namespace std;

int rando(int min, int max)
{
	max += 1;
	static bool first = true;
	if ( first ) 
	{  
		srand(time(NULL)); //seeding for the first time only!
		first = false;
	}
	return min + rand() % (max - min);
}

string Encryption(string str)
{
    string encRes = "";
	vector<int> enc;
	enc.clear();
	for (unsigned int i(0); i < str.length(); i++)
		enc.push_back(str[i]);

	encRes += to_string(enc[0]);
	for (int i = 1; i < enc.size(); i++)
	{
		if (str[i]<10)
		{
			encRes += "00" + to_string(enc[i]);
			continue;
		}
		if (str[i]<100)
		{
			encRes += "0" + to_string(enc[i]);
			continue;
		}
		encRes += to_string(enc[i]);
	}

    return encRes;
}

string Decryption(string str)
{
    string dec("");
	string::iterator it=str.end();
	it--;
	for ( it; it!=str.begin();)
	{
		int dec_ = 0;
		for (int i = 0; i < 3; i++)
		{
			dec_ += (*it - '0') * pow(10, i);
			if (it == str.begin())
			{
				break;
			}
			--it;
		}
		dec.insert(dec.begin(), dec_);
	}
    return dec;
}


int main()
{
	/*LongInt q=LongInt(), w=LongInt(), e=LongInt();
	q.MakeRand(true, 19);
	w.MakeRand(true, 15);

	LongInt res = PowModInt(q, 2, w);
	cout<<res.ToString();*/
	LongInt a, b;
	a.FromText("4567890123");
	b.FromText("6789");
	//LongInt res = a / b;

	string s = "47148020709668928081798782506800190542277458516063296228784219589366839027587";
	
	int i=123456798;
	string str = "qwertyuiop[]asdfghjkl;'zxcvbnm,./ 1234567890-= QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?";
	
    //string encrypted = Encryption(str); // storing the encrypted string
    //string decrypted = Decryption(encrypted); // storing the decrypted string

	//cout << encrypted << endl;
	//cout << decrypted << endl;


	//RSA rsa = RSA(32);
	//while(true)
	//{
	RSA rsa = RSA(64);
	string n, prk, pbk;
	n = rsa.n.ToString();
	prk = rsa.d.ToString();
	pbk = rsa.e.ToString();
	cout<<n<<" "<<pbk<<" "<<prk<<endl;
	//}

	string ans = "n";
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
	while(ans == "y");

	//LongInt num = LongInt(182239);
	//while(true)
	//{
	//	/*num.MakeRand(true, 6);
	//	num.SetPoz();*/

	//	//генерує прості числа довжиною до 10
	//	num.GenSimpleNumb(9);

	//	str = num.ToString();
	//	cout<<str<<endl;
	//	//cout<<num.TestRabinMiller(num, 200)<<endl;
	//	system("pause");
	//}
	//
	//num.GenSimpleNumb(10);
	//str = num.ToString();
	//cout<<str<<endl;
	//cin>>i;

	//int x, y, n;
	//i=1;
	//while(true)
	//{
	//	x = rando(100000, 999999);//123624;//
	//	y = rando(10000, 99999);//25049;//
	//	n = rando(100000, 999999);//109253;//
	//	LongInt a(x);
	//	//a.FromText("212332312233341999");
	//	LongInt b(y);
	//	//b.FromText("278888400");
	//	LongInt N(n);
	//	LongInt c;
	//	LongInt d;

	//	cout<<i<<endl;
	//	cout<<x<<"  "<<y<<"  "<<n<<endl;//" "<<x/y<<" "<<x%y<<endl;
	//	/*str = a.ToString();
	//	for(int i=0;i<3;i++)
	//	{
	//		cout<<str[i];
	//	}
	//	c = a * b;
	//	if(c != (x*y))
	//	{
	//		cout<<"error *";
	//		break;
	//	}
	//	c = a - b;
	//	if(c != (x-y))
	//	{
	//		cout<<"error -";
	//		break;
	//	}
	//	c = a + b;
	//	if(c != (x+y))
	//	{
	//		cout<<"error +";
	//		break;
	//	}*/
	//	//d = a % b;
	//	//str = d.ToString();
	//	//if(d != (int)(x%y))
	//	//{
	//	//	cout<<"error /d "<<str;
	//	//	//break;
	//	//}
	//	//c = a / b;
	//	//str = c.ToString();
	//	//if(c != (x/y))
	//	//{
	//	//	cout<<"error /c "<<str;
	//	//	break;
	//	//}
	//	//c = a / i;
	//	//if (c != (x/i))
	//	//{
	//	//	cout<<"error / int"<<i<<endl;
	//	//	break;
	//	//}
	//	c = PowMod(a, b, N);
	//	cout<<c.ToString();
	//	
	//	i++;
	//	//system("pause");
	//	//cin>>i;
	//}


	//cin>>i;
	return 0;
}
