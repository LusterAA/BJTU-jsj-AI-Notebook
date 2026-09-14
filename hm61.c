#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double e = 0.0;
	long long f = 1;

	e = 1.0;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
		e += 1.0/f;
	}
	printf("%.8lf", e);
	return 0;
}