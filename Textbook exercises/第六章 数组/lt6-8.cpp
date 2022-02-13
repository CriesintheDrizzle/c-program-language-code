#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[3][2];
	printf("请输入数组a的元素值：\n");
	for(i=0;i<2;i++)
	   for(j=0;j<3;j++)
	      scanf("%d",&a[i][j]);
	printf("a转置前为：\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("a转置后为：\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		printf("%4d",b[j][i]);
		printf("\n");
	}  
	printf("\n");
	return 0;  
}
