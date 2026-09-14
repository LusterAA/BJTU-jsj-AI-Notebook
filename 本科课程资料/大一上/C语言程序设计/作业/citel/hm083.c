#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n][n];
	for (int i = 0; i < n; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (int j = 2; j < n; j++)
	{
		for (int k = 1; k < j ; k++)
		{
			arr[j][k] = arr[j - 1][k - 1] + arr[j - 1][k];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}