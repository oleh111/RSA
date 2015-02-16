#include <string>
#include "RSA.h"

RSA::RSA()
{
	
}

RSA::RSA(string _n, string _e, string _d)
{
	n.FromText(_n);
	e.FromText(_e);
	d.FromText(_d);
}

RSA::RSA(int Count)
{
	LongInt p, q;
	p.GenSimpleNumb(Count/8);
	q.GenSimpleNumb(Count/8);

	n = p * q;

	LongInt fn;
	fn = (p - 1) * (q - 1);

	GenE(Count/4, fn);
	GenD(Count/4, fn);
}

void RSA::GenE(int Count, LongInt fn)
{
	LongInt e;
	e.MakeRand(true, Count);
	e.SetPoz();
	while (!IsCoprime(e, fn))
	{
		e.MakeRand(true, Count);
		e.SetPoz();
	}
	this->e = e;
}

void RSA::GenD(int Count, LongInt fn)
{
	LongInt d;
	LongInt matrix[2][2] = {{1, 0}, {0, 1}}, m2[2][2] = {{1, 0}, {0, 1}};
	/*
    matrix[0] = new LongInt[2];
    matrix[1] = new LongInt[2];

    matrix[0][0] = 1;
    matrix[0][1] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = 1;*/

    //m2 = matrix;

	LongInt a = e, fin = fn;
    while (true)
    {
        LongInt _r = LongInt();
        _r = a % fin;

        if (_r != 0)
        {
			LongInt q = a / fin;
            m2[0][0] = matrix[0][1];
            m2[0][1] = matrix[0][0] + (matrix[0][1] * -q);
            m2[1][0] = matrix[1][1];
            m2[1][1] = matrix[1][0] + (matrix[1][1] * -q);
           
			matrix[0][0] = m2[0][0];
			matrix[0][1] = m2[0][1];
			matrix[1][0] = m2[1][0];
			matrix[1][1] = m2[1][1];
        }
        else
        {
            d = matrix[0][1];
			d.SetPoz();
			if (MulMod(e, d, fn) != 1)
			{
				GenE(Count, fn);
				GenD(Count, fn);
			}
			else
			{
				this->d = d;
			}
            return;
        }
        a = fin;
        fin = _r;
    }
}

string RSA::Encrypt(string text, bool isNumber)
{
	LongInt txt;
	if (isNumber)
	{
		txt.FromText(text);
	}
	else
	{
		txt.FromText( Encryption(text));
	}

	//якщо текст довший за ключ тоді розбиваємо текст на блоки довжиною рівною довжині ключа
	/*LongInt result;
	if (txt >= n)
	{
		string res = "", temp;
		for (int i = 0; i < txt.GetNumbDig() / (n.GetNumbDig() - 1); i++)
		{
			res += temp.assign(txt.ToString(), (n.GetNumbDig() - 1)*i, n.GetNumbDig() - 1);
		}
		if (txt.GetNumbDig() % (n.GetNumbDig() - 1) > 0)
		{
			res += temp.assign(txt.ToString(), (txt.GetNumbDig() - 1) - (txt.GetNumbDig() % (n.GetNumbDig() - 1)), (txt.GetNumbDig() % (n.GetNumbDig() - 1)));
		}
		result.FromText(res);
	}
	else
	{
		result = PowMod(txt, e, n);
	}*/

	txt = PowMod(txt, e, n);

	return txt.ToString();
}

string RSA::Decrypt(string text, bool isNumber)
{
	LongInt txt;
	txt.FromText(text);

	txt = PowMod(txt, d, n);
	if (isNumber)
	{
		return txt.ToString();
	}
	else
	{
		return Decryption( txt.ToString());
	}
}

string RSA::Encryption(string str)
{
    string encRes = "";
	vector<int> enc;
	enc.clear();
	for (unsigned int i(0); i < str.length(); i++)
		enc.push_back(str[i]);

	encRes += to_string(enc[0]);
	for (int i = 1; i < enc.size(); i++)
	{
		if (str[i]<10)
		{
			encRes += "00" + to_string(enc[i]);
			continue;
		}
		if (str[i]<100)
		{
			encRes += "0" + to_string(enc[i]);
			continue;
		}
		encRes += to_string(enc[i]);
	}

    return encRes;
}

string RSA::Decryption(string str)
{
    string dec("");
	string::iterator it=str.end();
	it--;
	for ( it; it!=str.begin();)
	{
		int dec_ = 0;
		for (int i = 0; i < 3; i++)
		{
			dec_ += (*it - '0') * pow(10, i);
			if (it == str.begin())
			{
				break;
			}
			--it;
		}
		dec.insert(dec.begin(), dec_);
	}
    return dec;
}