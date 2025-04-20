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

	int i = inputValue();;

	while (i >= 1)
	{
		cout << i-- << endl;
	};
}


int main()
{
	theLoop();
}
