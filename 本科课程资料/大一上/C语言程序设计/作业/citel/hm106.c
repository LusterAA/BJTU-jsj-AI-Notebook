#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char arr[n+1][50];
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr[i]);
	}
	scanf("%s", arr[n]);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(arr[i], arr[n]) == 0)
		{
			printf("%d", i+1);
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("-1");
	}
	return 0;
}