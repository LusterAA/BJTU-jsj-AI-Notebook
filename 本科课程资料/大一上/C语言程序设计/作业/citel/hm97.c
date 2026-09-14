#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int t = 1;
	for (int i = 1; i <= b; i++)
	{
		t *= a;
		t %= 1000;
	}
	printf("%d", t);
	return 0;
}