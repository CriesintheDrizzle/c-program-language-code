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
//	//代码运行的结果是什么？
//
//	return 0;
//}


//预防发生错误
//通过编码的技巧，减少错误

//模拟实现strcpy
//strcpy - 字符串拷贝
#include <string.h>

//写不好
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

//模拟实现strcpy

#include <stdio.h>
#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello的拷贝
//	}
//	*dest = *src;// \0的拷贝
//}
#include <assert.h>

//
//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改
//
//strcpy 这个库函数 其实返回的是目标空间的起始地址
//
//
//char* my_strcpy(char* dest, const char * src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello的拷贝
//	}
//
//	return ret;//返回目标空间的起始地址
//}
//
////strlen 是求字符串长度的
////my_strlen
////1. const 
////2. assert
//
//int main()
//{
//	
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	//1. 目标空间的起始地址，2. 源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
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
//	//const 修饰变量，这个变量就被称为常变量,不能被修改，但是本质上还是变量
//	//
//
//	const int num = 10;
//	//num = 20;//err
//
//	//int* const p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的右边，修饰的是指针变量p,表示指针变量不能被改变
//	////      但是指针指针的内容，可以被改变
//	//*p = 20;//ok
//	//p = &n;//err
//
//
//	//const int* p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的左边，修饰的是*p,表示指针指向的内容，是不能通过指针来改变的
//	////      但是指针变量本身是可以修改的
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}
// 
//
//健壮性
//鲁棒性
//
//size_t - unsigned int

//声明外部符号
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

//要不这个符号就不存在
//要不符号写错了