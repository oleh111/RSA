#pragma once

#include <string>
#include <vector>
using namespace std;

class LongInt
{
	//���� ��ϲ� �� ����Ͳ� ������Ҳ�
private:
	//���������� ��� ��� ����� �������� �����
	enum SIntSign {SISNeg = -1, SISZer = 0, SISPoz = 1};
	//���������� ��� ��� �������� ������ ��� ��������� ����� � ������
	enum SIntBase {SIBUnknown, SIBBIn, SIBDec, SIBHex};

	//������Ͳ �̲�Ͳ �� ��Ͳ
public:
	//������������ � �����������

	//����������� �� �������������
	LongInt();
	//����������� ���������
	LongInt(LongInt& one);
	//����������� ����������� ��������� ���������� �������
	LongInt(int anInt);
	LongInt(long long anLong);
	//���������� ����������
	virtual ~LongInt();

	//������

	//����������� ��������� ������ ����� � Count - �������, ��� ������� - �������
	void MakeRand(bool IsOdd, unsigned int Count);
	//����������� ������ ����� � BitCount ��
	void GenSimpleNumb(unsigned int Count);
	//���� �� �������� �������� ����� ����� - ̳�����
	bool TestRabinMiller(LongInt m, int r);
	//����������� ������ ����� � �����
	void ToText(char* str);
	string ToString();
	//
	void FromText(string text);
	////��������� ����������� ������ � (��� ����������)
	//void MakeE();
	////��������� ����������� ������ q (��� ����������)
	//void MakeQ();
	////��������� ����������� ������ p (��� ����������)
	//void MakeP();
	////������ �������� �� �������
	//LongInt Reverse(LongInt& mod);
	//��������
	void MakeNull();
	////��������� � ����� �������� �������������
	//void FromBinaryString(string str);
	////��������� � �����, �������� ������ �������������
	//void FromString(string str, SIntBase base);
	////��������� � ������
	//void FromBuffer(const char* buff, unsigned buffLength);
	////��������� �����
	//unsigned int ToBuffer(char* buff);
	//������ (devisor - ������, quotient - ������, remainder - �������)
	void Div(LongInt devisor, LongInt& quotient, LongInt& remainder);
	//������� ��� ����� ������
	void DelNull();
	//������ ����� �������
	void reverse();
	//������ �� �������� ����� �� 10000
	void DivInt(int devisor, LongInt& quotient, LongInt& remainder);

	//���������
	//��������� ������ ��������
	LongInt& operator = (LongInt& other);
	//��������� ������ ������
	LongInt& operator = (int anInt);
	//��������� � ����� �������
	bool operator == (LongInt& other);
	//��������� � ����� �����
	bool operator == (int anInt);
	//�� ��������� � ����� �������
	bool operator != (LongInt& other);
	//�� ��������� � ����� �����
	bool operator != (int anInt);
	//����� � ����� �������
	bool operator > (LongInt& other);
	//����� � ����� �����
	bool operator > (int anInt);
	//����� � ����� �������
	bool operator < (LongInt& other);
	//����� � ����� �����
	bool operator < (int anInt);
	//�����-��� � ����� �������
	bool operator >= (LongInt& other);
	//�����-���� � ����� �����
	bool operator >= (int anInt);
	//�����-���� � ����� �������
	bool operator <= (LongInt& other);
	//�����-���� � ����� �����
	bool operator <= (int anInt);
	//���������
	LongInt& operator ++ ();
	//���������
	LongInt& operator -- ();
	//������
	LongInt operator - (LongInt one);
	//�������
	LongInt operator * (int one);
	LongInt operator * (LongInt one);
	//������
	LongInt operator / (LongInt one);
	//������ �� ������
	LongInt operator % (LongInt one);
	LongInt operator % (int one);
	LongInt operator - ();
	//���������
	LongInt operator +(LongInt one);

	//����ֲ�-���ǲ
	//�������� �� �������
	friend LongInt MulMod(LongInt a, LongInt b, LongInt N);
	//��������� �� ������� �� �������
	friend LongInt PowMod(LongInt a, LongInt m, LongInt N);
	friend LongInt PowModInt(LongInt a, int m, LongInt N);
	//���������
	friend LongInt Add(LongInt a, LongInt b);
	//��������
	friend LongInt Sub(LongInt a, LongInt b);
	//�������
	friend LongInt Mul(LongInt a, LongInt b);
	//��������� ������� ������
	friend LongInt NSD(LongInt a, LongInt b);
	//true - ���� ������ �����
	friend bool IsCoprime(LongInt a, LongInt b);

	//�����-��Ͳ
private:
	//�����
	vector<unsigned int> digits;
	//����
	SIntSign mSign;

public:
	vector<unsigned int> GetDigits() {return digits;}
	int GetNumbDig() {return digits.size();}
	void SetPoz(){mSign = SISPoz;}
	void SetNeg(){mSign = SISNeg;}
};