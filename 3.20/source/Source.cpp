#include<stdio.h>
#include<stdlib.h>
int main()
{
	int h;
	double w, s;
	h = 0;
	while (h != -1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &h);
		if (h == -1)break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%lf", &w);
		s = h * w;
		printf("Salary is $%lf\n", s);

	}
	return 0;
}