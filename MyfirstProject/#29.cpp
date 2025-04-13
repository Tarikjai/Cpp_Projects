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
	for (int i = 1; i <= input; i++)
	{
		if (i % 2 == 0)
		{

			counter += i;
			cout << counter << endl;
		}
	};

}


int main()
{
	theLoop();
}