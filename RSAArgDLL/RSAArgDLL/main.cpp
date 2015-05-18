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
	while (!myFile.eof()) 
	{
		myFile >> text;
	}
	myFile.close();

	RSA rsa = RSA(n, e, d);
	ofstream myfile;
	myfile.open("encrypt.txt");
	myfile << rsa.Encrypt(text, 0) + "\n";
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
	while (!myFile.eof()) 
	{
		myFile >> text;
	}
	myFile.close();

	RSA rsa = RSA(n, e, d);
	ofstream myfile;
	myfile.open("decrypt.txt");
	myfile << rsa.Decrypt(text, 0) + "\n";
	myfile.close();
}

extern "C" __declspec(dllexport) string MD5Hash(string text)
{
	return md5(text);
}

extern "C" __declspec(dllexport) string SHA1Hash(string text)
{
	return sha1(text);
}

extern "C" __declspec(dllexport) string RSASignature(string text, string hash)
{
	string n, e, d;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof())
	{
		myFile >> n >> e >> d;
	}
	myFile.close();

	RSA rsa = RSA(n, e, d);
	return rsa.RSASignature(text, hash);
}

extern "C" __declspec(dllexport) bool RSASignatureVerification(string sign, string text, string hash)
{
	string n, e, d;
	ifstream myFile;
	myFile.open("keys.txt");
	while (!myFile.eof())
	{
		myFile >> n >> e >> d;
	}
	myFile.close();

	RSA rsa = RSA(n, e, d);
	return rsa.RSASignatureVerification(sign, text, hash);
}