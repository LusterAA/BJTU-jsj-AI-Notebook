#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[21] = { 0 };
	int n;
	int count = 0;
	while (scanf("%d", &n) == 1)
	{
		arr[n]++;
		count++;
	}
	printf("%d\n", count);
	for (int i = 0; i < 21; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
