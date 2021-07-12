#include <stdio.h>
#include <iostream>
using namespace std;
#define USINGSORT

#ifdef BUBBLESORT
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
#endif // BUBBLESORT

#ifdef USINGSORT
#include <algorithm>
int main()
{
	int count;
	scanf("%d", &count);
	int* arr = new int[count];

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + count);

	for (int i = 0; i < count; i++)
	{
		printf("%d\n", arr[i]);
	}

}
#endif // USINGSORT
