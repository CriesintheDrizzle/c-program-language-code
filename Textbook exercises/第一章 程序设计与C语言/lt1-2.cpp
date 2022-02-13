#include<stdio.h>
int main()
{
	int x,y,z;
	printf("请输入两个整数：\n");
	scanf("%d,%d",&x,&y);
	if(x>y)
	z=x;
	else
	z=y;
	printf("最大值为%d\n",z);
	return 0;
}
