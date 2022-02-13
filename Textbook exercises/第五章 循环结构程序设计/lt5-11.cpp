#include<stdio.h>
int main()
{
	int i,j;
	int n,a,sum=0;
	printf("ÇëÊäÈënµÄÖµ£º\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
		sum=sum+a;
	}
	printf("sum=%d",sum);
	return 0;
}
