#include<stdio.h>
#define Pi 3.14
int main()
{
	float r,l,s,sq,v;
	printf("请输入圆的半径：\n");
	scanf("%f",&r);
	l=2*Pi*r;
	s=Pi*r*r;
	sq=4*Pi*r*r;
	v=4.0/3*Pi*r*r*r;
	printf("圆的周长=%.3f\n",l);
	printf("圆的面积=%.3f\n",s);
	printf("圆球的面积=%.3f\n",sq);
	printf("圆球的体积=%.3f\n",v);
	return 0;
}
