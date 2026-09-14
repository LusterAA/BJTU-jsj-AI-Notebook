#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long fib(int k)
{
	if (k == 1)
		return 1;
	if (k == 2)
		return 1;
	if (k > 2)
	{
		return fib(k - 1) + fib(k - 2);
	}
}

int main()
{
	int k;
	scanf("%d", &k);
	printf("%d", fib(k));
	return 0;
}