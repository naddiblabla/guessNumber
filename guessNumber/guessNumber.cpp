#include <iostream>
//#include <string>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0));  // Initialize random number generator.
	int randomNumber = (rand() % 10) + 1;  // Random number 1-10
	cout << "I've come up with a number 1-10. Your job is to guess which number it is. Good luck!\n";
	
	int guessedNumber = 0;
	while (guessedNumber != randomNumber)
	{
		if (cin >> guessedNumber && guessedNumber > 0)
		{
			if (guessedNumber < randomNumber) cout << "Too low, try again.\n";
			else if (guessedNumber > randomNumber) cout << "Too high, try again.\n";
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Try a number.\n";
		}
	}
	cout << "You're right! The number is " << randomNumber << ".";
}
