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
	cout << "Please insert your Phone Number: " ;
	cin >> info.Phone;
	cout << endl;
	 
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

void readAll(strInfo Person[100], int numberOfPersons)
{
	for (int i = 0; i <= numberOfPersons -1; i++)
	{
		readInfo(Person[i]);
	} 
}

void printAll(strInfo Person[100], int numberOfPersons)
{
 	for (int i = 0; i <= numberOfPersons -1; i++)
	{
		printInfo(Person[i]);
	}
}

int main()
{
	strInfo Person[100];
	int numberOfPersons = 3;

	readAll(Person, numberOfPersons);
	printAll(Person, numberOfPersons);
}