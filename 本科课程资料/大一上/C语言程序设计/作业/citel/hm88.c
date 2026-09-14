#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	int a;
	int b;
	while (scanf("%d",&x) == 1)
	{
		for (a=2; a <=x/2; a++)
		{
			b = x - a;
			int j = 0;
			int flag = 1;
			for (j = 2; j <= sqrt(a); j++)
			{
				if (a % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				int j = 0;
				int flag = 1;
				for (j = 2; j <= sqrt(b); j++)
				{
					if (b % j == 0)
					{
						flag = 0;
						break;
					}
				}
				if (flag == 1)
				{
					if (a + b == x)
					{
						printf("%d=%d+%d\n", x, a, b);
						break;
					}
				}
			}
		}
	}
	return 0;
}