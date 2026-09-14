#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int num;
	scanf("%d",&num);
	printf("%d %d %d", num / 100, num / 10 % 10, num % 10);
	return 0;

}