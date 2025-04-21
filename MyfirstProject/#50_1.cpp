// Example program
#include <iostream>
#include <string>

using namespace std;


int Readinput()
{
	int input;
	cout << "Please enter your PIN: ";
	cin >> input;
	return input;
}

void yourBalance(int balance)
{
	cout << "Your Balance is: " << balance << endl;
}

void validatePIN()
{
	int balance = 7500;
	int correctPIN = 1234;
	int counter = 0;


	while (counter < 3)
	{
		if (Readinput() != correctPIN)
		{

			counter++;
			if (counter >= 3)
			{
				cout << "Card locked" << endl;
				return;
			}
			cout << "Wrong PIN" << endl;

		}
		else
		{
			yourBalance(balance);
			return;

		}


	}


}


int main()
{
	validatePIN();
}