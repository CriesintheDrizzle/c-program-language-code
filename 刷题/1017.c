#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int N = 0;
	int num = 0;
	int sum = 0;
	int i, j;

	scanf("%d", &N);
	for (i = 2; i <= N; i++)         //1~Nѭ��
	{
		sum = 0;
		for (j = 1; j < i; j++)      //��i������
		{
			if (i % j == 0)
			{
				sum = sum + j;       //�������
			}
		}
		if (i == sum)
		{
			printf("%d its factors\n", i);
		}
	}

	return 0;
}