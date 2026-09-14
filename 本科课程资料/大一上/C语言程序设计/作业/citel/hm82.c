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
	int t = arr1[0][0];
	int x = 0, y = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][j] > t)
			{
				t = arr1[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d %d", t, x, y);
	return 0;
}