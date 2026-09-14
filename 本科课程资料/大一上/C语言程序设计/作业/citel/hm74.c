#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (arr[0] > arr[1])
	{
		int t;
		t = arr[0];
		arr[0] = arr[1];
		arr[1] = t;
	}
	if (arr[1] > arr[2])
	{
		int t;
		t = arr[1];
		arr[1] = arr[2];
		arr[2] = t;
	}
	if (arr[0] > arr[1])
	{
		int t;
		t = arr[0];
		arr[0] = arr[1];
		arr[1] = t;
	}
	printf("%d", arr[1]);
	return 0;
}