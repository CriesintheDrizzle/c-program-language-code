#include<stdio.h>
#define Pi 3.14 
int main()
{
	float r,s;
	for(r=0.5;r<=5.5;r++)
	{
		s=Pi*r*r;
		printf("µ±r=%.2f s=%.2f\n",r,s); 
	}
	return 0;
}
