#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个数值：\n");
	scanf("%d",&x);
	if(x%3==0&&x%7==0)
	printf("yes!\n");
	else
	printf("no!\n");
	return 0; 
}
