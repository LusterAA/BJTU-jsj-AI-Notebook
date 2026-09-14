#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n+1];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int x;
	scanf("%d", &x);
	arr[n + 1] = x;
	int j;
	for (j = n; j >= 0; j--)
	{
		if (arr[j] > x)
		{
			arr[j + 1] = arr[j];
		}
		else
		{
			break;
		}
	}
	if (j != n)
	{
		arr[j + 1] = x;
	}
	for (int i = 0; i < n+1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}