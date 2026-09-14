#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count1 = 0;
	int count2 = 0;
	char c;
	char arr1[101];
	char arr2[101];
	while ((scanf("%c", &c) == 1) && (c != '\n'))
	{
		arr1[count1] = c;
		count1++;
	}
	while ((scanf("%c", &c) == 1) && (c != '\n'))
	{
		arr2[count2] = c;
		count2++;
	}
	int flag = 1;
	if (count1 != count2)
	{
		flag = 0;
	}
	else
	{
		for (int i = 0; i < count1; i++)
		{
			if (arr1[i] != arr2[i])
			{
				flag = 0;
				break;
			}
		}
	}
	for (int i = count1 - 1; i >= 0; i--)
	{
		printf("%c", arr1[i]);
	}
	printf("\n");
	for (int i = count2 - 1; i >= 0; i--)
	{
		printf("%c", arr2[i]);
	}
	printf("\n");
	printf("%d\n",flag);
	printf("%d %d\n", count1, count2);
	for (int i = 0; i <count1; i++)
	{
		printf("%c", arr1[i]);
	}
	for (int i = 0; i < count2; i++)
	{
		printf("%c", arr2[i]);
	}
	return 0;
}