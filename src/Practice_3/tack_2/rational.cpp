#include "rational.h"


rational::rational(int a1, int b1)
{
	if (b1 == 0)
	{
		throw 0;
	}
	int x=a1, y=b1;
	while (y != 0)
	{
		int temp = x;
		x = y;
		y = temp % y;
	}
	int nod = x;

	a1 %= b1;
	a = a1/nod;
	b = b1/nod;
}

rational::rational()
{
	
}

void rational::set(int a1, int b1)
{
	*this = rational(a1, b1);
}

void rational::show()
{
	std::cout << a << "/" << b << std::endl;
}