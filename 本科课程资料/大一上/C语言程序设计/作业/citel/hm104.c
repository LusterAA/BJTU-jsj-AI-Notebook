#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c;
	int flag = 0;
	int count = 0;
	while (scanf("%c", &c) == 1)
	{
		if (c != ' ')
		{
			flag = 1;
		}
		else
		{
			if (flag)
			{
				count++;
				flag = 0;
			}
		}
	}
	if (flag)
	{
		count++;
	}
	printf("%d", count);
	return 0;
}