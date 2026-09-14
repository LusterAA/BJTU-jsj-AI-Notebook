#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int, int);

int main() {
    int n;
    scanf("%d", &n);

    int max = 0;
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    int result = max;

    printf("%d\n", result);
    return 0;
}