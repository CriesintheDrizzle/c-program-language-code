#include<stdio.h>
int main()
{
	int i,a[6];
	printf("����������a��������ֵ��\n");
	for(i=0;i<6;i++)
	   scanf("%d",&a[i]);
	printf("�����鷴�����Ϊ��\n");
	for(i=5;i>=0;i--)
	   printf("%4d",a[i]);
	return 0;
}
