#include<stdio.h>
int main()
{
	int n;
	printf("������һ��������\n");
	scanf("%d",&n);
	if(n>0)
	printf("������Ϊ����");
	else if(n==0)
	printf("������Ϊ0");
	else if(n<0)
	printf("������Ϊ����");
	return 0; 
}
