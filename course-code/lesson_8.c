#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}



//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1! + 2! + 3!
//	// 1   2   6 = 9
//	//1*2*..*n
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//�������еĽ����ʲô��
//
//	return 0;
//}


//Ԥ����������
//ͨ������ļ��ɣ����ٴ���

//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include <string.h>

//д����
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
//
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(NULL, arr2);
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcpy

#include <stdio.h>
#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello�Ŀ���
//	}
//	*dest = *src;// \0�Ŀ���
//}
#include <assert.h>

//
//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//
//strcpy ����⺯�� ��ʵ���ص���Ŀ��ռ����ʼ��ַ
//
//
//char* my_strcpy(char* dest, const char * src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello�Ŀ���
//	}
//
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
////strlen �����ַ������ȵ�
////my_strlen
////1. const 
////2. assert
//
//int main()
//{
//	
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	//1. Ŀ��ռ����ʼ��ַ��2. Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//printf("%d\n", num);
//
//	//2.
//	//const ���α�������������ͱ���Ϊ������,���ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//	//
//
//	const int num = 10;
//	//num = 20;//err
//
//	//int* const p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*���ұߣ����ε���ָ�����p,��ʾָ��������ܱ��ı�
//	////      ����ָ��ָ������ݣ����Ա��ı�
//	//*p = 20;//ok
//	//p = &n;//err
//
//
//	//const int* p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*����ߣ����ε���*p,��ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////      ����ָ����������ǿ����޸ĵ�
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}
// 
//
//��׳��
//³����
//
//size_t - unsigned int

//�����ⲿ����
//extern size_t my_strlen(const char* str);
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//Ҫ��������žͲ�����
//Ҫ������д����