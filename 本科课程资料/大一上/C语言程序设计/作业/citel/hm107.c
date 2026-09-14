#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n][m];
	int count = 0;
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] != 0)
			{
				count++;
			}
		}
	}
	printf("%d %d %d\n", n, m, count);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] != 0)
			{
				printf("%d %d %d\n", i, j, arr[i][j]);
			}
		}
	}
	return 0;
}