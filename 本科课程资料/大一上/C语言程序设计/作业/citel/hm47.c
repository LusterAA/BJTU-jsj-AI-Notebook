#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char m;
	scanf("%c", &m);
	switch (m)
	{
	case 65:
		printf("Very good!");
		break;
	case 66:
		printf("Good!");
		break;
	case 67:
		printf("OK!");
		break;
	case 68:
		printf("Bad!");
		break;
	case 69:
		printf("Too bad!");
		break;

	}
	return 0;
}