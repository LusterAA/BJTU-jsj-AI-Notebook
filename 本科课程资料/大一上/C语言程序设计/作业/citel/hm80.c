#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int M, N;
    if (scanf("%d %d", &M, &N) != 2) return 0;
    printf("%d.", M / N);
    M %= N;
    int pos[101];
    int dig[1000], idx = 0;
    for (int i = 0; i <= 100; ++i) pos[i] = 0;
    int start = -1, end;
    while (M && start == -1)
    {
        if (pos[M])
        {
            start = pos[M];
            end = idx;
            break;
        }
        pos[M] = idx + 1;
        M *= 10;
        dig[idx++] = M / N;
        M %= N;
    }
    for (int i = 0; i < idx; ++i) putchar('0' + dig[i]);
    putchar('\n');
    if (start != -1)
        printf("from %d to %d\n", start, end);
    return 0;
}