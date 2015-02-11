#include "CRSAPublicKey.h"

//закритий ключ
class CRSAPrivateKey: public CRSAPublicKey
{
public:
	//конструктор за замовчуванням
	CRSAPrivateKey();
	//деструктор
	~CRSAPrivateKey();
	//генерувати закритий ключ певної довжини bitCount в бітах
	void Generate(unsigned int bitCount);
	//згенерувати стандартні ключі (для тестування)
	void GenerateStd();
	//із згенерованого ключа отримати відкритий ключ
	CRSAPublicKey GetPublicKey();
	//дешифрувати
	//void Decrypt(const CDataBuffer& cryptoBuff, CDataBuffer& plainBuff);
	//цифровий підпис
	template<class T>
	void Sign(CDataBuffer& Buff, CDataBuffer& Signature);

private:
	//d з опису алгоритму
	LongInt mD;
};