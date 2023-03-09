#include <iostream>
#include <math.h>

class rational
{
public:
	rational(int a1, int b1);
	rational();
	void set(int a1, int b1);
	void show();
private:
	int a, b;
};