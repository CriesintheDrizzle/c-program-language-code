#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//��������
#define ROW 3
#define COL 3

//��ʼ�����̺���������
void InitBoard(char board, int row, int col);

//��ӡ���̺���������
void DisplayBoard(char board, int row, int col);

//������庯������
void PlayerMove(char board, int row, int col);

//�������庯������
void ComputerMove(char board, int row, int col);


//�ж���Ӯ����������
char IsWin(char board, int row, int col);