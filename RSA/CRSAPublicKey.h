#include "LongInt.h"

//відкритий ключ
class CRSAPublicKey
{
public:
	//конструктор копіювання
	CRSAPublicKey(CRSAPublicKey& other);
	//вітруальний деструктор
	virtual ~CRSAPublicKey(void);
	//шифрувати plainBuff в  cryptBuff
	//void Encrypt(const CDataBuffer& plainBuff, CDataBuff& cryptBuff);
	//перевірити цифровий підпис
	template<class T>
	bool Varify(CDataBuff& Buff, const CDataBuff& Signature);

private:
	//конструктор за замовчуванням
	CRSAPublicKey();
	//конструктор, що ініціалізує поля-дані конкретними значеннями
	CRSAPublicKey(LongInt& e, LongInt& n);
	//оператор присвоєння
	CRSAPublicKey& operator = (CRSAPublicKey& other);

protected:
	//n e з опису алгоритму
	LongInt mN, mE;
	//друг закритий ключ
	friend class CRSAPrivateKey;
};