#include<stdio.h>
int main()
{
	int i=2;
	float sum=1;
	do
	{
		sum=sum+1/(float)i;
		i=i+2;
	}while(i<=50);
	printf("sum=%f",sum);
	return 0;
}
