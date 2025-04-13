// #32
#include <iostream>
#include <string>

using namespace std;

int inputN()
{
	int inputN;
	cout << "Please insert the N: ";
	cin >> inputN;
	return inputN;
}

int inputM()
{
	int  inputM;
	cout << "Please insert the M: ";
	cin >> inputM;
	return inputM;
}

void theLoop()
{
	int N = inputN();
	int M = inputM();

	int P = 1;
	int counter = 0;

	if (M == 0)
	{
		M += 1;
		P = P * N;
		cout << P << endl;
	}


	else {

		for (int i = 1; M > counter; i++)
		{

			P = P * N;
			counter = counter + 1;


		};
		cout << P << endl;

	}




}

int main()
{
	theLoop();
}