#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void output(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%c",c);
        }for (int j = 1; j <= i-1; j++)
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