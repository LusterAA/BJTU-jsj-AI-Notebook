#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    int x = (int)a;
    int y = (int)b;
    int z = (int)c;

    int temp;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
   
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }


    printf("%d %d %d\n", x, y, z);
    return 0;
}