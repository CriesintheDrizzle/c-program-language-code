#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һά����Ĵ����ͳ�ʼ��
//int main()
//{
//	//����
//	int arr[10];
//	char ch[20];
//
//	//��ʼ��
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//
//	//ʹ��
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ�����ԣ�
//	int i = 0;//���±�
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//������������
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//һά�������ڴ��еĴ洢
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//
//	return 0;
//}


//������ά����Ĵ����ͳ�ʼ��
//int main()
//{
	//����
	//int arr[3][4];
	//char ch[3][10];

	//��ʼ��
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,3,4 };
	//int arr[3][4] = { {1,2},{4,5} };//����ȫ��ʼ��
	//int arr[][4] = { {2,3},{4,5} };

	//��ά�����ʹ��
	/*int arr[][4] = { {1,2},{3,4},{4,5} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	//��ά�����������еĴ洢
	//int arr[][4] = { {1,2},{3,4},{4,5} };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
	//	}
	//}
	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}
//	return 0;
//}


//����������Ϊ��������
//ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	//���������ð������
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}