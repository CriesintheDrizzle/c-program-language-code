#include<stdio.h>
int main()
{
	long int num;
	int indiv,ten,hundred,thousand,n;
	printf("请输入一个0~9999之间的数字：\n");
	scanf("%d",&num);
	if(num>999)               n=4;
	else if(num>99&&num<=999) n=3;
	else if(num>9&&num<=99)   n=2;
	else n=1;
	printf("您输入的数字为%d位数\n",n);
	thousand=num/1000;
	hundred=num/100%10;
	ten=num/10%10;
	indiv=num%10;
	switch(n)
	{
		case 4:
		printf("正序输出该数字为：%d,%d,%d,%d\n",thousand,hundred,ten,indiv);
		printf("逆序输出该数字为：%d,%d,%d,%d\n",indiv,ten,hundred,thousand);
		break;
		case 3:
		printf("正序输出该数字为：%d,%d,%d\n",hundred,ten,indiv);
		printf("逆序输出该数字为：%d,%d,%d\n",indiv,ten,hundred);
		break;
		case 2:
		printf("正序输出该数字为：%d,%d\n",ten,indiv);
		printf("逆序输出该数字为：%d,%d\n",indiv,ten);
		break;
		case 1:
		printf("正序输出该数字为：%d",indiv);
		printf("逆序输出该数字为：%d",indiv);
		break;
	}
	return 0;
}
