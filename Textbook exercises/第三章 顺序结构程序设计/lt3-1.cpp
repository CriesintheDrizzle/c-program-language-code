#include<stdio.h>               //将两个数从小到大输出 
int main()
{
	int a,b,c;
	printf("请输入两个数：");
	scanf("%d,%d",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	printf("两个数从小到大排列:%d,%d",a,b);
	return 0;
}
