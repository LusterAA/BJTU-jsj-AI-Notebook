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
        return (monkey(n - 1, k) + (k - 1) % n + 1) % n;
    }
}
int main()
{
    int M, K;
    scanf("%d %d", &M, &K);
    for (int N = 1;; N++)
    {
        if (monkey(M, N) + 1 == K)
        {
            printf("%d\n", N);
            break;
        }
    }
    return 0;
}