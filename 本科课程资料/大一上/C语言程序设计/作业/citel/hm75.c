#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[1000];
    int n = 0;
    while (scanf("%d", &arr[n]) == 1)
    {
        n++;
    }

    for (int i = n - 1; i >= 0; i--) 
    {
        if (i == 0)
        {
            printf("%d", arr[i]);
        }
        else 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}