#include<stdio.h>
int main()
{
	int r;
	for(r=10;r<=20;r++)
	{
		if(r>15) continue;
		printf("%d ",r);
	}
	printf("\nr=%d",r);
	return 0;
}
