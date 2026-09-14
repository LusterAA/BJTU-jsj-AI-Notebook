#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	long long num=0;
	scanf("%d", &n);
	for (long long i = 1; i <= n; i++)
	{
		num += i * i;
	}
	printf("%lld", num);
	return 0;
}