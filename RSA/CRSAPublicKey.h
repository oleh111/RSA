#include "LongInt.h"

//�������� ����
class CRSAPublicKey
{
public:
	//����������� ���������
	CRSAPublicKey(CRSAPublicKey& other);
	//���������� ����������
	virtual ~CRSAPublicKey(void);
	//��������� plainBuff �  cryptBuff
	//void Encrypt(const CDataBuffer& plainBuff, CDataBuff& cryptBuff);
	//��������� �������� �����
	template<class T>
	bool Varify(CDataBuff& Buff, const CDataBuff& Signature);

private:
	//����������� �� �������������
	CRSAPublicKey();
	//�����������, �� �������� ����-��� ����������� ����������
	CRSAPublicKey(LongInt& e, LongInt& n);
	//�������� ���������
	CRSAPublicKey& operator = (CRSAPublicKey& other);

protected:
	//n e � ����� ���������
	LongInt mN, mE;
	//���� �������� ����
	friend class CRSAPrivateKey;
};