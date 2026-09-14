#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr1[1000];
	char arr2[1000];
	int count1 = 0, count2 = 0;
	for (int i = 0; i < 1000; i++)
	{
		scanf("%c", &arr1[i]);
		if (arr1[i] == '\n')
			break;
		count1++;
	}
	for (int i = 0; i < 1000; i++)
	{
		scanf("%c", &arr2[i]);
		if (arr2[i] == '\n')
			break;
		count2++;
	}
	int begin = -1;
	for (int i = 0; i <= count1 - count2; i++)
	{
		int match = 1;
		for (int j = 0; j < count2; j++)
		{
			if (arr1[i + j] != arr2[j])
			{
				match = 0;
				break; 
			}
		}
		if (match == 1)
		{
			begin = i;
			break; 
		}
	}
	printf("%d", begin);
	return 0;
}



