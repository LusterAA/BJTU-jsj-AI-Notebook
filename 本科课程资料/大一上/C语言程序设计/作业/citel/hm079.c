#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[10] = { 0 };//0 1 2 3 4 5 6 7 8 9
	int n;
	scanf("%d", &n);
	int t = 0;
	arr[0] = 1;
	for (int i = 2; i <= n; i++)
	{
		t = (t + i) % 10;
		arr[t] = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		if (!arr[i])
		{
			printf("%d ", i + 1);
		}
	}
	return 0;
}