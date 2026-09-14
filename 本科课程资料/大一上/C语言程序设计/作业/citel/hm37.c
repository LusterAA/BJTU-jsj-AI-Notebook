#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a, b,c;
	scanf("%lf %lf", &a, &b);
	c = (b / a)*100;
	printf("%.3lf%%", c);
	return 0;

}