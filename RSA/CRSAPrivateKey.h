#include "CRSAPublicKey.h"

//�������� ����
class CRSAPrivateKey: public CRSAPublicKey
{
public:
	//����������� �� �������������
	CRSAPrivateKey();
	//����������
	~CRSAPrivateKey();
	//���������� �������� ���� ����� ������� bitCount � ����
	void Generate(unsigned int bitCount);
	//����������� ��������� ����� (��� ����������)
	void GenerateStd();
	//�� ������������� ����� �������� �������� ����
	CRSAPublicKey GetPublicKey();
	//�����������
	//void Decrypt(const CDataBuffer& cryptoBuff, CDataBuffer& plainBuff);
	//�������� �����
	template<class T>
	void Sign(CDataBuffer& Buff, CDataBuffer& Signature);

private:
	//d � ����� ���������
	LongInt mD;
};