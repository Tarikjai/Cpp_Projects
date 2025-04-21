//Example program
#include <iostream>
#include <string>

using namespace std;

void searchNumber(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 20)
		{
			cout << "The number: " << arr[i] << " was found at position " << i << endl;
			break;
		}
	}
}

int main()
{
	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	searchNumber(arr);
}