// #27
#include <iostream>
#include <string>

using namespace std;


int inputValue()
{
	int  input;
	cout << "Please insert a number: ";
	cin >> input;
	return input;
	   
}

void theLoop()
{
	int input = inputValue();

	for (int i = input; i >= 1 ; i--)
	{
		cout << i << endl;
	};
}
 

int main()
{ 
	theLoop();
}