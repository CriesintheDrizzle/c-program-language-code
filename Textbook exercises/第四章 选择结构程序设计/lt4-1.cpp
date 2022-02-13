#include<stdio.h>
int main()
{
	char ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º\n");
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?ch+32:ch;
	printf("%c",ch);
	return 0;
}
