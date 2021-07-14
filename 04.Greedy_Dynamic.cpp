#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000][3] = { 0, };
#define DYNAMIC
// dynamic
#ifdef DYNAMIC


int main()
{
	int count;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
		cout << endl;
	}
	
	for (int i = count-2; i >= 0; i--)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = arr[i][j] + min(arr[i + 1][(j + 1) % 3], arr[i + 1][(j + 2) % 3]);
		}
	}

	cout << endl;

	int min = arr[0][0];
	for (int i = 1; i < 3; i++)
	{
		if (min > arr[0][i])
			min = arr[0][i];
	}
	cout << min;
}
#endif
#ifdef GREEDY

int main()
{
	int N;
	cin >> N;
	int minimum = 999;
	int minsum = 0;
	int index = 0;
	int arr[3] = { 0, };
	for (int i = 0; i < N; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf_s("%d", &arr[i]);
		}printf("\n");
		
		minimum = 1000;

		for (int j = 0; j < 3; j++)
		{
			if (i == 0)
			{
				if (minimum > arr[j])
				{
					minimum = arr[j];
					index = j;
				}
			}
			else
			{
				if (minimum > arr[j] &&  j != index)
				{
					minimum = arr[j];
					index = j;
				}
			}
		}		
		minsum += minimum;
	}
	printf("%d", minsum);
}
#endif