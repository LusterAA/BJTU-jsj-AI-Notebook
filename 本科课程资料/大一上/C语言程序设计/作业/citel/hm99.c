#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int first = 1; 

void su(long long i)
{
	if (i <= 1)
	{
		return;
	}
	int q = 1;
	for (long long t = 2; t * t <= i; t++)
	{
		if (i % t == 0)
		{
			q = 0;
			break;
		}
	}
	if (q==1)
	{
		if (first) 
		{
			printf("%lld", i);
			first = 0; 
		}
		else 
		{
			printf(" %lld", i);
		}
	}
}
int main()
{
	long long M, N;
	scanf("%lld %lld", &M, &N);
	for (long long i = M; i <= N; i++)
	{
		su(i);
	}
	return 0;
}