// #36
#include <iostream>
#include <string>

using namespace std;


void result(double Number1, double Number2, string OperationType)
{


	if (OperationType == "+")
	{
		cout << Number1 + Number2;
	}
	else if (OperationType == "-")
	{
		cout << Number1 - Number2;
	}
	else if (OperationType == "*")
	{
		cout << Number1 * Number2;
	}
	else if (OperationType == "/")
	{
		cout << Number1 / Number2;
	}
}

int main()
{
	double Number1;
	double Number2;
	string OperationType;


	cout << "Please enter your Number1: ";
	cin >> Number1;
	cout << "Please enter your Number1: ";
	cin >> Number2;
	cout << "Please enter your OperationType: ";
	cin >> OperationType;


	result(Number1, Number2, OperationType);


}