#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, h, S1;
	int S;

	scanf("%lf %lf %lf", &a, &b, &S1);
	h = S1 * 2 / a;
	S = (int)((a + b) * h / 2);
	printf("%d", S);
	return 0;

}