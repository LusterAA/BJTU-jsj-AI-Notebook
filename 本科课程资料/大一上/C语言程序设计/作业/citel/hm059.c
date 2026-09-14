#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int c;
    //char a;//Ç¿×ª»»

    while (scanf("%d", &c)==1)
    { 
        //a=(char)c;
        printf("%4d:%c\n", c, c);
        //printf("%4d:%c\n", a, a);
    }
    return 0;
}