#include<stdio.h>
int main()
{
	int n;
	float price,discount;
	printf("请输入购买数额：\n");
	scanf("%d",&n);
	if(n<0)
	printf("您的输入有误，请输入正确的购买数额！");
	else
	{
		if(n>=0&&n<100) discount=0;
		else if(n>=100&&n<200) discount=0.05;
		else if(n>=200&&n<300) discount=0.07;
		else if(n>=300&&n<400) discount=0.10;
		else if(n>=400&&n<500) discount=0.15;
		else discount=0.20;
	}
	price=4.5*n*(1-discount);
	printf("应付金额：%.2f",price);
	return 0;
}
