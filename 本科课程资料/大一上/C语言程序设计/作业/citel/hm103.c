#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c;
	int letter = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	while (scanf("%c", &c) == 1)
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			letter++;
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
			break;
		}
		else
		{
			other++;
		}
	}
	printf("letter=%d\nspace=%d\ndigit=%d\nother=%d", letter, space, digit, other);
	return 0;
}