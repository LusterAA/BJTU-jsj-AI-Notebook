#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d", &a, &b);
	c = a / b;
	d = a % b;
	printf("%d %d", c,d);


	return 0;
}