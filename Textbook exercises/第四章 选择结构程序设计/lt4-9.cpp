#include<stdio.h>
int main()
{
	long int num;
	int indiv,ten,hundred,thousand,n;
	printf("������һ��0~9999֮������֣�\n");
	scanf("%d",&num);
	if(num>999)               n=4;
	else if(num>99&&num<=999) n=3;
	else if(num>9&&num<=99)   n=2;
	else n=1;
	printf("�����������Ϊ%dλ��\n",n);
	thousand=num/1000;
	hundred=num/100%10;
	ten=num/10%10;
	indiv=num%10;
	switch(n)
	{
		case 4:
		printf("�������������Ϊ��%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
		printf("�������������Ϊ��%d,%d,%d,%d\n",indiv,ten,hundred,thousand);
		break;
		case 3:
		printf("�������������Ϊ��%d,%d,%d\n",hundred,ten,indiv);
		printf("�������������Ϊ��%d,%d,%d\n",indiv,ten,hundred);
		break;
		case 2:
		printf("�������������Ϊ��%d,%d\n",ten,indiv);
		printf("�������������Ϊ��%d,%d\n",indiv,ten);
		break;
		case 1:
		printf("�������������Ϊ��%d",indiv);
		printf("�������������Ϊ��%d",indiv);
		break;
	}
	return 0;
}
