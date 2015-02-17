#pragma once

#include <string>
#include "LongInt.h"
using namespace std;

class RSA
{
public:
	//�������� ����
	LongInt d;
	//�������� ����
	LongInt e;
	//
	LongInt n;

public:
	//���������� �� �������������
	RSA();
	//���������� � ���������� Count - ������� �����
	RSA(int Count);
	//����������� � �����������
	RSA(string _n, string _e, string _d);
	//������� ����������
	string Encrypt(string text, bool isNumber);
	//������� ������������
	string Decrypt(string text, bool isNumber);
	//������� ����������� ������ � �����
	string Encryption(string str);
	string Decryption(string str);
	//������� ������ ����� RSA ��� ������ text � � ��������� ������� ��������� hash
	string RSASignature(string text, string hash);
	//����������� ������ RSA
	bool RSASignatureVerification(string sign, string text, string hash);

private:
	//������ d
	void GenD(int Count, LongInt fn);
	//������ e
	void GenE(int Count, LongInt fn);
};