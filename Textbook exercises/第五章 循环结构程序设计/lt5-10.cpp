#include<stdio.h>
int main()
{
	int n,i;
	int sum=1;
	printf("ÇëÊäÈënµÄÖµ£º\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum*i;
	printf("%d!=%d",n,sum);
	return 0;
}
