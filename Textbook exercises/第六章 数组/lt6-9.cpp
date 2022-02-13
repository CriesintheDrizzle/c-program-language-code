#include<stdio.h>
int main()
{
	int i,j,a[4][4];
	printf("请输入一个4x4的数组：\n");
	for(i=0;i<4;i++)
	   for(j=0;j<4;j++)
	   scanf("%d",&a[i][j]);
	printf("主对角线上的元素为：\n");
	for(i=0,j=0;i<4&&j<4;i++,j++)
	   printf("%2d",a[i][j]);
	printf("\n");
	printf("副对角线上的元素为：\n");
	for(i=0,j=3;i<4,j>=0;i++,j--)
	   printf("%2d",a[i][j]);
	printf("\n");
	return 0;
}
