#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double PI=0;
	int n;
	int N;
	scanf("%d", &N);
	double m=1.0;
	int q=-1;
	for (n = 1;n<=N; n+=2)
	{
		m = 1.0 / n;
		q=-q;
		PI += q * 4 * m;
	}
	printf("%.8lf", PI);
	return 0;
}