#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void output(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int t = i; t >= 1; t--)
        {
            printf("%c", c);
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