#include<stdio.h>
int main()
{
	int date;
	printf("������2021��3�µ��κ�һ�죺\n");
	scanf("%d",&date);
	if(date<0||date>31)
	printf("��������ȷ����\n");
	else
	switch(date%7)
	{
		case 6:printf("3/%d/2021�������� \n",date);break;
		case 5:printf("3/%d/2021�������� \n",date);break;
		case 4:printf("3/%d/2021�������� \n",date);break;
		case 3:printf("3/%d/2021�������� \n",date);break;
		case 2:printf("3/%d/2021�����ڶ� \n",date);break;
		case 1:printf("3/%d/2021������һ \n",date);break;
		default:printf("3/%d/2021�������� \n",date);
	}
	return 0;
}
