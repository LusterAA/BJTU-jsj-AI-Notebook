#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void output(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%c", c);
    }
}

int main() {
    int n; char c;
    scanf("%d %c", &n, &c);
    output(n, c);
    printf("\n");
    return 0;
}
