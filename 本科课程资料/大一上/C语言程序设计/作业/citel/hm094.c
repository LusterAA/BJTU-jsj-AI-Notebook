#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void water(int i)
{
	int a = i / 100;
	int b = i / 10 - a * 10;
	int c = i % 10;
	if (a* a* a + b * b * b + c * c * c == i)
	{
		printf("%d ", i);
	}
}

int main()
{
	long long N = 0;
	scanf("%lld", &N);
	if (N > 99 && N < 1000)
	{
		for (int i = 100; i <= N; i++)
		{
			water(i);
		}
	}
	else if(N>=1000)
	{
		for (int i = 100; i < 1000; i++)
		{
			water(i);
		}
	}
	return 0;
}