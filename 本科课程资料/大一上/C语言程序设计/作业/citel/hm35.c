#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double d;
	d = (a + b + c) / 2;
	printf("area=%.2lf", sqrt(d * (d - a) * (d - b) * (d - c)));
	return 0;
}