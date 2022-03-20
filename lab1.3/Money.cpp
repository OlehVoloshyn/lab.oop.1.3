#include "Money.h"
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

void Money::SetUah(long value)
{
	uah = value;
}

void Money::SetCoin(unsigned int value)
{
	coin = value;
}

void Money::Init(long x, unsigned int y)
{
	uah = x;
	coin = y;
}

void Money::Read()
{
	long x;
	unsigned int y;
	cout << "Input suma :" << endl;
	cout << "UAH ="; cin >> x;
	cout << "Coin ="; cin >> y;
	Init(x, y);
}

void Money::Display()const
{
	cout << endl;
	cout << uah << "," << coin << endl;
	//cout << " UAH = " << uah << endl;
	//cout << " Coin = " << coin << endl;

}

const char* Money::toString() const
{
	stringstream sout; 
	sout << uah << " , " << coin << endl; 
	return sout.str().c_str(); 
}

Money Add(Money l, Money r)
{
	Money t;

	t.uah = l.uah + r.uah + floor((l.coin + r.coin) / 100);

	t.coin = (l.coin + r.coin) % 100;

	return t;
}

Money Div(Money l, Money r)
{
	Money t;
	if (r.uah != 0 && r.coin != 0)
	{
		t.uah = l.uah / r.uah;

		t.coin = l.coin / r.coin;
	}
	return t;
}

Money DivD(Money l, double dr)
{
	Money t;
	if (dr != 0)
	{
		t.uah = l.uah / dr;

		t.coin = l.coin / dr;
	}
	return t;
}