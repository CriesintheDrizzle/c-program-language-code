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
	
	printf("%3d%3d\n",a,b);     //m>0�������Ҷ��룬��˲��ո� 
	printf("%-3d%-3d\n",a,b);   //m<0����������룬�Ҷ˲��ո� 
	
	printf("%ld\n",n);
	return 0;
}
