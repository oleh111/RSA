#pragma once

#include <string>
#include "LongInt.h"
using namespace std;

class RSA
{
public:
	//закритий ключ
	LongInt d;
	//відкритий ключ
	LongInt e;
	//
	LongInt n;

public:
	//констуктор за замовчуванням
	RSA();
	//констуктор з параметром Count - розміром ключа
	RSA(int Count);
	//конструктор з параметрами
	RSA(string _n, string _e, string _d);
	//функція шифрування
	string Encrypt(string text, bool isNumber);
	//функція дешифрування
	string Decrypt(string text, bool isNumber);
	//функції переведення тексту в число
	string Encryption(string str);
	string Decryption(string str);
	//функція генерує підпис RSA для тексту text і з допомогою функції хешування hash
	string RSASignature(string text, string hash);
	//верифікація підпису RSA
	bool RSASignatureVerification(string sign, string text, string hash);

private:
	//генерує d
	void GenD(int Count, LongInt fn);
	//генерує e
	void GenE(int Count, LongInt fn);
};