#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c;
	int Bletter = 0;
	int Sletter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	while (scanf("%c", &c) == 1)
	{
		if ((c >= 'A' && c <= 'Z'))
		{
			Bletter++;
		}
		else if ((c >= 'a' && c <= 'z'))
		{
			Sletter++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;
		}
		else if (c == '\n')
		{
			continue;
		}
		else
		{
			other++;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d", Bletter, Sletter, digit, space, other);
	return 0;
}