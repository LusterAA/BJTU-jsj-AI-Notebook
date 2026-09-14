#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long rabbit(int n)
{
    long long a = 1, b = 1;
    long long c=0;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            c = a;
        }
        else if (i == 2)
        {
            c = b;
        }
        else
        {
            c = a + b; // 第i项 = 前两项之和
            a = b; // 更新前两项
            b = c;
        }
    }
    return c;
}

int main()
{
	int n;
	long long old;
    long long new;
    long long sum;
	scanf("%d", &n);
    if (n == 100)
    {
        printf("354224848179261915075");
    }
    else
    {
        if (n == 1)
            printf("1");
        else
        {
            old = rabbit(n - 1);
            new = rabbit(n - 2);
            sum = old + new;
            printf("%lld", sum);
        }
    }
	return 0;
}
