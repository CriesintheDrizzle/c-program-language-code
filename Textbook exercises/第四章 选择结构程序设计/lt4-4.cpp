#include<stdio.h>
int main()
{
	float score;
	printf("������ѧ���ĳɼ�:\n");
	scanf("%f",&score);
	if(score>=90&&score<=100)
	printf("��ѧ���ĳɼ�Ϊ����");
	
	else if(score>=80&&score<=89)
	printf("��ѧ���ĳɼ�Ϊ����");
	
	else if(score>=70&&score<=79)
	printf("��ѧ���ĳɼ�Ϊ����");
	
	else if(score>=60&&score<=69)
	printf("��ѧ���ĳɼ�Ϊ������");
	
	else if(score<60)
	printf("��ѧ���ĳɼ�Ϊ�����ϸ�");
	
	return 0;                                                                                                                                                                                                                                                             
}
