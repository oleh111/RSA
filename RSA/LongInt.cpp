#include "LongInt.h"
#include <time.h>

LongInt::LongInt()
{
	MakeNull();
}

LongInt::~LongInt()
{
	digits.clear();
}

LongInt::LongInt(LongInt& one)
{
	mSign = one.mSign;
	digits = one.digits;
}

LongInt::LongInt(int anInt)
{
	if(anInt == 0)
	{
		MakeNull();
	}
	else
	{
		int anint = anInt;
		if(anInt/abs(anInt) == 1)
		{
			mSign = SISPoz;
		}
		if(anInt/abs(anInt) == -1)
		{
			mSign = SISNeg;
			anInt *= -1;
			anint *= -1;
		}
		while(anint > 0)
		{
			anint /= 10;
		}
		digits.clear();
		while(anInt > 0)
		{
			digits.push_back(anInt%10);
			anInt /= 10;
		}
	}
}

LongInt::LongInt(long long anLong)
{
	if(anLong == 0)
	{
		MakeNull();
	}
	else
	{
		long long anint = anLong;
		if(anLong/abs(anLong) == 1)
		{
			mSign = SISPoz;
		}
		if(anLong/abs(anLong) == -1)
		{
			mSign = SISNeg;
			anLong *= -1;
			anint *= -1;
		}
		while(anint > 0)
		{
			anint /= 10;
		}
		digits.clear();
		while(anLong > 0)
		{
			digits.push_back(anLong%10);
			anLong /= 10;
		}
	}
}

int random(int min, int max) //range : [min, max]
{
	max += 1;
	static bool first = true;
	if ( first ) 
	{  
		srand(time(NULL)); //seeding for the first time only!
		first = false;
	}
	return min + rand() % (max - min);
}

void LongInt::MakeRand(bool IsOdd, unsigned int Count)
{
	mSign = SISPoz;
	int size = Count;
	digits.clear();
	for(int i=0; i<size-1;i++)
	{
		digits.push_back(random(0, 9));
	}
	digits.push_back(random(1, 9));
	if(!IsOdd)
	{
		while (digits[0]%2 != 0)
		{
			digits[0] = random(0, 9);
		}
	}
	else
	{
		while (digits[0]%2 == 0)
		{
			digits[0] = random(1, 9);
		}
	}
}

void LongInt::GenSimpleNumb(unsigned int Count)
{
	int simpleNumb[] = {2,	3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73,
		79,	83,	89,	97,	101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
		193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 
		313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 
		443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 
		587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 
		719, 727, 733, 739,	743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857,
		859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971,	977, 983, 991, 997,	1009,
		1013, 1019, 1021,	1031,	1033,	1039,	1049,	1051,	1061,	1063,	1069, 1087,	1091, 1093, 1097,
		1103, 1109, 1117, 1123, 1129, 1151, 1153,	1163,	1171,	1181,	1187, 1193, 1201, 1213, 1217, 1223, 
		1229, 1231, 1237, 1249,	1259, 1277, 1279, 1283, 1289, 1291, 1297, 1301, 1303, 1307,	1319, 1321, 1327, 1361, 1367, 1373, 
		1381, 1399, 1409, 1423,	1427, 1429, 1433, 1439, 1447, 1451, 1453, 1459, 1471, 1481,	1483, 1487, 1489, 1493, 1499, 1511, 
		1523, 1531, 1543, 1549,	1553, 1559, 1567, 1571, 1579, 1583, 1597, 1601, 1607, 1609,	1613, 1619, 1621, 1627, 1637, 1657, 
		1663, 1667, 1669, 1693,	1697, 1699, 1709, 1721, 1723, 1733, 1741, 1747, 1753, 1759,	1777, 1783, 1787, 1789, 1801, 1811, 
		1823, 1831, 1847, 1861,	1867, 1871, 1873, 1877, 1879, 1889, 1901, 1907, 1913, 1931,	1933, 1949, 1951, 1973, 1979, 1987, 
		1993, 1997, 1999, 2003,	2011, 2017, 2027, 2029,	2039, 2053, 2063, 2069, 2081, 2083, 2087, 2089, 2099, 2111, 2113, 2129,
		2131, 2137, 2141, 2143, 2153, 2161, 2179, 2203, 2207, 2213, 2221, 2237, 2239, 2243, 2251, 2267, 2269, 2273, 2281, 2287,
		2293, 2297,	2309, 2311, 2333, 2339, 2341, 2347, 2351, 2357, 2371, 2377, 2381, 2383, 2389, 2393, 2399, 2411, 2417, 2423, 
		2437, 2441, 2447, 2459, 2467, 2473, 2477, 2503, 2521, 2531, 2539, 2543, 2549, 2551, 2557, 2579, 2591, 2593, 2609, 2617, 
		2621, 2633, 2647, 2657, 2659, 2663, 2671, 2677, 2683, 2687, 2689, 2693, 2699, 2707, 2711, 2713, 2719, 2729, 2731, 2741, 
		2749, 2753, 2767, 2777, 2789, 2791, 2797, 2801, 2803, 2819, 2833, 2837, 2843, 2851, 2857, 2861, 2879, 2887, 2897, 2903, 
		2909, 2917, 2927, 2939, 2953, 2957, 2963, 2969, 2971, 2999, 3001, 3011, 3019, 3023, 3037, 3041, 3049, 3061, 3067, 3079, 
		3083, 3089, 3109, 3119, 3121, 3137, 3163, 3167, 3169, 3181, 3187, 3191, 3203, 3209, 3217, 3221, 3229, 3251, 3253, 3257, 
		3259, 3271, 3299, 3301, 3307, 3313, 3319, 3323, 3329, 3331, 3343, 3347, 3359, 3361, 3371, 3373, 3389, 3391, 3407, 3413, 
		3433, 3449, 3457, 3461, 3463, 3467, 3469, 3491, 3499, 3511, 3517, 3527, 3529, 3533, 3539, 3541, 3547, 3557, 3559, 3571
};

	if (Count==2)
	{
		*this = LongInt(simpleNumb[random(4, 24)]);
		return;
	}
	if (Count==3)
	{
		*this = LongInt(simpleNumb[random(25, 167)]);
		return;
	}
	LongInt r;
	bool BOOL;
	int t = 200;

	do
	{
		BOOL = false;
		this->MakeRand(true, Count); // ãåíåðóâàííÿ íàñòóïíîãî âèïàäê.÷èñëà 
		this->digits[this->GetNumbDig()-1] = 1;
		this->SetPoz();
		for (int i=0; i<303 && *this > simpleNumb[i]; i+=1) //ïåðåâ³ðêà ä³ëåííÿì íà ïðîñò³ ÷èñëà
		{
			this->DivInt(simpleNumb[i], LongInt(), r);
			if (r == 0) 
			{
				BOOL = true; 
				break; 
			}
		}
		if (BOOL)
		{
			continue;
		}
		BOOL = TestRabinMiller(*this, t); //òåñò íà ïðîñòîòó ÷èñëà
		BOOL = !BOOL;
	}
	while(BOOL);
}

bool LongInt::TestRabinMiller(LongInt m, int r)
{
	LongInt m1 = m - 1;
	LongInt t, _q, _r, _q1;
	int s = 1;
	m1.DivInt(2, _r, t);
	while (t == 0)
	{
		_q = _r;
		_q1 = _q;
		_q.DivInt(2, _r, t);
		s++;
	}
	s--;
	t = _q1;
	bool res = true;

	while (r-- > 0)
	{
		LongInt a;
		a.MakeRand(true, m.GetNumbDig());//*sizeof(unsigned int) - 1);
		a.SetPoz();
		while (a > (m - 2) || a < 2)
		{
			a.MakeRand(true, m.GetNumbDig());//*sizeof(unsigned int) - 1);
			a.SetPoz();
		}

		int j = 0;
		LongInt x = PowMod(a, t, m);
		if (x == 1 || x == m - 1)
		{
			continue;
		}

		int b = s;
		while (b-- > 0)
		{
			if (j > 0 && x == 1)
			{
				return false;
			}
			j += 1;
			if (j < s && x != m - 1)
			{
				x = PowModInt(x, 2, m);
			}
			if (x == m - 1)
			{
				break;
			}
			if (j == s && x != m - 1)
			{
				return false;
			}
		}
	}
	return true;
	/*for (int i = 0; i < r; i++)
	{
		LongInt a;
		a.MakeRand(true, m.GetNumbDig()*sizeof(unsigned int)-1);
		while (a > m - 2 || a < 2)
		{
			a.MakeRand(true, m.GetNumbDig()*sizeof(unsigned int)-1);
		}
		LongInt x = PowMod(a, t, m);
		if (x == 1 || x == m - 1)
		{
			continue;
		}
		for (int i = 0; i < s - 1; i++)
		{
			x = PowModInt(x, 2, m);
			if (x == 1)
			{
				return false;
			}
			if (x == m - 1)
			{
				break;
			}
		}
		return false;
	}
	return true;*/
}

void LongInt::MakeNull()
{
	mSign = SISZer;
	digits.clear();
	digits.push_back(0);
}

string LongInt::ToString()
{
	string str;
	str.clear();
	if (mSign == SISZer)
	{
		str = "0";
		return str;
	}
	if (mSign == SISNeg)
	{
		str.push_back('-');
	}
	for(int i = 0; i < GetNumbDig(); i++)
	{
		str.push_back('0' + digits[GetNumbDig() - 1 - i]);
	}
	return str;
}

void LongInt::FromText(string text)
{
	if (text[0] == '-')
	{
		this->mSign = SISNeg;
		text.erase(0, 1);
	}
	else
	{
		this->mSign = SISPoz;
	}
	this->digits.clear();
	for (int i=text.size()-1; i>=0; i--)
	{
		this->digits.push_back(text[i]-'0');
	}
}

LongInt& LongInt::operator = (LongInt& other)
{
	mSign = other.mSign;
	digits = other.digits;
	return *this;
}

LongInt& LongInt::operator = (int anInt)
{
	return LongInt(anInt);
}

bool LongInt::operator == (LongInt& other)
{
	if(mSign == other.mSign)
	{
		if(GetNumbDig() == other.GetNumbDig())
		{
			for(int i=0;i<GetNumbDig();i++)
			{
				if(digits[i] != other.digits[i])
				{
					return false;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool LongInt::operator == (int anInt)
{
	LongInt other(anInt);
	return *this == other;
}

bool LongInt::operator != (LongInt& other)
{
	return !(*this == other);
}

bool LongInt::operator != (int anInt)
{
	LongInt other(anInt);
	return !(*this == other);
}

bool LongInt::operator > (LongInt& other)
{
	if(mSign < other.mSign)
	{
		return false;
	}
	if(mSign > other.mSign)
	{
		return true;
	}
	if(mSign == other.mSign)
	{
		if(GetNumbDig() > other.GetNumbDig())
		{
			return true;
		}
		if(GetNumbDig() < other.GetNumbDig())
		{
			return false;
		}
		if(GetNumbDig() == other.GetNumbDig())
		{
			for(int i=GetNumbDig()-1; i>=0; i--)
			{
				if(digits[i] > other.digits[i])
				{
					return true;
				}
				if(digits[i] < other.digits[i])
				{
					return false;
				}
			}
			return false;
		}
	}
}

bool LongInt::operator > (int anInt)
{
	LongInt other(anInt);
	return *this > other;
}

bool LongInt::operator < (LongInt& other)
{
	if(*this > other)
	{
		return false;
	}
	if(*this == other)
	{
		return false;
	}
	return true;
}

bool LongInt::operator < (int anInt)
{
	LongInt other(anInt);
	if(*this > other)
	{
		return false;
	}
	if(*this == other)
	{
		return false;
	}
	return true;
}

bool LongInt::operator >= (LongInt& other)
{
	if(*this < other)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool LongInt::operator >= (int anInt)
{
	LongInt other(anInt);
	if(*this < other)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool LongInt::operator <= (LongInt& other)
{
	if(*this > other)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool LongInt::operator <= (int anInt)
{
	LongInt other(anInt);
	if(*this > other)
	{
		return false;
	}
	else
	{
		return true;
	}
}

LongInt& LongInt::operator ++ ()
{
	return Add(*this, LongInt(1));
}

LongInt& LongInt::operator -- ()
{
	return Sub(*this, LongInt(1));
}

LongInt LongInt::operator * (int one)
{
	LongInt a(one);
	return Mul(*this, a);
}

LongInt LongInt::operator * (LongInt one)
{
	return Mul(*this, one);
}

LongInt LongInt::operator +(LongInt one)
{
	return Add(*this, one);
}

LongInt LongInt::operator - (LongInt one)
{
	return Sub(*this, one);
}

LongInt LongInt::operator - ()
{
	LongInt one = *this;
	if (one.mSign == SISNeg)
	{
		one.mSign = SISPoz;
	}
	if (one.mSign == SISPoz)
	{
		one.mSign = SISNeg;
	}
	return one;
}

LongInt LongInt::operator / (LongInt one)
{
	LongInt q, r;
	this->Div(one, q, r);
	return q;
}

LongInt LongInt::operator % (LongInt one)
{
	LongInt q, r;
	this->Div(one, q, r);
	return r;
}

LongInt LongInt::operator % (int one)
{
	LongInt q, r;
	this->Div(LongInt(one), q, r);
	return r;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

LongInt PowMod(LongInt a, LongInt m, LongInt N)
{
	LongInt r, q;
	if (m == 0)
	{
		return LongInt(1);
	}
	if (m == 1)
	{
		return a%N;
	}
	m.DivInt(2, q, r);
	if (r == 1)
	{
		return MulMod(PowMod(a, m - 1, N), a, N);
	}
	else 
	{
		LongInt b;
		if (m == 2)
		{
			return PowModInt(a, 2, N);
		}
		else
		{
			b = PowMod(a, q, N);
		}
		if (b == 1)
		{
			return b;
		}
		return PowModInt(b, 2, N);
	}
}

LongInt PowModInt(LongInt a, int m, LongInt N)
{
	LongInt res = a;
	for (int i = 0; i < m-1; i++)
	{
		res = MulMod(res, a, N);
	}
	return res;
}

LongInt MulMod(LongInt a, LongInt b, LongInt N)
{
	LongInt c, temp;
	if(a.mSign == a.SISZer || b.mSign == b.SISZer)
	{
		c.MakeNull();
	}
	else
	{
		temp = Mul(a, b);
		if (temp >= N)
		{
			temp.Div(N, LongInt(), c);
		}
		else
		{
			return temp;
		}
	}
	return c;
}

void LongInt::DivInt(int devisor, LongInt& quotient, LongInt& remainder)
{
	int i = digits.size() - 1;
	quotient.digits.clear();
	int r = 0;
	int a = digits[i];
	while (i>=0)
	{
		if (a >= devisor)
		{
			quotient.digits.push_back(a / devisor);
			r = a % devisor;
			i--;
			if (i<0)
			{
				break;
			}
			a = digits[i] + r * 10;
		}
		else
		{
			quotient.digits.push_back(0);
			i--;
			if (i<0)
			{
				r = a;
				break;
			}
			a = a*10 + digits[i];
		}
	}
	quotient.reverse();
	quotient.mSign = SISNeg;
	if (mSign == SISPoz && devisor > 0)
	{
		quotient.mSign = SISPoz;
	}
	if (mSign == SISNeg && devisor < 0)
	{
		quotient.mSign = SISPoz;
	}
	quotient.DelNull();
	remainder = LongInt(r);
}

void LongInt::Div(LongInt devisor, LongInt& quotient, LongInt& remainder)
{
	if (*this < devisor)
	{
		quotient.MakeNull();
		remainder = *this;
		return;
	}
	if (devisor < 10)
	{
		int temp = 0;
		for (int i = 0; i < devisor.GetNumbDig(); i++)
		{
			temp += devisor.digits[i] * pow(10, i);
		}
		this->DivInt(temp, quotient, remainder);
		return;
	}
	// u/v
	//îñíîâà b
	int b = 10;
	int d = (int)b / (devisor.digits[devisor.GetNumbDig() - 1] + 1);
	int n = devisor.GetNumbDig();
	int m = this->GetNumbDig() - n;
	LongInt u, v, u2;
	LongInt q, r;
	
	q.digits.resize(m + 1);
	r.digits.resize(n);

	u = Mul(*this, LongInt(d));
	u.digits.resize(m+n+1);
	if (d == 1)
	{
		u.digits[m + n] = 0;
	}
	v = Mul(devisor, LongInt(d));
	v.digits.resize(n);
	
	int j = m;
	while (j >= 0)
	{
		//d3
		int _q = (u.digits[j + n] * b + u.digits[j + n - 1]) / v.digits[n - 1];
		int _r = (u.digits[j + n] * b + u.digits[j + n - 1]) % v.digits[n - 1];
		do
		{
			if (_q == b || _q*v.digits[n-2] > b*_r + u.digits[j+n-2])
			{
				_q -= 1;
				_r += v.digits[n - 1];
			}
			else
			{
				break;
			}
		}
		while (_r < b);

		//d4
		string _power = "1";
		for (int i = 0; i < j; i++)
		{
			_power += "0";
		}
		LongInt power = LongInt();
		power.FromText(_power);
		LongInt _qMulv = v * LongInt(power*LongInt(_q));
		u = Sub(u, _qMulv);
		u.digits.resize(m + n + 1);
		bool negResOfSub = false;
		if (u.mSign == u2.SISNeg)
		{
			negResOfSub = true;

			//ìàº áóòè b^(n+1) îñê³ëüêè b=10 òî 10^(n+1)
			_power = "1";
			for (int i = 0; i < n+1; i++)
			{
				_power += "0";
			}
			LongInt powerOfB;
			powerOfB.FromText(_power);
			/////////////////////////////////////

			u = Add(LongInt(u), LongInt(power*powerOfB));
			u.digits.resize(m + n + 1);
		}

		//d5
		q.digits[j] = _q;
		if (_q > 9)
		{
			q.digits[j] = _q%b;
			q.digits[j+1] += _q/b;
		}
		//d6
		if (negResOfSub)
        {
			q.digits[j] -= 1;
			LongInt temp;
			temp.mSign = temp.SISPoz;
			temp.digits.clear();
			temp.digits = vector<unsigned int> (u.digits.begin()+j, u.digits.begin()+j+n+1);
			temp = Add(temp, v);
			for (int i = j; i < j + n + 1; i++)
			{
				u.digits[i] = temp.digits[i - j];
			}
        }

		//d7
		j -= 1;
	}

	quotient.digits = q.digits;
	if (this->mSign == devisor.mSign)
	{
		quotient.mSign = quotient.SISPoz;
	}
	else
	{
		quotient.mSign = quotient.SISNeg;
	}
	quotient.DelNull();

	u.DelNull();
	if (d == 1)
	{
		r.digits = u.digits;
	}
	else
	{
		u.DivInt(d, r, LongInt());
	}

	remainder.digits = r.digits;
	remainder.mSign = remainder.SISPoz;
	remainder.DelNull();
}

void LongInt::DelNull()
{
	int i = digits.size() - 1;
	while(i > 0)
	{
		if (digits[i] == 0)
		{
			digits.pop_back();
			i--;
		}
		else
		{
			break;
		}
	}
	if (digits.size() == 1 && digits[0] == 0)
	{
		this->MakeNull();
	}
}

void LongInt::reverse()
{
	vector<unsigned int> vec;
	vec.resize(digits.size());
	for (int i = 0; i < digits.size(); i++)
	{
		vec[i] = digits[digits.size() - 1 - i];
	}
	digits = vec;
}


LongInt Mul(LongInt a, LongInt b)
{
	LongInt c = LongInt();
	if(a.mSign == a.SISZer || b.mSign == b.SISZer)
	{
		c.MakeNull();
	}
	else
	{
		vector<unsigned int> arr;
		for (int j=0; j < a.GetNumbDig() + b.GetNumbDig(); j++)
		{
			arr.push_back(0);
		}
		int j=0, k=0, i=0;
		//îñíîâà b
		int x = 10;

		while(true)
		{
			if(b.digits[j] == 0)
			{
				arr[j + a.GetNumbDig()] = 0;
			}
			else
			{
				i = 0, k = 0;
				while(true)
				{
					int t = a.digits[i] * b.digits[j] + k + arr[i+j];
					arr[i+j] = t % x;
					k = t/x;
					i += 1;
					if(i >= a.GetNumbDig())
					{
						arr[j + a.GetNumbDig()] = k;
						break;
					}
				}
			}
			j += 1;
			if(j >= b.GetNumbDig())
			{
				break;
			}
		}
		i = a.GetNumbDig() + b.GetNumbDig() - 1;
		while (arr[i] == 0)
		{
			i--;
		}
		i = arr.size() - 1;
		while(true)
		{
			if (arr[i] == 0)
			{
				arr.pop_back();
				i--;
			}
			else
			{
				break;
			}
		}
		c.digits.clear();
		c.digits = arr;
		c.mSign = c.SISPoz;
		if(a.mSign == a.SISNeg && b.mSign != a.SISNeg)
		{
			c.mSign = c.SISNeg;
		}
		if(a.mSign != a.SISNeg && b.mSign == a.SISNeg)
		{
			c.mSign = c.SISNeg;
		}
		if(a.mSign == a.SISNeg && b.mSign == a.SISNeg)
		{
			c.mSign = c.SISPoz;
		}
	}
	return c;
}

LongInt Add(LongInt a, LongInt b)
{
	LongInt c = LongInt();
	if(a.mSign != a.SISNeg && b.mSign != a.SISNeg)
	{
		if(a.GetNumbDig() <= b.GetNumbDig())
		{
			LongInt temp = a;
			a = b;
			b = temp;
		}

		vector<unsigned int> arr;
		arr.clear();
		int k=0, i=0;
		//îñíîâà b
		int x = 10;

		arr.push_back((a.digits[i] + b.digits[i] + k) % x);
		((a.digits[i] + b.digits[i] + k) >= x) ? k=1 : k=0;

		while(true)
		{
			i += 1;
			if(i < b.GetNumbDig())
			{
				arr.push_back((a.digits[i] + b.digits[i] + k) % x);
				((a.digits[i] + b.digits[i] + k) >= x) ? k=1 : k=0;
			}
			else
			{
				if (i >= a.GetNumbDig())
				{
					if(k == 0)
					{
						break;
					}
					arr.push_back(k);
					//arr[a.GetNumbDig()] = k;
					break;
				}

				arr.push_back((a.digits[i] + k) % x);
				((a.digits[i] + k) >= x) ? k=1 : k=0;
			}
		}
		c.mSign = c.SISPoz;
		c.digits.clear();
		c.digits = arr;
	}
	else
	{
		if(a.mSign == a.SISNeg && b.mSign != a.SISNeg)
		{
			a.mSign = a.SISPoz;
			c = Sub(b, a);
		}
		if(a.mSign != a.SISNeg && b.mSign == a.SISNeg)
		{
			b.mSign = b.SISPoz;
			c = Sub(a, b);
		}
		if(a.mSign == a.SISNeg && b.mSign == a.SISNeg)
		{
			a.mSign = a.SISPoz;
			b.mSign = b.SISPoz;
			c = Add(a, b);
			c.mSign = c.SISNeg;
		}
	}
	return c;
}

LongInt Sub(LongInt a, LongInt b)
{
	LongInt c = LongInt();
	a.DelNull();
	b.DelNull();
	if (b.mSign == b.SISZer)
	{
		c = a;
		return c;
	}
	if(a.mSign != a.SISNeg && b.mSign != a.SISNeg)
	{
		if(a < b)
		{
			c = Sub(b, a);
			c.mSign = c.SISNeg;
		}
		if(a == b)
		{
			c.MakeNull();
		}
		if(a > b)
		{
			
			vector<unsigned int> arr;
			for (int i = 0; i < a.GetNumbDig(); i++)
			{
				arr.push_back(0);
			}
			int i=0, k=0;
			//îñíîâà b
			int x = 10;

			arr[i] = (a.digits[i] - b.digits[i] + k + x) % x;
			(a.digits[i] < b.digits[i] - k) ? k=-1 : k=0;

			while(true)
			{
				i += 1;
				if(i < b.GetNumbDig())
				{
					arr[i] = (a.digits[i] - b.digits[i] + k + x) % x;
					(a.digits[i] < b.digits[i] - k) ? k=-1 : k=0;
				}
				else
				{
					if (i >= a.GetNumbDig())
					{
						while(arr[i-1] == 0)
						{
							i -= 1;
						}
						break;
					}

					arr[i] = (a.digits[i] + k + x) % x;
					(a.digits[i] < -k) ? k=-1 : k=0;
				}
			}
			i = arr.size() - 1;
			while(true)
			{
				if (arr[i] == 0)
				{
					arr.pop_back();
					i--;
				}
				else
				{
					break;
				}
			}
			c.mSign = c.SISPoz;
			c.digits.clear();
			c.digits = arr;
		}
	}
	else
	{
		if(a.mSign == a.SISNeg && b.mSign != a.SISNeg)
		{
			a.mSign = a.SISPoz;
			c = Add(a, b);
			c.mSign = c.SISNeg;
		}
		if(a.mSign != a.SISNeg && b.mSign == a.SISNeg)
		{
			b.mSign = b.SISPoz;
			c = Add(a, b);
		}
		if(a.mSign == a.SISNeg && b.mSign == a.SISNeg)
		{
			a.mSign = a.SISPoz;
			b.mSign = b.SISPoz;
			c = Sub(b, a);
		}
	}
	return c;
}

LongInt NSD(LongInt n, LongInt m)
{
	while (n != m)
	{
		if (n > m)
		{
			n = n - m;
		}
		else
		{
			m = m - n;
		}
	}
	return n;
}

bool IsCoprime(LongInt a, LongInt b)
{
	return (NSD(a, b) == 1)?true:false;
}