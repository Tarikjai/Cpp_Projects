// #24
#include <iostream>
#include <string>

using namespace std;


void result(double Age)
{


	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid ";
	}
	else {
		cout << "InValid ";
	}
}

int main()
{
	double Age;


	cout << "Please enter Age: ";
	cin >> Age;


	result(Age);


}