#include<stdio.h>
int main()
{
	float x,y;
	printf("ÇëÊäÈëxµÄÖµ£º\n");
	scanf("%f",&x);
	if(x>0)
	y=3*x-1;
	else
	{
		if(x=0)
		y=x;
		else
		2*x+1;
	}
	printf("y=%.2f",y);
	return 0;
}
