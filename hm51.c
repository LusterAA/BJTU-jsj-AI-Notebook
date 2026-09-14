#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    int t;

    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    scanf("%d", &t);

    if (c1 >= 'A' && c1 <= 'Z') 
    {
        c1 = (c1 - 'A' + t) % 26 + 'A';
    }
    else if (c1 >= 'a' && c1 <= 'z') 
    {
        c1 = (c1 - 'a' + t) % 26 + 'a';
    }

    if (c2 >= 'A' && c2 <= 'Z')
    {
        c2 = (c2 - 'A' + t) % 26 + 'A';
    }
    else if (c2 >= 'a' && c2 <= 'z') 
    {
        c2 = (c2 - 'a' + t) % 26 + 'a';
    }

    if (c3 >= 'A' && c3 <= 'Z') 
    {
        c3 = (c3 - 'A' + t) % 26 + 'A';
    }
    else if (c3 >= 'a' && c3 <= 'z') 
    {
        c3 = (c3 - 'a' + t) % 26 + 'a';
    }

    if (c4 >= 'A' && c4 <= 'Z') 
    {
        c4 = (c4 - 'A' + t) % 26 + 'A';
    }
    else if (c4 >= 'a' && c4 <= 'z')
    {
        c4 = (c4 - 'a' + t) % 26 + 'a';
    }

    if (c5 >= 'A' && c5 <= 'Z')
    {
        c5 = (c5 - 'A' + t) % 26 + 'A';
    }
    else if (c5 >= 'a' && c5 <= 'z') 
    {
        c5 = (c5 - 'a' + t) % 26 + 'a';
    }

    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);

    return 0;
}