#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int monkey(int n, int k) 
{
    if (n == 1) 
    {
        return 0;
    }
    else
    {
        return (monkey(n - 1, k) +(k - 1) % n + 1) % n;
    }
}

int main()
{
    int M, K;
    scanf("%d %d", &M, &K);
    printf("%d\n", monkey(M, K) + 1);
    return 0;
}

