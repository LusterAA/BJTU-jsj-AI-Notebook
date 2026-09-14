#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c1, c2;

    scanf("%c %c", &c1, &c2);

 
    char lower1 = c1 + 32;
    char lower2 = c2 + 32;


    printf("%c %c\n", lower1, lower2);

    return 0;
}