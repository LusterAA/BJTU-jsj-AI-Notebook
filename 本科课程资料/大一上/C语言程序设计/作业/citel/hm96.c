#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double gem(int n, int m)
{
	double t = m;
	for (int i = n-1; i >= 1; i--)
	{
		t = (t + 1.0 / (i+1)) * ((double)(i+1)/i);
	}
	return t;
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%.2lf\n", gem(n, m));
	return 0;
}