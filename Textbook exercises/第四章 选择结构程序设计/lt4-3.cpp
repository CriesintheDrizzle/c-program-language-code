#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	if(n>0)
	printf("该整数为正数");
	else if(n==0)
	printf("该整数为0");
	else if(n<0)
	printf("该整数为负数");
	return 0; 
}
