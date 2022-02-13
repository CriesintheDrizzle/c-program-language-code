#include<stdio.h>
int main()
{
	int m=97,n=98;
	float c=5.23;
	
	printf("整型m、n示例\n");
	printf("%d %d",m,n);
	printf("%x,%d\n",m,n);
	printf("%c\t%c\n",m,n);              //\t为水平制表，一个制表位为八位
	printf("m=%d,n=%d,m+n=%d",m,n,m+n);
	
	printf("实型c示例\n");
	printf("c=%f\nc=%f\n",c,c);
	return 0;
}
