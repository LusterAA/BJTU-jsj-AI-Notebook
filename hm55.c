#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int t;
		t = a;
		a = b;
		b = t;
	}
	int i = b;
	for (i; i > 0; i--)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
			{
				printf("%d ", i);
				break;
			}
		}
	}
	int m = a;
	for (m; m <= (a * b); m++)
	{
		if (m % b == 0)
		{
			if (m % a == 0)
			{
				printf("%d", m);
				break;
			}
		}
	}
	return 0;
}