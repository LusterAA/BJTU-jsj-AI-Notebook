#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year,month,day;
	scanf("%d %d %d", &year,&month,&day);

	if (year <= 0)
	{
		printf("data error!\n");
		return 0;
	}

	if (month < 1 || month > 12)
	{
		printf("data error!\n");
		return 0;
	}

	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int n = 0;

	int max = m[month-1];
	if (((year % 4 == 0) && (year % 100 != 0)) || ((year % 4 == 0) && (year % 400 == 0)))
		n = 1;

	if (month == 2 && n) 
	{
		max = 29;
	}

	if (day < 1 || day > max) 
	{
		printf("data error!\n");
		return 0;
	}

	int total = 0;
	int i = 0;
	while( i < month - 1)
	{
		total += m[i];
		i++;
	}
	total += day;

	if (month > 2 && n) 
	{
		total += 1;
	}

	printf("%d", total);

	return 0;
}