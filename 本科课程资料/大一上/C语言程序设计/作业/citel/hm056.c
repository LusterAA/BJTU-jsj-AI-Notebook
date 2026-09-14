#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, n;
	long long m=1;
	long long Sn=0;
	long long Sn2 = 0;
	scanf("%d %d", &a, &n);
	for (int i = 1; i <= n; i++)
	{
		Sn2 += (m / 10) * a;
		Sn += m * a+Sn2;
		m *= 10;
	}
	printf("%lld", Sn);
	return 0;
}