#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAXNUM 10

int main()
{
	int a[10],i,num=0;
	printf("enter array a:\n");
	for(i=0;i<MAXNUM;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<MAXNUM;i++)
	{
		if(i%2==1 && a[i]%2==1)
			num++;
	}

	printf("num=%d\n",num);

	return 0;
}