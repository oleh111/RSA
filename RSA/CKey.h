#include <string>
#include "LongInt.h"

using namespace std;

class CKey
{
public:
	//конструктор з параметром довжиною ключа BitCount в бітах
	CKey(int BitCount);
	//
	static void Randomize();
	//повертає випадкове велике число довжиною BitCount в бітах
	LongInt Generate();
};