#pragma once

#include <string>
#include <vector>
using namespace std;

class LongInt
{
	//ОПИС ТИПІВ ТА ДРУЖНІХ ЕЛЕМЕНТІВ
private:
	//перелічений тип для знаку великого числа
	enum SIntSign {SISNeg = -1, SISZer = 0, SISPoz = 1};
	//перелічений тип для вказання основи при формуванні числа зі стрічки
	enum SIntBase {SIBUnknown, SIBBIn, SIBDec, SIBHex};

	//СТАТИЧНІ ЗМІННІ ТА ДАНІ
public:
	//конструктори і деструктори

	//конструктор за замовчуванням
	LongInt();
	//конструктор копіювання
	LongInt(LongInt& one);
	//конструктор ініціалізації значенням однократної точності
	LongInt(int anInt);
	LongInt(long long anLong);
	//віртуальний деструктор
	virtual ~LongInt();

	//МЕТОДИ

	//згенерувати випадкове велике число з Count - довжина, там опційно - непарне
	void MakeRand(bool IsOdd, unsigned int Count);
	//згенерувати просте число з BitCount біт
	void GenSimpleNumb(unsigned int Count);
	//тест на перевірку простоти числа Рабіна - Міллера
	bool TestRabinMiller(LongInt m, int r);
	//перетворити велике число в текст
	void ToText(char* str);
	string ToString();
	//
	void FromText(string text);
	////заповнити стандартним числом е (для тестування)
	//void MakeE();
	////заповнити стандартним числом q (для тестування)
	//void MakeQ();
	////заповнити стандартним числом p (для тестування)
	//void MakeP();
	////знайти обернене за модулем
	//LongInt Reverse(LongInt& mod);
	//обнулити
	void MakeNull();
	////заповнити з рядка бінарного представлення
	//void FromBinaryString(string str);
	////заповнити з рядка, вказавши основу представлення
	//void FromString(string str, SIntBase base);
	////заповнити з буфера
	//void FromBuffer(const char* buff, unsigned buffLength);
	////заповнити буфер
	//unsigned int ToBuffer(char* buff);
	//ділення (devisor - дільник, quotient - частка, remainder - залишок)
	void Div(LongInt devisor, LongInt& quotient, LongInt& remainder);
	//видаляє нулі перед числом
	void DelNull();
	//записує число навпаки
	void reverse();
	//ділення на невелике число до 10000
	void DivInt(int devisor, LongInt& quotient, LongInt& remainder);

	//ОПЕРАТОРИ
	//присвоєння іншого великого
	LongInt& operator = (LongInt& other);
	//присвоєння малого цілого
	LongInt& operator = (int anInt);
	//тотожність з іншим великим
	bool operator == (LongInt& other);
	//тотожність з цілим малим
	bool operator == (int anInt);
	//не тотожність з іншим великим
	bool operator != (LongInt& other);
	//не тотожність з цілим малим
	bool operator != (int anInt);
	//більше з іншим великим
	bool operator > (LongInt& other);
	//більше з цілим малим
	bool operator > (int anInt);
	//менше з іншим великим
	bool operator < (LongInt& other);
	//менше з цілим малим
	bool operator < (int anInt);
	//більше-ріне з іншим великим
	bool operator >= (LongInt& other);
	//більше-рівне з цілим малим
	bool operator >= (int anInt);
	//менше-рівне з іншим великим
	bool operator <= (LongInt& other);
	//менше-рівне з цілим малим
	bool operator <= (int anInt);
	//інкремент
	LongInt& operator ++ ();
	//декремент
	LongInt& operator -- ();
	//різниці
	LongInt operator - (LongInt one);
	//добутку
	LongInt operator * (int one);
	LongInt operator * (LongInt one);
	//ділення
	LongInt operator / (LongInt one);
	//остача від ділення
	LongInt operator % (LongInt one);
	LongInt operator % (int one);
	LongInt operator - ();
	//додавання
	LongInt operator +(LongInt one);

	//ФУНКЦІЇ-ДРУЗІ
	//множення за модулем
	friend LongInt MulMod(LongInt a, LongInt b, LongInt N);
	//піднесення до степеня за модулем
	friend LongInt PowMod(LongInt a, LongInt m, LongInt N);
	friend LongInt PowModInt(LongInt a, int m, LongInt N);
	//додавання
	friend LongInt Add(LongInt a, LongInt b);
	//віднімання
	friend LongInt Sub(LongInt a, LongInt b);
	//множеня
	friend LongInt Mul(LongInt a, LongInt b);
	//найбільший спільний дільник
	friend LongInt NSD(LongInt a, LongInt b);
	//true - якщо взаємно прості
	friend bool IsCoprime(LongInt a, LongInt b);

	//ЧЛЕНИ-ДАНІ
private:
	//цифри
	vector<unsigned int> digits;
	//знак
	SIntSign mSign;

public:
	vector<unsigned int> GetDigits() {return digits;}
	int GetNumbDig() {return digits.size();}
	void SetPoz(){mSign = SISPoz;}
	void SetNeg(){mSign = SISNeg;}
};