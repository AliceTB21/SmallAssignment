#include <iostream>

using namespace std;

float CalculateFahrenheit(float a)
{
	return a * 9 / 5 + 32;
}

int main()
{
	float a;
	cout << "Type in the value you want converted" << endl;
	cin >> a;
	cout << a << "C is " << CalculateFahrenheit(a) << "F";

	return 0;
}

