#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int N = 0;     //��N��
	int num = 1;   //����
	int i = 0;

	scanf("%d", &N);
	for (i = N - 1; i > 0; i--)
	{
		num = (num + 1) * 2;
	}
	printf("%d\n", num);
	return 0;
}