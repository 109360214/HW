#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e;
	printf("�@��Ѫ��`���{��\n");
	scanf_s("%dKM", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�");
	scanf_s("%d��", &b);
	printf("�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%dKM",&c);
	printf("�@�Ѫ������O\n");
	scanf_s("%d��", &d);
	printf("�@�Ѫ��q��O\(�L���O\)\n");
	scanf_s("%d��",&e);
	printf("�@�ѤU�Ӷ}���h�u�@����O:%d", d + e + a / c * b);
	return 0;
}