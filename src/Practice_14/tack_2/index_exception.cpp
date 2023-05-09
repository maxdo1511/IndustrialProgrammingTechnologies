#include <iostream>
#include <exception>

using namespace std;

int getItem(int mas[], int index)
{
	if (index < 0)
	{
		throw runtime_error("Index error: cannot be < 0");
	}
	int size = std::size_t(mas);
	if (index >= size)
	{
		throw runtime_error("Index error: cannot be > size");
	}
	return mas[index];
}

int main()
{
	int mas[] = { 1, 2, 3, 5, 7 };
	int i;
	cin >> i;
	try {
		int res = getItem(mas, i);
		cout << res;
	}
	catch (runtime_error& e)
	{
		cout << "Exception! " << e.what();
	}
}