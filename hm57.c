#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	int c;
	if (b % a == 0)
	{
		b = b / a;
		a = 1;
		printf("%d/%d", a, b);
	}
	else
	{
		while (1)
		{
			c = b / a + 1;
			a = a * c - b;
			b = b * c;
			printf("%d/%d", 1, c);
			printf("+");
			if (b % a == 0)
			{
				b = b / a;
				a = 1;
				printf("%d/%d", a, b);
				break;
			}
		}
	}
	return 0;
}
