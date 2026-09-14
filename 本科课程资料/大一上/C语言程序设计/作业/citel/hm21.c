#include <stdio.h>
#define PI 3.1415926535

double area(double,double);

int main() 
{
    int r, h;
    double s;
    scanf_s("%d %d", &r, &h);

    s = area(r, h);
    printf("Area = %.3f\n",s);

    return 0;
}

double area(double r,double h)
{
    double s;
    s= 2 * PI * r * r + 2 * PI * r * h;
    return s;
}