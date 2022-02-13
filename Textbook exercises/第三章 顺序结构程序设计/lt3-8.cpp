#include<stdio.h>
int main()
{
	float x,y;
	scanf("x=%f,y=%f",&x,&y);
	printf("%f,%f\n",x,y);
	printf("%10f,%15f\n",x,y);   //以小数形式输出，宽度为10 
	printf("%-10f,%-15f\n",x,y);
	printf("%8.2f,%4f\n",x,y);   //宽度为八，保留两位小数 
	printf("%e,%10.2e\n",x,y);   //?
	return 0;
}
