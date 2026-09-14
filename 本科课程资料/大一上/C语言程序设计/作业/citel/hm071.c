#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float r;
    scanf("%f", &r);
    int count = 0;
    for (int x = r; x > 0; x--)
    {
        for (int y = r; y > 0; y--)
        {
            if (x * x + y * y <= r * r)
                count++;
        }
    }
    count *= 4;
    printf("%d\n", count);
    return 0;
}