//Example program
#include <iostream>
#include <string>

using namespace std;



void ReadNumber( )
{
	int sum = 0;
	for (int i = 1; i <=5; i++)
	{
		int input;
		

		cout << "input the number " << i <<" : ";
		cin >> input;

		if (input >= 50)
		{
			continue;
		}	
		sum += input;
		
	}
	cout << "The output is: " << sum;
}

int main()
{
	 
	ReadNumber();
}