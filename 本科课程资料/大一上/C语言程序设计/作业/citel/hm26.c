#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a,& b,& c);

	//printf("%ld\n",(long)(a*a*a+b*b*b+c*c*c));

	printf("%ld", (long)a * a * a + (long)b * b * b + (long)c * c * c);

	return 0;

}