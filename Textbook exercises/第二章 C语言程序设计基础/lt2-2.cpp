#include<stdio.h>
#define PI 3.14
#include<stdio.h>
int main()
{
	float r,s;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=PI*r*r;
	printf("圆的面积为：%f\n",s);
	return 0;
}
