#include<stdio.h>
int main()
{
	int i,j,a[i][j],max,h=0,l=0;
	printf("������һ��3x4�ľ���\n");
	for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	   scanf("%d",&a[i][j]);
	max=a[0][0];
	for(i=0;i<3;i++)
	   for(j=0;j<4;j++)
	   	if(a[i][j]>max)
	   	{
	   		max=a[i][j];
	   		h=i;
	   		l=j;
		}
	   
	printf("���������ֵmax=%d,�ڵ�%d�У���%d�С�",max,l,h);
	return 0;
}
