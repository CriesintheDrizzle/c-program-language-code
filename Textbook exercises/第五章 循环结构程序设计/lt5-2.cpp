#include<stdio.h>
int main()
{
	int i=2,sum=0;
	while(i<=10)
	{
		sum=sum+i*i;
		i=i+2;
	}
	printf("sum=%d",sum);
	return 0;
}
