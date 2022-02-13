#include<stdio.h>
#include<math.h>                 // 使用了“sqrt” 
int main()
{
	int a=2,b=-5,c=2;
	float x;
	x=(-b-sqrt(b*b-4*a*c))/(2*a);//注意分子分母都需要括号 
	printf("运算结果为:%f\n",x);
	return 0;
}
