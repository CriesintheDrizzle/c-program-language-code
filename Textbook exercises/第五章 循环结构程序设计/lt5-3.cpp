#include<stdio.h>
int main()
{
	int i=2;
	float sum=1;
	while(i<=50)
	{
		sum=sum+1/(float)i;   //�������͵�ǿ��ת�� 
		i=i+2;
	}
	printf("sum=%f",sum);
	return 0;
}
