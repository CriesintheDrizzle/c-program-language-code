#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[3][2];
	printf("����������a��Ԫ��ֵ��\n");
	for(i=0;i<2;i++)
	   for(j=0;j<3;j++)
	      scanf("%d",&a[i][j]);
	printf("aת��ǰΪ��\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("aת�ú�Ϊ��\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		printf("%4d",b[j][i]);
		printf("\n");
	}  
	printf("\n");
	return 0;  
}
