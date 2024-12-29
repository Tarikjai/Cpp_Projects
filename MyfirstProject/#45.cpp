// #45
#include <iostream>
#include <string>

using namespace std;


void result(string Month)
{


	if (Month == "1")
	{
		cout << "January";
	}
	else if (Month == "2")
	{
		cout << "February";
	}
	else if (Month == "3")
	{
		cout << "March";
	}
	else if (Month == "4")
	{
		cout << "April";
	}
	else if (Month == "5")
	{
		cout << "May";
	}
	else if (Month == "6")
	{
		cout << "June";
	}
	else if (Month == "7")
	{
		cout << "July";
	}
	else if (Month == "8")
	{
		cout << "July";
	}
	else if (Month == "9")
	{
		cout << "August";
	}
	else if (Month == "10")
	{
		cout << "October";
	}
	else if (Month == "11")
	{
		cout << "November";

	}
	else if (Month == "12")
	{
		cout << "December";
	}
	else {
		cout << "Wrong Month";
	}
}

int main()
{
	string Month;



	cout << "Please enter your Month: ";
	cin >> Month;


	result(Month);


}