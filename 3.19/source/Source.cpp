#include<stdio.h>
#include<stdlib.h>
int main()
{
	double p=0, r, d, c;
	while (p != -1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%lf", &p);
		if (p == -1.00)break;
		printf("Enter interest rate:");
		scanf_s("%lf", &r);
		printf("Enter term of loan in days:");
		scanf_s("%lf", &d);
		c = (p * r*d )/ 365.0;
		printf("The interest charge is %lf!\n", c);
	}
	return 0;
}