#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void change(int *a, int *b);


int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	change (&a,& b);
	printf("%d %d", a, b);
	return 0;

}

void change(int *a, int *b)
{
	int t;
	t = *b;
	*b = *a;
	*a = t;
}