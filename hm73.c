#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	long long N;
	scanf("%lld", &N);
	long long count = 0;
	for (long long shi = N / 10; shi > 0; shi--)
	{
		for (long long wu = (N - shi * 10) / 5; wu > 0; wu--)
		{
			long long yi = (N - shi * 10 - wu * 5); 
			if (yi > 0)
				count ++ ;
		}
	}
	printf("%lld", count);
	return 0;
}