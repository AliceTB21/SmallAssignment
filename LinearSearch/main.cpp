#include <iostream>

using namespace std;

int searchArray(int collection[], int numberToFind)
{
	int foundSpot = -1;
	for (int i = 0; i < sizeof(collection); i++)
	{
		if (collection[i] == numberToFind)
		{
			foundSpot = i;
		}
	}
	return foundSpot;
}
int main()
{
	int collection[5] = {5,20,59,40,68};
	int reply;
	cout << "Type number to search for: ";
	cin >> reply;
	if (searchArray(collection, reply) == -1)
	{
		cout << "Number " << reply << " was not found in the collection and returned -1";
	}
	else
	{
		cout << "Number " << reply << " was found at spot " << searchArray(collection, reply);
	}

	return 0;
}