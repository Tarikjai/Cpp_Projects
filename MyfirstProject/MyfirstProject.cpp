// Example program
#include <iostream>
#include <string>

using namespace std;
 



void ageDetect(int Age, string license)
{

	if (Age > 21 && license == "yes")
	{
		cout << "Hired";
	}
	else {
		cout << "Rejected";
	}
};
int main()
	{
	int Age;
	string license;

		cout << "Enter your age: ";
		cin >> Age;
		cout << "Do you have a driver License (yes/no): ";
		cin >> license;

		ageDetect(Age, license);

		return 0;

	}

