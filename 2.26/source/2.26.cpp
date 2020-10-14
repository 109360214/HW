#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("Please enter two integers\(first integer have to bigger than second integer.\):\n");
	scanf_s("%d %d", &a, &b);
	if (b > a) {
		printf("Error");
	}
	else {
		if (a%b == 0) {
			printf("The frist is a multiple of the second.");
		}
		else {
			printf("The frist isn't a multiple of the second.");
		}
	}
	return 0;

}