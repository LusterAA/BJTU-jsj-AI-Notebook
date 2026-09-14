#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max = 0;
    int num = 0;
    int dmax = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            dmax = max;
            max = num;
        }
        else if (num > dmax)
        {
            dmax = num;
        }

    }
    int result = dmax;

    printf("%d\n", result);
    return 0;
}