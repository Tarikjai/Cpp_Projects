// #49
#include <iostream>
#include <string>

using namespace std;


void result(int input)
{
	int PIN = 1234;

	if (input == PIN)
	{
		cout << "Your Balance is: 7500 ";
	}
	else {
		cout << "Wrong PIN";
	}
}

int main()
{
	int input;


	cout << "Please enter your PIN: ";
	cin >> input;


	result(input);


}