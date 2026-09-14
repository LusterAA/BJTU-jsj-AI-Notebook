#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void output(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int t = n - i; t >= 1; t--)
        {
            printf(" ");
        }
        printf("%c", c);
        if (i > 1 && i < n)
        {
            for (int q = (2 * (i - 1) - 1); q >= 1; q--)
            {
                printf(" ");
            }
            printf("%c", c);
        }
        if (i == n)
        {
            for (int p = 1; p <= n - 1; p++)
            {
                printf(" %c", c);
            }
        }
        printf("\n");
    }
}

int main() {
    int n; char c;
    scanf("%d %c", &n, &c);
    output(n, c);
    return 0;
}