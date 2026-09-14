#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long peach(long long N)
{
	long long peach = 1;
	for (long long i = 2; i <= N; i++)
	{
		peach = (peach + 1) * 2;
	}
	return peach;
}

int main()
{
	long long N;
	scanf("%lld", &N);
	printf("%lld", peach(N));
	return 0;
}