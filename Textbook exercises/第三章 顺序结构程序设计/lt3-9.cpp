#include<stdio.h>
int main()
{
	char c;
	scanf("c=%c",&c);
	printf("%c,%d\n",c,c);
	printf("%3c\n",c);
	printf("%-3c\n",c);
	printf("%s,%6.3s\n","C program","C program");
	return 0;
}
