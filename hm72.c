#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> 

int main()
{
    long long m, n;
    scanf("%lld %lld", &m, &n);
    if (m > n)
    {
        long long t = m;
        m = n;
        n = t;
    }

    for (long long i = m; i <= n; i++)
    {
        if (i <= 1)
        {
            printf("1: 1\n");
            continue;
        }

        long long sum = 0;
        for (long long q = 1; q * q <= i; q++)
        {
            if (i % q == 0)
            {
                sum += q; 
                long long other = i / q;
                if (other != i && other != q)
                {
                    sum += other;
                }
            }
        }

        if (sum == i)
        {
            printf("%lld: ", i);
            for (long long q = 1; q < i; q++)
            {
                if (i % q == 0)
                {
                    printf("%lld ", q);
                }
            }
            printf("\n");
        }
    }
    return 0;
}