#include<stdio.h>
int main()
{
	int date;
	printf("请输入2021年3月的任何一天：\n");
	scanf("%d",&date);
	if(date<0||date>31)
	printf("请输入正确日期\n");
	else
	switch(date%7)
	{
		case 6:printf("3/%d/2021是星期六 \n",date);break;
		case 5:printf("3/%d/2021是星期五 \n",date);break;
		case 4:printf("3/%d/2021是星期四 \n",date);break;
		case 3:printf("3/%d/2021是星期三 \n",date);break;
		case 2:printf("3/%d/2021是星期二 \n",date);break;
		case 1:printf("3/%d/2021是星期一 \n",date);break;
		default:printf("3/%d/2021是星期天 \n",date);
	}
	return 0;
}
