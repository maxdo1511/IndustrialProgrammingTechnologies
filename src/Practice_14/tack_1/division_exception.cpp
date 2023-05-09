#include <iostream>
#include <exception>

using namespace std;
int divison(int a, int b)
{
	if (b == 0)
	{
		throw runtime_error("Math error: cannot be divided by zero");
	}
	return a / b;
}

int main()
{
	int vareable;
	int div;
	cin >> vareable;
	cin >> div;
	try {
		int res = divison(vareable, div);
		cout << vareable << " / " << div << " = " << res;
	}
	catch (runtime_error& e)
	{
		cout << "Exception! " << e.what();
	}
}
