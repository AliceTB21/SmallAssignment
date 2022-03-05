#include <iostream>
using namespace std;

bool CheckIfEvenOrOdd(int number)
{
	bool even = false;
	if (number % 2 == 0)
	{
		even = true;;
	}
	else if (number % 2 != 0)
	{
		even = false;
	}

	return even;
}

int main()
{
	int number;
	cout << "Enter a number\n";
	cin >> number;
	if (CheckIfEvenOrOdd(number))
	{
		cout << number << " is even";
	}
	else
	{
		cout << number << " is odd";
	}
	return 0;
}

