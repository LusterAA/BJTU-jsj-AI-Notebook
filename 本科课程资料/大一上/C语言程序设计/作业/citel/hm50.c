#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	long long m = 1;
	scanf("%d", &i);

	for (;i; i = i - 1)
		m = m * i;
	printf("%lld", m);
	return 0;
}