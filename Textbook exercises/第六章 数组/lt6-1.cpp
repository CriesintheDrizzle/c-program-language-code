#include<stdio.h>
int main()
{
	int i,a[6];
	printf("请输入数组a的六个数值：\n");
	for(i=0;i<6;i++)
	   scanf("%d",&a[i]);
	printf("该数组反序输出为：\n");
	for(i=5;i>=0;i--)
	   printf("%4d",a[i]);
	return 0;
}
