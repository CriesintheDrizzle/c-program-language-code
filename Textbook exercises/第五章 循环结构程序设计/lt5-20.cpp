#include<stdio.h>
int main()
{
	int i,n;
	printf("1~200以内的素数为:\n");
	for(i=1;i<=200;i++)
	{
		for(n=2;n<=i-1;n++)
			if(i%n==0)
		    break;
		    if(n==i)
		    printf("%d\t",i);
		
	}
	printf("\n");
	return 0;
}
