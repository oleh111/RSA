#include <string>
#include "LongInt.h"

using namespace std;

class CKey
{
public:
	//����������� � ���������� �������� ����� BitCount � ����
	CKey(int BitCount);
	//
	static void Randomize();
	//������� ��������� ������ ����� �������� BitCount � ����
	LongInt Generate();
};