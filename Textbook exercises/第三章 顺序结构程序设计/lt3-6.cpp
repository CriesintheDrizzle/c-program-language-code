#include<stdio.h>
int main()
{
	int m=97,n=98;
	float c=5.23;
	
	printf("����m��nʾ��\n");
	printf("%d %d",m,n);
	printf("%x,%d\n",m,n);
	printf("%c\t%c\n",m,n);              //\tΪˮƽ�Ʊ�һ���Ʊ�λΪ��λ
	printf("m=%d,n=%d,m+n=%d",m,n,m+n);
	
	printf("ʵ��cʾ��\n");
	printf("c=%f\nc=%f\n",c,c);
	return 0;
}
