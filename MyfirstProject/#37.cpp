// #37
#include <iostream>
#include <string>

using namespace std;


int readNumbers()
{
	int number;
	cout << "Please enter a number: " << endl;
	cin >> number;

	return number;
}


void  calculate()
{
	int sum = 0;
	int newNumber = 0;

	while (true)
	{
		newNumber = readNumbers();

		if (newNumber == -99)
			break;


		sum += newNumber;

	}
	cout << sum << endl;
}


int main()
{

	calculate();
}