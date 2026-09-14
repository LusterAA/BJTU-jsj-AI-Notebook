//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//long long num(int n)
//{
//	long long a = 1, b = 2;
//	long long c = 0;
//	if (n == 1)
//		c = a;
//	if (n == 2)
//		c = b;
//	if (n >= 3)
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//
//int main()
//{
//	int N;
//	long long a;
//	long long b;
//	double c=0.0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		a = num(i+1);
//		b = num(i);
//		c += (double)a / b;
//	}
//	printf("%.6lf", c);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double sum = 0.0;
    double r = 2.0;  // 初始值：r(1) = F(2)/F(1) = 2/1 = 2

    for (int i = 1; i <= N; i++) {
        sum += r;          // 累加当前比值
        r = 1 + 1 / r;     // 递推计算下一个比值：r(i+1) = 1 + 1/r(i)
    }

    printf("%.6lf\n", sum);
    return 0;
}