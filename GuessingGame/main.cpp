#include <iostream>
using namespace std;

string GetReply(string reply)
{
	cout << "Play again? y/n\n";
	cin >> reply;
	return reply;
}
void game()
{
	int minimum;
	int maximum;
	int randomNumber;
	int answer;
	int guesses = 0;
	string reply;
	bool waitForReply = true;
	bool hasWon = false;

	cout << "What is the minimum number?\n";
	cin >> answer;
	minimum = answer;
	cout << "What is the maximum number?\n";
	cin >> answer;
	maximum = answer;
	srand((unsigned)time(0));
	randomNumber = (rand() % maximum) + minimum;

	cout << "Enter your guess: ";
	cin >> answer;
	guesses++;
	while (answer != randomNumber)
	{
			cout << "Wrong number\n";
			cin >> answer;
			guesses++;
	}
	cout << "Congratulations! You guessed the number! It took you " << guesses << " tries to figure it out." << endl;


	reply = GetReply(reply);

	do {
		if (reply == "y")
		{

			game();
		}
		else if (reply == "n")
		{
			exit(0);
		}
		else
		{
			cout << "Invalid reply" << endl;
			reply = GetReply(reply);
		}

	} while (reply != "y" || reply != "n");


}

int main()
{
	game();
	return 0;
}