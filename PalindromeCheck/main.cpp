#include <iostream>
using namespace std;

bool CheckPalindrome(string word)
{
	bool isPalindrome = false;
	string reverseWord = word;
	reverse(word.begin(), word.end());
	if (word == reverseWord)
	{
		isPalindrome = true;
	}
	return isPalindrome;
}
int main()
{
	string input;
	cout << "Enter a word to check if it is a palindrome" << endl;
	cin >> input;

	if (CheckPalindrome(input))
	{
		cout << input << " is a palindrome";
	}
	else
	{
		cout << input << " is not a palindrome";
	}

	return 0;
}