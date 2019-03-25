#include <iostream>
#include <string>

using namespace std;
int main()
{
	int randomNumber = rand() % 10;  //random number 0-9
	cout << "I've come up with a number 0-9. Your job is to guess which number it is. Good luck!\n";
	int guessedNumber = 10;
	while (guessedNumber != randomNumber)
	{
		cin >> guessedNumber;
		if (guessedNumber != randomNumber) cout << "Try again.\n";
	}
	cout << "You're right! The number is " << randomNumber << ".";
}
