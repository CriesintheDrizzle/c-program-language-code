#include<stdio.h>
int main()
{
	int i,a[30],x=2;
	for(i=0;i<30;i++)
	{
		a[i]=x;
		x=x+2;
	}
	printf("��ÿ��10�������Ϊ��\n");
	for(i=0;i<30;i++)
	{
		printf("%-4d",a[i]);
		if((i+1)%10==0)
		printf("\n");
	}
	printf("ÿ��10�����������Ϊ��\n");
	for(i=29;i>=0;i--)
	{
		printf("%-4d",a[i]);
		if(i%10==0)
		printf("\n");
	}
	return 0;
}
