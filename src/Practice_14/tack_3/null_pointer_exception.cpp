#include <iostream>
#include <exception>
#include <set>

using namespace std;
int findItem(std::set<int> set, int item)
{
	if (set.empty())
	{
		throw runtime_error("Set is empty!");
	}
	for (int i : set)
	{
		if (i == item) 
		{
			return i;
		}
	}
	throw runtime_error("Item is null");
}

int main()
{
	set<int> mas = {1, 2, 3, 4};
	int i;
	cin >> i;
	try {
		int res = findItem(mas, i);
		cout << res;
	}
	catch (runtime_error& e)
	{
		cout << "Exception! " << e.what();
	}
}