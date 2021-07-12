#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	int* arr = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> arr[i];
	}

	int index = 0;
	for (int i = 0; i < count; i++)
	{
		for (int i = index+1; i < count; i++)
		{
			if (arr[index] > arr[i])
			{
				int temp = arr[index];
				arr[index] = arr[i];
				arr[i] = temp;
			}
		}
		index++;
	}

	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << endl;
	}
}