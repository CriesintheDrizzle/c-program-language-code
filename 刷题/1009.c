#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int num = 0;
	int temp, i;
	int count = 0;//�����Ϊ��λ��
	scanf("%d", &num);
	temp = num;
	while (temp)
	{
		count++;
		temp = temp / 10;
	}
	printf("%d\n", count);

	//˳�����
	for (int i = count - 1; i >= 0; i--)
	{
		temp = num / pow(10, i);
		printf("%d ", temp % 10);
	}
	printf("\n");

	//�������
	for (int i = 0; i <= count-1; i++)
	{
		temp = num / pow(10, i);
		printf("%d", temp % 10);
	}

	return 0;
}