#include <stdio.h>
#include <iostream>
using namespace std;

#ifdef DEBUG
int main()
{
	int count;
	scanf_s("%d", &count);
	int* arrA = new int[count + 1]{ 0, };
	int* arrB = new int[count + 1]{ 0, };
	int max = 0;

	for (int i = 1; i <= count; i++)
	{
		scanf_s("%d", &arrA[i]);
		if (arrA[i] > max)
			max = arrA[i];
	}

	int* cnt = new int[max + 1]{ 0, };
	
	//count
	for (int i = 1; i <= count; i++)
	{
		cnt[arrA[i]] += 1;
	}

	//누적합
	for (int i = 0; i <= max; i++)
	{
		if (i > 0)
			cnt[i] = cnt[i - 1] + cnt[i];
	}
	//역순회
	for (int i = count; i >= 1; i--)
	{
		arrB[cnt[arrA[i]]] = arrA[i];
		cnt[arrA[i]] -= 1;
	}

	for (int i = 1; i <= count; i++)
	{
		printf("%d\n", arrB[i]);
	}
	delete[] arrA, arrB, cnt;
}
#endif // DEBUG

#include <stdio.h>
int main() {
	int N;
	int A;
	int count[10001];
	for (int i = 1; i <= 10000; i++) {
		count[i] = 0;
	}
	scanf_s("%d", &N);
	while (N > 0) {
		scanf_s("%d", &A);
		count[A]++;
		N--;
	}

	for (int i = 1; i <= 10000; i++) {
		while (count[i] > 0) {
			printf("%d\n", i);
			count[i]--;
		}
	}
}