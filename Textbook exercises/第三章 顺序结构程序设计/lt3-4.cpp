#include<stdio.h>
int main()
{
	char a='m';
	int m=97;
	putchar('a');        //����Ϊ��һ��������������ַ�ʱ��������ַ�
	 
	putchar(a);          //����Ϊһ��������char����õ��ַ��ͱ���ʱ������ñ�����ָ����ַ���
	
	putchar('\n');
	putchar(m);          //����Ϊһ��������int����õı���ʱ�����ASCII����ֵ����Ӧ���ַ�
	 
	putchar(65);         //����Ϊ����0~127������0��127��������Ӧ��ASCII���Ӧ���ַ�
	 
	putchar('A'+1);
	putchar(65+1);
	putchar('\n');
	return 0;
	
} 
