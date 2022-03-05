#include <iostream>
using namespace std;

int main()
{
	string input;
	bool waiting = false;
	cout << "Enter a number" << endl;
	cin >> input;
	while (!waiting)
	{
		if (isdigit(input.back()))
		{
			cout << "Last character is the number: " << input.back() << endl;
		}
		else
		{
			cout << "Last character is not a number\n";
		}

		for (int i = 0; i < input.length(); i++)
		{
			if (isdigit(input[i]))
			{
				cout << input[i];
			}
		}
		cout << endl;

		for (int i = input.length(); i >= 0; i--)
		{
			if (isdigit(input[i]))
			{
				cout << input[i];
			}
		}
		cout << endl;
		cout << "Enter another number to continue or q to quit\n";
		cin >> input;

		if (input == "q")
		{
			exit(0);
		}
	}

	return 0;
}