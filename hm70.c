#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

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
	if (m == 1)
		m = m + 1;
	for (int i = m; i <= n; i++)
	{	
		int j = 0;
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}