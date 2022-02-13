#include<stdio.h>
int main()
{
	int i,j,a[i][j];
	int sum=0;
	printf("请输入数组a的值：\n");
	for(i=0;i<3;i++)
	   	for(j=0;j<4;j++)
	   {
			scanf("%d",&a[i][j]);
	   	    sum=sum+a[i][j];
	   }
	printf("以矩阵形式输出数组a为：\n");
	for(i=0;i<3;i++)
	   {
	     for(j=0;j<4;j++)
	     printf("%4d",a[i][j]);
	   	 printf("\n");
	   }
	printf("数组a的各元素的和为%d",sum);
	return 0;
}
