#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int max(double arr[], int n)
{
    int t = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[t])
            t = i;
    }
    return t;
}

int min(double arr[], int n)
{
    int t = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[t])
            t = i;
    }
    return t;
}

double avg(double arr[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int n;
    scanf("%d", &n);
    double arr[n];
    char original[n][20];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", original[i]); 
        sscanf(original[i], "%lf", &arr[i]); 
    }

    printf("%s %s %.2lf", original[max(arr, n)], original[min(arr, n)], avg(arr, n));
    return 0;
}
