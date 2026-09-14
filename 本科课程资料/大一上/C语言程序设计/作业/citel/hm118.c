#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int n1;
	scanf("%d", &n1);
	char arr1[n1][50];
	for (int i = 0; i < n1; i++)
	{
		scanf("%s", arr1[i]);
	}

	int n2;
	scanf("%d", &n2);
	char arr2[n2][50];
	for (int i = 0; i < n2; i++)
	{
		scanf("%s", arr2[i]);
	}
	int arr3[1000] = { 0 };

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			if (strcmp(arr1[j], arr2[i]) == 0)
			{
				arr3[j]++;
				break;
			}
		}
	}

	for (int i = 0; i < n1; i++)
	{
		printf("%s %d\n", arr1[i],arr3[i]);
	}
	return 0;
}