#include<stdio.h>
int main()
{
	float x,y;
	scanf("x=%f,y=%f",&x,&y);
	printf("%f,%f\n",x,y);
	printf("%10f,%15f\n",x,y);   //��С����ʽ��������Ϊ10 
	printf("%-10f,%-15f\n",x,y);
	printf("%8.2f,%4f\n",x,y);   //���Ϊ�ˣ�������λС�� 
	printf("%e,%10.2e\n",x,y);   //?
	return 0;
}
