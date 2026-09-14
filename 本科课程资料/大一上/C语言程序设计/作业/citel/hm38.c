#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double x, a, b, c, d, m;
	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
	m = a * x * x * x + b * x * x + c * x + d;
	printf("%.7lf", m);
	return 0;


}