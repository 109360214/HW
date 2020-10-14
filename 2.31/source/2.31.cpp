#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("number  square  cube\n");
	for (n = 0; n <= 10;n++) {
		printf("%d       %d      %d\n", n, n*n, n*n*n);
	}
	return 0;
}