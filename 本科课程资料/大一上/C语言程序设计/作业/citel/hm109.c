#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void output(int x)
{
    if (x < 0) {
        printf("-");
        x = -x;
    }

    if (x == 0) {
        printf("0");
        return;
    }

    while (x) 
    {
        printf("%d", x % 10);  
        x = x / 10;            
    }
}

int main() 
{
    int x;
    scanf("%d", &x);
    output(x);
    return 0;
}