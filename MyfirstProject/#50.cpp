// Example program
#include <iostream>
#include <string>

using namespace std;


int ReadNumber(int from, int to)
{
	int Number;
	cout << "Please enter a number between " << from << " and " << to << endl;
	cin >> Number;

	while (Number <= from || Number >= to)
	{
		cout << "Please enter a number between " << from << " and " << to << endl;
		cin >> Number;
	}

	return Number;
}


int main()
{
	cout << "The number is: " << ReadNumber(3, 5);
}