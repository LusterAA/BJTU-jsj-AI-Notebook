#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ranking(int score, int rank[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if (score == rank[i])
		{
			return i + 1;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int score[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}
	int rank[n];
	for (int i = 0; i < n; i++)
	{
		rank[i] = score[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (rank[j] > rank[i])
			{
				int t = rank[j];
				rank[j] = rank[i];
				rank[i] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", score[i], ranking(score[i], rank, n));
	}
	return 0;
}