#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long count = 0;

void move(char A, char C)
{
	count++;
}

void han(int N, char A, char B, char C)
{
	if (N == 1) 
	{
		move(A, C);
	}
	else
	{
		han(N - 1, A, C, B);
		move(A, C);
		han(N - 1, B, A, C);
	}
}

int main()
{
	int N;
	scanf("%d", &N);
	han(N, 'A', 'B', 'C');
	printf("%lld", count);
	return 0;
}