#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float x;
	scanf("%f", &x);
	if (x >= 90)
		printf("A");
	else if (x >= 80)
		printf("B");
	else if (x >= 70)
		printf("C");
	else if (x >= 60)
		printf("D");
	else
		printf("E");
	return 0;


}