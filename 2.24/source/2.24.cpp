#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("Please enter the integer:\n");
	scanf_s("%d",&a);
	b = a % 2;
	if (b ==0) {
		printf("even");
	}
	else {
		printf("odd");
	}
	return 0;

}