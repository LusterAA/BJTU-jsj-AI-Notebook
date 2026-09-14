#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double genhao(int n, int a)
{
	if (n == 1)
	{
		return 1.0;
	}
	else
	{
		double prev = genhao(n - 1, a);
		return (prev + a / prev) / 2;
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%.3lf", genhao(100, N));
	return 0;
}