#include<stdio.h>          //从键盘输入两个字符，然后把它们输出到屏幕 
int main()
{
	int m,n;
	printf("输入\n");
	m=getchar();
	n=getchar();
	printf("输出\n");
	putchar(m);
	putchar(n);
	putchar('\n');
	return 0;
}
