#include<stdio.h>
#define Pi 3.14
int main()
{
	float r,l,s,sq,v;
	printf("������Բ�İ뾶��\n");
	scanf("%f",&r);
	l=2*Pi*r;
	s=Pi*r*r;
	sq=4*Pi*r*r;
	v=4.0/3*Pi*r*r*r;
	printf("Բ���ܳ�=%.3f\n",l);
	printf("Բ�����=%.3f\n",s);
	printf("Բ������=%.3f\n",sq);
	printf("Բ������=%.3f\n",v);
	return 0;
}
