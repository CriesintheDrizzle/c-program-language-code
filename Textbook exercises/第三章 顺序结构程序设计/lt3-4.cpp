#include<stdio.h>
int main()
{
	char a='m';
	int m=97;
	putchar('a');        //参数为被一个单引号引起的字符时，输出该字符
	 
	putchar(a);          //参数为一个事先用char定义好的字符型变量时，输出该变量所指向的字符。
	
	putchar('\n');
	putchar(m);          //参数为一个事先用int定义好的变量时，输出ASCII代码值所对应的字符
	 
	putchar(65);         //参数为介于0~127（包括0和127）输出其对应的ASCII码对应的字符
	 
	putchar('A'+1);
	putchar(65+1);
	putchar('\n');
	return 0;
	
} 
