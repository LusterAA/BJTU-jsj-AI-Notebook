#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m;
	scanf("%d", &m);
	switch (m)
	{
	case 5:
		printf("A");
		break;
	case 4:
		printf("B");
		break;
	case 3:
		printf("C");
		break;
	case 2:
		printf("D");
		break;
	case 1:
		printf("E");
		break;
	}
	return 0;
}