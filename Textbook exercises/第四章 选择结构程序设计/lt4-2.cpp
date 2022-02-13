#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入两个数值：\n");
	scanf("%d,%d",&a,&b);
	if(a>b)
	c=a;
	else
	c=b;
	printf("其中较大的数为%d",c);
	return 0;
}
