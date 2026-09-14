#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void answer(int a,int b,int *c, int*d);

int main()
{
	int a, b;
	int c, d;

	scanf("%d %d", &a, &b);
	answer(a,b,&c,&d);
	if (2 * c + 4 * d == b && c >= 0 && d >= 0) {
		printf("%d %d\n", c, d);
	}
	else {
		printf("No answer\n");
	}
	return 0;

}



void answer(int a, int b,int* c, int* d)
{
	*c = (4 * a - b) / 2;
	*d = (b - 2 * a) / 2;
}