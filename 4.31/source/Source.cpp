#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, m, n;
	m = 5;
	n = 5;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (n <= j && j <= m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		if (i >= 5)
		{
			m--;
			n++;
		}
		else
		{
			m++;
			n--;
		}
	}
	system("pause");
	return 0;
}