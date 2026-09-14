#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("0");
	else
	{
		double d;
		d = b * b - 4 * a * c;

		if (d < 0)
			printf("-1");
		else
		{
			double x1, x2;
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("x1=%.2lf\nx2=%.2lf", x1, x2);

		}
	}
	return 0;

}