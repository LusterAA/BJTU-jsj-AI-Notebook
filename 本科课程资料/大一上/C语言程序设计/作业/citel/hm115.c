#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = max(max(a, b), c);
    printf("%d\n", result);
    return 0;
}