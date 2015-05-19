#include "..\..\RSA\LongInt.h"
#include "..\..\RSA\LongInt.cpp"
#include "..\..\RSA\RSA.h"
#include "..\..\RSA\RSA.cpp"
#include "..\..\RSA\md5.h"
#include "..\..\RSA\md5.cpp"
#include "..\..\RSA\sha1.h"
#include "..\..\RSA\sha1.cpp"
//#include <string.h>
#include <fstream>

extern "C" __declspec(dllexport) void GenKeys(int count)
{
	RSA rsa = RSA(count);
	ofstream myfile;
	myfile.open("keys.txt");
	myfile << rsa.n.ToString() + "\n";
	myfile << rsa.e.ToString() + "\n";
	myfile << rsa.d.ToString() + "\n";
	myfile.close();
}

extern "C" __declspec(dllexport) void Encrypt()
{
	string n, e, d, text;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof()) 
	{
		myFile >> n >> e >> d;
	}
	myFile.close();

	myFile.open("opentext.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	/*myFile.open("opentext.txt");
	while (!myFile.eof()) 
	{
		myFile >> text;
	}
	myFile.close();*/

	RSA rsa = RSA(n, e, d);
	ofstream myfile;
	myfile.open("encrypt.txt");
	myfile << rsa.Encrypt(text, 0);
	myfile.close();
}

extern "C" __declspec(dllexport) void Decrypt()
{
	string n, e, d, text;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof()) 
	{
		myFile >> n >> e >> d;
	}
	myFile.close();

	myFile.open("cryptotext.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	RSA rsa = RSA(n, e, d);
	ofstream myfile;
	myfile.open("decrypt.txt");
	myfile << rsa.Decrypt(text, 0);
	myfile.close();
}

extern "C" __declspec(dllexport) void MD5Hash()
{
	string text;
	ifstream myFile;
	myFile.open("tohash.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	ofstream myfile;
	myfile.open("md5.txt");
	myfile << md5(text);
	myfile.close();
}

extern "C" __declspec(dllexport) void SHA1Hash()
{
	string text;
	ifstream myFile;
	myFile.open("tohash.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	ofstream myfile;
	myfile.open("sha1.txt");
	myfile << sha1(text);
	myfile.close();
}

extern "C" __declspec(dllexport) void RSASignature(int hash)
{
	string n, e, d, text, signature;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof())
	{
		myFile >> n >> e >> d;
	}
	myFile.close();

	myFile.open("opentext.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	RSA rsa = RSA(n, e, d);
	if (hash == 0)
	{
		signature = rsa.RSASignature(text, "md5");
	}
	else
	{
		signature = rsa.RSASignature(text, "sha1");
	}

	ofstream myfile;
	myfile.open("signature.txt");
	myfile << signature;
	myfile.close();
}

extern "C" __declspec(dllexport) int RSASignatureVerification(int hash)
{
	string n, e, d, sign, text;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof())
	{
		myFile >> n >> e >> d;
	}
	myFile.close();
	
	myFile.open("opentext.txt");
	myFile.seekg(0, std::ios::end);
	text.reserve(myFile.tellg());
	myFile.seekg(0, std::ios::beg);

	text.assign((std::istreambuf_iterator<char>(myFile)),
		std::istreambuf_iterator<char>());
	myFile.close();

	myFile.open("signature.txt");
	while (!myFile.eof())
	{
		myFile >> sign;
	}
	myFile.close();

	RSA rsa = RSA(n, e, d);

	if (hash == 0)
	{
		return rsa.RSASignatureVerification(sign, text, "md5");
	}
	else
	{
		return rsa.RSASignatureVerification(sign, text, "sha1");
	}
}