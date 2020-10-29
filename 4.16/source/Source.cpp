#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,n;
	n = 1;
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		n++;
	}

	n = 10;
	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		n--;
	}

	n = 1;
	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		n++;
	}

	n = 10;
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		n--;
	}
	system("pause");
	return 0;
}