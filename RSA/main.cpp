#include <iostream>
#include <time.h>
#include <cmath>
#include "RSA.h"
#include <fstream>
#include "md5.h"
#include "sha1.h"
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


int main()
{
	string str = "qwertyuiop[]asdfghjkl;'zxcvbnm,./QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?1234567890-=";
	
	cout<<md5(str)<<endl;
	cout<<sha1(str)<<endl;

	//RSA rsa = RSA(32);
	//while(true)
	//{
	RSA rsa = RSA(32);
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
