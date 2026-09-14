#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void wei(int x)
{
	int t = x;
	int count = 0;
	if(t==0)
		printf("1\n");
	else
	{
		while (t)
		{
			t /= 10;
			count++;
		}
		printf("%d\n", count);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int x;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&x);
		wei(x);
	}
	return 0;
}