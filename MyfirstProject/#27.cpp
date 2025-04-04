// #27
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


	for (int i = inputValue(); i >= 1; i--)
	{
		cout << i << endl;
	};
}


int main()
{
	theLoop();
}
