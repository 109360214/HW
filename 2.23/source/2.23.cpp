#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Please enter three integers:\n");
	scanf_s("%d %d %d",&a,&b,&c);
	if (a>b&&b>c) {
		printf("Large=%d\nsmall=%d\n",a,c);
	}
	if (b>a&&a>c) {
		printf("Large=%d\nsmall=%d\n",b,c);
	}
	if (b>c&&c>a) {
		printf("Large=%d\nsmall=%d\n",b,a);
	}
	if (a>c&&c>b) {
		printf("Large=%d\nsmall=%d\n",a,b);
	}
	if (c>a&&a>b) {
		printf("Large=%d\nsmall=%d\n",c,b);
	}
	if (c>b&&b>a) {
		printf("Large=%d\nsmall=%d\n",c,a);
	}
	return 0;
}