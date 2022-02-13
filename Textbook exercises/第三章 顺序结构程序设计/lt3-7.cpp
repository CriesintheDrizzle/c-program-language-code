#include<stdio.h>
int main()
{
	int a,b;
	long n;
	scanf("a=%d,b=%d\n",&a,&b);
	scanf("n=%ld",&n);
	printf("%d,%d\n",a,b);
	printf("%o,%o\n",a,b);
	printf("%x,%x\n",a,b);
	
	printf("%3d%3d\n",a,b);     //m>0，数据右对齐，左端补空格 
	printf("%-3d%-3d\n",a,b);   //m<0，数据左对齐，右端补空格 
	
	printf("%ld\n",n);
	return 0;
}
