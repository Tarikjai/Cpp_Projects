// Example program
#include <iostream>
#include <string>

using namespace std;

struct strInfo {
	string FirstName;
	string LastName;
	int Age;
	int Phone;
};

void readInfo(strInfo& info)
{
	cout << "Please insert your First Name: ";
	cin >> info.FirstName;
	cout << "Please insert your Last Name: ";
	cin >> info.LastName;
	cout << "Please insert your Age : ";
	cin >> info.Age;
	cout << "Please insert your Phone Number: ";
	cin >> info.Phone;
}

void printInfo(strInfo info)
{
	cout << "\n**************************\n";
	cout << "First Name: " << info.FirstName << endl;
	cout << "Last Name: " << info.LastName << endl;
	cout << "Age: " << info.Age << endl;
	cout << "Phone Number: " << info.Phone << endl;
	cout << "**************************\n";
}

void readAll(strInfo Person[2])
{
	readInfo(Person[0]);
	readInfo(Person[1]);
}

void printAll(strInfo Person[2])
{
	printInfo(Person[0]);
	printInfo(Person[1]);
}

int main()
{
	strInfo Person[2];
	readAll(Person);
	printAll(Person);
}