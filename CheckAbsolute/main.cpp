#include <iostream>

using namespace std;

int CalculateABS(int a, int b)
{
	return abs(a - b);
}
int main()
{
	int a;
	int b;

	cout << "Type in your first value: ";

	cin >> a;

	cout << "Type in your second value: ";
	
	cin >> b;

	cout << "The absolute value is: " << CalculateABS(a,b);

	return 0;
}