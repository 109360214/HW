#include<stdio.h>
#include<stdlib.h>
int main()
{
	double s, d=0;
	while (d != -1)
	{
		printf("Enter sales in dollars:");
		scanf_s("%lf", &d);
		if (d == -1)break;
		s = 200 + d * 0.09;
		printf("Salary is %lf", s);
	}
	return 0;
}
