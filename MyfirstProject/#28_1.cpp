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
	int counter = 0;
	int i = 1;

	while (i <= input)
	{

		if (i % 2 == 1)
		{

			counter += i;

		}
		i++;
	};
	cout << counter << endl;
}

int main()
{
	theLoop();
}