#include<stdio.h>
int main()
{
	int mouth,year;
	int season,days;
	printf("��������ݣ��·ݣ�\n");
	scanf("%d,%d",&year,&mouth);
	if((year%4==0&&year&100!=0)||year%400==0)
	printf("%dΪ���꣡\n",year);
	else 
	printf("%d�������꣡\n",year);
	if(mouth>=3&&mouth<=5)       season=1;
	else if(mouth>=6&&mouth<=8)  season=2;
	else if(mouth>=9&&mouth<=11) season=3;
	else season=4; 
	switch(season)
	{
		case 1:
			printf(" ���·�Ϊ������\n");
			break;
		case 2:
		    printf(" ���·�Ϊ�ļ���\n");
		    break;
		case 3:
			printf(" ���·�Ϊ�＾��\n");
			break;
		case 4:
		    printf(" ���·�Ϊ������\n");
		    break;
	}
	printf("�ü����� ");
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
    printf("���µ�����Ϊ��%d\n",days);
    return 0;
}
