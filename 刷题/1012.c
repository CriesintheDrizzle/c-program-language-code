#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>
int main()
{
    int letter = 0, number = 0, blank = 0, others = 0, c;        //�ֱ�Ϊ��ĸ�����֡��ո�����
    while ((c = getchar()) != '\n') 
    {
        if (isalpha(c))              //�ж��Ƿ�Ϊ��ĸ
            letter++;
        else if (isdigit(c))         //�ж��Ƕ�Ϊ����
            number++;
        else if (c == ' ')           //�ж��Ƿ�Ϊ�ո�
            blank++;
        else                        //����
            others++;
    }
    printf("%d %d %d %d\n", letter, number, blank, others);
    return 0;
}