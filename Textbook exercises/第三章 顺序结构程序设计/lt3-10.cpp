#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入两个数值：\n");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
	return 0;
}
