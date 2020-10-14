#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e;
	printf("一整天的總里程數\n");
	scanf_s("%dKM", &a);
	printf("汽油一公升/加侖多少錢");
	scanf_s("%d元", &b);
	printf("平均一公升/加侖能行駛多少公里\n");
	scanf_s("%dKM",&c);
	printf("一天的停車費\n");
	scanf_s("%d元", &d);
	printf("一天的通行費\(過路費\)\n");
	scanf_s("%d元",&e);
	printf("一天下來開車去工作的花費:%d", d + e + a / c * b);
	return 0;
}