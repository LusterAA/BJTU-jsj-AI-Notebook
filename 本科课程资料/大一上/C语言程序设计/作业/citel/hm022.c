#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf_s("%d",&a);
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;
	e = 100 * d + 10 * c + 1 * b;
	printf("%03d", e);//%03d表示：输出一个整数，至少占 3 位宽度，如果实际位数不足 3 位，则在前面补 0
	return 0;
}