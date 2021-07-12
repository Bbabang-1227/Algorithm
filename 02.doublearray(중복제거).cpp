#include <iostream>

using namespace std;
#ifdef DEBUG
int main()
{
	int arr[4][4] = { {-1,-1,-1,-1},{-1,-1,-1,-1},{-1,-1,-1,-1},{-1,-1,-1,-1} };
	int count = 0;
	srand(time(NULL));

	while (true)
	{
		int x = rand() % 4; // 0 1 2 3
		int y = rand() % 4; // 0 1 2 3
		if (arr[x][y] == 0)
		{
			arr[x][y] = count;
			count++;
		}
		if (count == 16)
			break;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

#endif // DEBUG
