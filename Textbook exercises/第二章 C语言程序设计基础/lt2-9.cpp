#include<stdio.h>
#include<math.h>                 // ʹ���ˡ�sqrt�� 
int main()
{
	int a=2,b=-5,c=2;
	float x;
	x=(-b-sqrt(b*b-4*a*c))/(2*a);//ע����ӷ�ĸ����Ҫ���� 
	printf("������Ϊ:%f\n",x);
	return 0;
}
