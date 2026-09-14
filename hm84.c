#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int x = n / 2;
    int y = n / 2;
    int num = 1;
    arr[x][y] = num++;
    int len = 0;
    while (1)
    {
        //向右
        len++;
        for (int i = 1; i <= len; i++)
        {
            y++;
            arr[x][y] = num++;
        }
        //向上
        for (int i = 1; i <= len; i++)
        {
            x--;
            arr[x][y] = num++;
        }
        //向左
        len++;
        for (int i = 1; i <= len; i++)
        {
            y--;
            arr[x][y] = num++;
        }
        //向下
        for (int i = 1; i <= len; i++)
        {
            x++;
            arr[x][y] = num++;
        }
        if (num - 1 + len == n * n)
        {
            for (int i = 1; i <= len; i++)
            {
                y++;
                arr[x][y] = num++;
            }
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        sum += arr[i][n-1 - i];
    }
    printf("%d ",sum);
    return 0;
}