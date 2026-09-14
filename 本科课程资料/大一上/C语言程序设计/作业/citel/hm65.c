#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		int t;
		t = m;
		m = n;
		n = t;
	}
	for (int i = m; i <= n; i++)
	{
		if (i % 3 != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}