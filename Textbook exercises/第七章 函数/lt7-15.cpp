#include<stdio.h>
int age(int n);

int main()
{
	printf("第五个学生的年龄为:%d\n",age(5));
	return 0;
}

int age(int n)
{
	int x;
	if(n==1)
	x=10;
	else
	x=age(n-1)+1;
	return x;
}
