#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	float x1,x2;
	printf("������a��b��c��ֵ��\n");
	scanf("a=%d b=%d c=%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("�ú�����������Ϊ��\nx1=%.3f\nx2=%.3f",x1,x2);
	return 0;
}
