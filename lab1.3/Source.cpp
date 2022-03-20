#include <iostream>
#include "Money.h"
using namespace std;
int main()
{
	Money a,b,c,d,f;
	double dr;
	

	a.Read();
	b.Read();

	c = Add(a, b);
	c.Display();
	
	d = Div(a, b);
	d.Display();

	cout << "drib ="; cin >> dr;
	f = DivD(a, dr);
	f.Display();

	return 0;
	
}