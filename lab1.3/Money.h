#pragma once
#include <string> 
#include <sstream>
class Money
{
private:
	long uah;
	unsigned int coin;
public:
	long GetUah() const { return uah; }
	unsigned int GetCoin() const { return coin; }
	void SetUah(long value);
	void SetCoin(unsigned int value);


	friend Money Add(Money l, Money r);
	friend Money Div(Money l, Money r);
	friend Money DivD(Money l, double dr);

	void Init(long , unsigned int);
	void Read();
	void Display()const;
	const char* toString() const;
};

