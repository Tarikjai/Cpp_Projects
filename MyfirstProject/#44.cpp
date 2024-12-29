// #44
#include <iostream>
#include <string>

using namespace std;


void result(string Day)
{


	if (Day == "1")
	{
		cout << "Sunday";
	}
	else if (Day == "2")
	{
		cout << "Monday";
	}
	else if (Day == "3")
	{
		cout << "Tuesday";
	}
	else if (Day == "4")
	{
		cout << "Wednesday";
	}
	else if (Day == "5")
	{
		cout << "Thursday";
	}
	else if (Day == "6")
	{
		cout << "Friday";
	}
	else if (Day == "7")
	{
		cout << "Saturday";
	}
	else {
		cout << "Wrong Day";
	}
}

int main()
{
	string Day;



	cout << "Please enter your Day: ";
	cin >> Day;


	result(Day);


}