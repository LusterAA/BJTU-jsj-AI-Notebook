#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int arr1[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}