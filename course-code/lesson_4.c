#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一维数组的创建和初始化
//int main()
//{
//	//创建
//	int arr[10];
//	char ch[20];
//
//	//初始化
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//
//	//使用
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//一维数组在内存中的存储
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


//二、二维数组的创建和初始化
//int main()
//{
	//创建
	//int arr[3][4];
	//char ch[3][10];

	//初始化
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = { 1,2,3,4 };
	//int arr[3][4] = { {1,2},{4,5} };//不完全初始化
	//int arr[][4] = { {2,3},{4,5} };

	//二维数组的使用
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

	//二维数组在数组中的存储
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


//三、数组作为函数参数
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
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
//	//排序成升序—冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}