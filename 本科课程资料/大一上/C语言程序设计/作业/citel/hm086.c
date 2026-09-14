#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void prtup(char x, int s)
{
	if (x == '1' || x == '4')
	{
		for (int i = 1; i <= s + 2; i++)
		{
			printf(" ");
		}
	}
	if (x >= '5' || x == '0' || x == '2' || x == '3')
	{
		printf(" ");
		for (int i = 1; i <= s; i++)
		{
			printf("-");
		}
		printf(" ");
	}
}

void prtmid1(char x, int s)
{
	if (x == '1' || x == '2' || x == '3' || x == '7')
	{
		for (int i = 1; i <= s + 1; i++)
		{
			printf(" ");
		}
		printf("|");
	}
	if (x == '4' || x == '0' || x == '8' || x == '9')
	{
		printf("|");
		for (int i = 1; i <= s; i++)
		{
			printf(" ");
		}
		printf("|");
	}
	if (x == '5' || x == '6')
	{
		printf("|");
		for (int i = 1; i <= s+1; i++)
		{
			printf(" ");
		}
	}
}

void prtmid2(char x, int s)
{
	if (x == '1' || x == '7' || x == '0')
	{
		for (int i = 1; i <= s + 2; i++)
		{
			printf(" ");
		}
	}
	if ((x >= '2' && x <= '6') || x == '8' || x == '9')
	{
		printf(" ");
		for (int i = 1; i <= s; i++)
		{
			printf("-");
		}
		printf(" ");
	}
}

void prtmid3(char x, int s)
{
	if (x == '1' || x == '3' || x == '4' || x == '5' || x == '7' || x == '9')
	{
		for (int i = 1; i <= s + 1; i++)
		{
			printf(" ");
		}
		printf("|");
	}
	if (x == '6' || x == '0' || x == '8')
	{
		printf("|");
		for (int i = 1; i <= s; i++)
		{
			printf(" ");
		}
		printf("|");
	}
	if (x == '2')
	{
		printf("|");
		for (int i = 1; i <= s + 1; i++)
		{
			printf(" ");
		}
	}
}

void prtdown(char x, int s)
{
	if (x == '1' || x == '4' || x == '7')
	{
		for (int i = 1; i <= s + 2; i++)
		{
			printf(" ");
		}
	}
	if (x == '2' || x == '3' || x == '5' || x == '6' || x == '8' || x == '9' || x == '0')
	{
		printf(" ");
		for (int i = 1; i <= s; i++)
		{
			printf("-");
		}
		printf(" ");
	}
}

int main()
{
	int s;
	char x;
	char arr[20];
	int flag = 0;
	while (1)
	{
		scanf("%d", &s);
		int count = 0;
		while (scanf("%c", &x) == 1 && (x != '\n'))
		{
			if (x == ' ')
				continue;
			arr[count] = x;
			count++;
			if (s ==0 && x == '0')
			goto end;
		}
		if (flag)
			printf("\n\n");
		else
			flag = 1;
		for (int i = 0; i < count; i++)
		{
			prtup(arr[i], s);
			if (i < count - 1)
				printf(" ");
		}
		printf("\n");
		for (int j = 1; j <= s; j++)
		{
			for (int i = 0; i < count; i++)
			{
				prtmid1(arr[i], s);
				if (i < count - 1)
					printf(" ");
			}
			printf("\n");
		}
		for (int i = 0; i < count; i++)
		{
			prtmid2(arr[i], s);
			if (i < count - 1)
				printf(" ");
		}
		printf("\n");
		for (int j = 1; j <= s; j++)
		{
			for (int i = 0; i < count; i++)
			{
				prtmid3(arr[i], s);
				if (i < count - 1)
					printf(" ");
			}
			printf("\n");
		}
		for (int i = 0; i < count; i++)
		{
			prtdown(arr[i], s);
			if (i < count - 1)
				printf(" ");
		}
	}
	end:
	return 0;
}
