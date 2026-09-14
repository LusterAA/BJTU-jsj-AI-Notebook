#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a=0, b=0,c=0;
	for (a = 1; a < 100; a++)
	{
		scanf("%d", &b);
		c = c + b;
		if (b == 0)
			break;
	}
	printf("%d", c);
	return 0;
}