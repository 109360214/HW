#include<stdio.h>
#include<stdlib.h>

double power(double, int);

int main(void)
{
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d����=%lf", k, ans);
	system("pause");
}

double power(double X, int n)
{
	int i;
	double powerxn = 1;
	for (i = 1; i <= n; i++)
	{
		powerxn = powerxn * X;
	}
	return powerxn;
}