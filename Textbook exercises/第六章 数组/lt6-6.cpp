#include<stdio.h>
int main()
{
	int i,j,a[i][j];
	int sum=0;
	printf("����������a��ֵ��\n");
	for(i=0;i<3;i++)
	   	for(j=0;j<4;j++)
	   {
			scanf("%d",&a[i][j]);
	   	    sum=sum+a[i][j];
	   }
	printf("�Ծ�����ʽ�������aΪ��\n");
	for(i=0;i<3;i++)
	   {
	     for(j=0;j<4;j++)
	     printf("%4d",a[i][j]);
	   	 printf("\n");
	   }
	printf("����a�ĸ�Ԫ�صĺ�Ϊ%d",sum);
	return 0;
}
