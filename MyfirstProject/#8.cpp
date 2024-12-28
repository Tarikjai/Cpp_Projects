// #8
#include <iostream>
#include <string>

using namespace std;


void result(int Mark)
	{
		if (Mark >= 50)
		{
			cout << "Pass";
		}
		else {
			cout << "Fail";
		}
	}

int main()
{
	int Mark;

	cout << "Please enter your Makr: ";
	cin >> Mark;
	result(Mark);


}