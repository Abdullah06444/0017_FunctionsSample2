#include <iostream>
using namespace std;

int isPentagonal(int number)
{

	int i;
	for (i = 0; number > 0; i++)
		number -= 1+3*i;
	if (number == 0)
		return 1;
	return 0;
}

int main()
{

	int x;
	do
	{

		cin >> x;
		if (x > 0)
			if (isPentagonal(x))
				cout << x << " is a pentagonal number" << endl;
			else
				cout << x << " is NOT a pentagonal number" << endl;

	} while (x > 0);
}