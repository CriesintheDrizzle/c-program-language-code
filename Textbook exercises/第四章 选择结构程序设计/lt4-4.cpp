#include<stdio.h>
int main()
{
	float score;
	printf("请输入学生的成绩:\n");
	scanf("%f",&score);
	if(score>=90&&score<=100)
	printf("该学生的成绩为：优");
	
	else if(score>=80&&score<=89)
	printf("该学生的成绩为：良");
	
	else if(score>=70&&score<=79)
	printf("该学生的成绩为：中");
	
	else if(score>=60&&score<=69)
	printf("该学生的成绩为：及格");
	
	else if(score<60)
	printf("该学生的成绩为：不合格");
	
	return 0;                                                                                                                                                                                                                                                             
}
