// #26
#include <iostream>
#include <string>

using namespace std;


int inputValue()
{
	int  input;
	cout << "Please insert the number: ";
	cin >> input;
	return input;

}




void theLoop()
{
	int input = inputValue();

	int counter = input - 1;
	int factorial = input * counter;



	for (int i = input; i > 2; i--)
	{



		counter -= 1;
		factorial = factorial * counter;

	};
	cout << factorial << endl;
}


int main()
{
	theLoop();
}