#include<stdio.h>
int main()
{
	int i;
	char c[15];
	printf("�������ַ�����ĸ�Ԫ�أ�\n");
	for(i=0;i<15;i++)
	   scanf("%c",&c[i]);
	printf("�ַ�����Ϊ��\n");
	for(i=0;i<15;i++)
	   printf("%c",c[i]);
	printf("\n");
	return 0;
}
