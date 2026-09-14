#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define PI 3.1415926

int main()
{
	double N;
	int r;
	double S=0;
	scanf("%lf", &N);
	r = (int)sqrt(N / PI);
	if (PI * r * r > N)
	{
		S = PI * r * r;
		printf("%.2lf", S);
	}
	else
	{
		r++;
		S = PI * r * r;
		printf("%.2lf", S);
	}
	return 0;
}