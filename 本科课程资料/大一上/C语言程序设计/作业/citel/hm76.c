#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	long long fib[92];
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i <= 91; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int m, n;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		int t;
		t = m;
		m = n;
		n = t;
	}
	for (int t = n-1; t >= m - 1; t--)
	{
		if (t == m - 1)
		{
			printf("%lld", fib[t]);
		}
		else
			printf("%lld ", fib[t]);
	}
	return 0;
}