#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double people(int x, int a, int y, int b);

int main()
{
	int a, b, x, y;
	double z;
	scanf("%d %d %d %d", &x, &a, &y, &b);

	z=people(x, a, y, b);
	printf("%.2lf", z);
	return 0;
}

double people(int x, int a, int y, int b)
{
	double z = (double)(y * b - x * a) / (b - a);
	return z;
}