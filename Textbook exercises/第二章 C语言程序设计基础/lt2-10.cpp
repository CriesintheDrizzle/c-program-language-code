#include<stdio.h>        //自增自减运算符应用 
int main()
{
	int i,j,m,n;
	i=3;
	j=5;
	m=++i*10;
	n=j++*4;
	printf("i=%d,m=%d",i,m);
	printf("j=%d,n=%d",j,n);
	return 0;
}
