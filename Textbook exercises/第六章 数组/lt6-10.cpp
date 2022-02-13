#include<stdio.h>
int main()
{
	int i;
	char c[15];
	printf("请输入字符数组的各元素：\n");
	for(i=0;i<15;i++)
	   scanf("%c",&c[i]);
	printf("字符数组为：\n");
	for(i=0;i<15;i++)
	   printf("%c",c[i]);
	printf("\n");
	return 0;
}
