#include<stdio.h>
int main()
{
	int i,j,a[i][j],max,h=0,l=0;
	printf("请输入一个3x4的矩阵：\n");
	for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	   scanf("%d",&a[i][j]);
	max=a[0][0];
	for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	   	if(a[i][j]>max)
	   	{
	   		max=a[i][j];
	   		h=i;
	   		l=j;
		}
	   
	printf("该数组最大值max=%d,在第%d行，第%d列。",max,l,h);
	return 0;
}
