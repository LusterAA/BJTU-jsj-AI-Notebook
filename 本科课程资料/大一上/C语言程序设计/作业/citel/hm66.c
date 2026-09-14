#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m, s, n;
	scanf("%d %d %d", &m, &s, &n);
	int num = 0;
	for (int a = m; 1; a++)
	{
		for (int b = s; b <= 9; b++)
		{
			printf("%d*%d=%d\n", a, b, a * b);
			num++;
			if (num == n)
				goto out;
		}
	}
	out:
	return 0;
}