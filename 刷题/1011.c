#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int m, n;
	int j, k;
	int lcm, gcd = 1;
	scanf("%d %d", &m, &n);
	j = m;                    //��j��k��ʾm��n�����ƻ�m��n��ֵ
	k = n;
	if (j > k)                //ȷ��j�ǽ�С���Ǹ�ֵ
	{
		j = n;
		k = m;
	}
	for (int i = 2; i <= j; i++)        //ѭ��Ѱ�Ҵ�i��j�����ӣ�ע��j�ǿɱ�ģ���i�ᱻ���ã�
	{
		if (j % i == 0 && k % i == 0)   //�ж�i�Ƿ�Ϊj��k�Ĺ�����
		{
			j = j / i;                  //j��k�ֱ����i
			k = k / i;
			gcd = gcd * i;              //gcd����i
			i = 1;                      //��i����Ϊ1 ��ѭ��ĩβ��i++��
		}
	}
	lcm = gcd * j * k;
	printf("%d %d\n", gcd, lcm);
	return 0;
}