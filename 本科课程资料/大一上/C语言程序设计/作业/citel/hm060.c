#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long tonggou(long long x)
{
	long long y = x * x;
	long long w = 1;
	int t = x, k = 1;
	while (t)
	{
		k *= 10;
		t /= 10;
	}
	w = (long long)y % k;
	return w;
}


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
		if (i < 4)
			continue;
		long long k = tonggou(i);
		if (k == i)
			printf("%d ",i);
	
	}
	return 0;
}
