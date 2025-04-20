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
	int i = 1;

	while ( i <= input)
	{
		cout << i++ << endl;
	};
}


int main()
{
	theLoop();
}
