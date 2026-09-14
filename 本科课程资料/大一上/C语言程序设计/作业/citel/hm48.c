#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float p, w, s,f;
	float d = 0.0;
	scanf("%f %f %f", &p, &w, &s);
	int m;
	m = (int)s/250;
	switch (m)
	{
	case 0:
		d = 0;
		break;
	case 1:
		d = 0.02;
		break;
	case 2:
	case 3:
		d = 0.05;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		d = 0.08;
		break;
	case 8:
	case 9:
	case 10:
	case 11:
		d = 0.1;
		break;
	default:
		d = 0.15;
		break;
	}
	f = p * w * s * (1-d);
	printf("%.2f", f);
	return 0;
}