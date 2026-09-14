#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

int main()
{
	double a, b, c;
	double m, n;
	double d;
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	m = (-b + sqrt(d)) / (2 * a);
	n = (-b - sqrt(d)) / (2 * a);
	printf("x1=%.2lf\nx2=%.2lf", m, n);
	return 0;
}