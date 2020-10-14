#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a, b,c;
	printf("Please enter your height(m):\n");
	scanf_s("%lf", &a);
	printf("Please enter your body weight(KG):\n");
	scanf_s("%lf", &b);
	c = b / (a * a);
	printf("Your BMI is %lf\n", c);
	if (c >= 18.5&&c <= 24.9)
	{
		printf("Normal!\n");
	}
	else if (c < 18.5) {
		printf("Underweight!");
	}
	else if (c >= 25 && c <= 29.9) {
		printf("Overweight!");
	}
	else if (c >= 30) {
		printf("Obese!!");
	}
	return 0;
}