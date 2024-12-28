// #11
#include <iostream>
#include <string>

using namespace std;


void result(double Mark1, double Mark2, double Mark3)
{
	float average = (Mark1 + Mark2 + Mark3) / 3;

	if (average >= 50)
	{
		cout << "Pass " << average;
	}
	else {
		cout << "Fail " << average;
	}
}

int main()
{
	double Mark1;
	double Mark2;
	double Mark3;

	cout << "Please enter mark1: ";
	cin >> Mark1;
	cout << "Please enter mark2: ";
	cin >> Mark2;
	cout << "Please enter mark3: ";
	cin >> Mark3;

	result(Mark1, Mark2, Mark3);


}