#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	scanf("%d", &i);
	printf("%d ", i);
	while (i != 1)
	{
		if (i % 2 == 0)
		{
			i = i / 2;
			printf("%d ", i);
		}
		else
		{
			i = i * 3 + 1;
			printf("%d ", i);
		}
	}
	return 0;
}