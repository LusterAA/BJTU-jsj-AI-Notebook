#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N;i++)
	{
		for (int q = N - i; q > 0; q--)
		{
			printf(" ");
		}
		for (int w=1;w<=2*i-1;w++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}