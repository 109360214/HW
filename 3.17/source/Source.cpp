#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0;
	double bb, ch, cr, l, b;
	while (a != -1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a == -1)break;
		printf("Enter beginning balance:");
		scanf_s("%lf", &bb);
		printf("Enter total charges:");
		scanf_s("%lf", &ch);
		printf("Enter total credits:");
		scanf_s("%lf", &cr);
		printf("Enter credit limit:");
		scanf_s("%lf", &l);
		b = bb + ch - cr;
		if (b > l) {
			printf("Account:%d\n", a);
			printf("credit limit:%lf\n", l);
			printf("Balance:%lf\n", b);
			printf("Credit limit exceeded!\n");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
	
}