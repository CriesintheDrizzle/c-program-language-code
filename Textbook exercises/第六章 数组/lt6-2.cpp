#include<stdio.h>
int main()
{
	int i,score[8],max,min,sum;
	float avg;
	sum=0;
	printf("������8λѧ���ĳɼ���\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&score[i]);
	    sum=sum+score[i];
	}
	max=min=score[0];
	for(i=0;i<8;i++)
	{
		if(score[i]>score[0])
		max=score[i];
		if(score[i]<score[0])
		min=score[0];
	}
	avg=sum/8.0;
	printf("\n8λѧ������߷�Ϊ��%d\n��ͷ�Ϊ��%d\nƽ����Ϊ��%.2f\n",max,min,avg);
	return 0;
}
