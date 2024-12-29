// #33
#include <iostream>
#include <string>

using namespace std;


void result(int input)
{


	if (input > 1000000)
	{
		cout << (input * 1 / 100) << "%";
	}
	else if (input > 500000 && input < 1000000) {
		cout << (input * 2 / 100) << "%";
	}
	else if (input > 100000 && input < 500000) {
		cout << (input * 3 / 100) << "%";
	}
	else if (input > 50000 && input < 100000) {
		cout << (input * 5 / 100) << "%";
	}
	else {
		cout << (input * 0 / 100) << "%";
	}
}

int main()
{
	int input;


	cout << "Please enter your grade: ";
	cin >> input;


	result(input);


}