#include<stdio.h>
int main()
{
	int mouth,year;
	int season,days;
	printf("请输入年份，月份：\n");
	scanf("%d,%d",&year,&mouth);
	if((year%4==0&&year&100!=0)||year%400==0)
	printf("%d为闰年！\n",year);
	else 
	printf("%d不是闰年！\n",year);
	if(mouth>=3&&mouth<=5)       season=1;
	else if(mouth>=6&&mouth<=8)  season=2;
	else if(mouth>=9&&mouth<=11) season=3;
	else season=4; 
	switch(season)
	{
		case 1:
			printf(" 该月份为春季！\n");
			break;
		case 2:
		    printf(" 该月份为夏季！\n");
		    break;
		case 3:
			printf(" 该月份为秋季！\n");
			break;
		case 4:
		    printf(" 该月份为冬季！\n");
		    break;
	}
	printf("该季度是 ");
	switch(days)
	{
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 10:
	    case 12:days=31;break;
	    case 4:
	    case 6:
	    case 9:
	    case 11:days=30;break;
	    case 2:
	    if((year%4==0&&year&100!=0)||year%400==0)
	    days=29;
	    else
	    days=28;
    }
    printf("该月的天数为：%d\n",days);
    return 0;
}
