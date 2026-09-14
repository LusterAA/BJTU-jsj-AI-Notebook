#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int t = N + 1;
	for (int i = 1; i <= N; i++)
	{
		t--;
		for (int q = N - i; q > 0; q--)
		{
			printf(" ");
		}
		for (int w = 1; w <= 2 * i - 1; w++)
		{
			printf("%d",t);
		}
		
		printf("\n");
	}

	for (int i = N - 1; i>0; i--)
	{
		t++;
		for (int q = N - i; q > 0; q--)
		{
			printf(" ");
		}
		for (int w = 1; w <= 2 * i - 1; w++)
		{
			printf("%d",t);
		}
		printf("\n");
	}
	return 0;
}