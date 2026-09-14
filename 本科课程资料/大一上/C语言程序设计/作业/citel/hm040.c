#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double f, c;
	scanf("%lf", &f);

	c = 5 * (f - 32) / 9;

	printf("%.5lf", c);
	return 0;


}
