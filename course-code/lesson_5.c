#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 6 / 5;//0.6
//	//printf("%d\n", a);
//
//	//float a = 6 / 5;
//	//printf("%f\n", a);
//
//	float a = 6.0 / 5.0;
//	printf("%f\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 7 % 3;//
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	int b = a << 1;
//
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	//把a的二进制位向右移动1位
//	int b = a >> 1;
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//把a的二进制位向右移动1位
//	int b = a >> 1;
//	//当前的右移操作符使用的：算术右移
//	printf("b = %d\n", b);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	int b = a << -5;//
//
//	return 0;
//}
//



//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//^  - 按（2进制）位异或
//	//对应的二进制位进行异或
//	//规则：相同为0，相异为1
//
//	int c = a ^ b;
//	printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//6
//
//
//	//  | - 按（2进制）位或
//	//int c = a | b;
//	//printf("%d\n", c);
//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	
//	 
//	// 
//	//& -  按（2进制）位与
//	//int c = a & b;
//	//printf("c = %d\n", c);
//	//
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//}


//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换
//	// 
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//
//	//printf("a = %d b = %d\n", a, b);
//	////数值太大会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d b = %d\n", a, b);
//
//	//int c = 0;//空瓶
//	//printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	//a ^ a = 0;
//	//0 ^ a = a;
//	//000
//	//011
//	//011
//	//
//	//011
//	//011
//	//000
//	return 0;
//}


////
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	//& >>
//
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	//把a的二进制中的第5位置成1
//	a = a | (1 << 4);
//	printf("a = %d\n", a);//29
//	//把a的二进制中的第5位置成0
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);//13
//
//	//
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101
//	// 	                          
//	//1<<4
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//00000000000000000000000000001101
//	//1<<4
//	return 0;
//}


//
//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;//1
//	a += 100;   //2
//	a = a >> 3;
//	a >>= 3;
//
//	return 0;
//
// 
//=  -- 赋值
//== -- 判断
//
//int main()
//{
//	int flag = 0;
//	printf("%d\n", !flag);//
//
//	//flag为真，打印hehe
//	//if (flag)
//	//{
//	//	printf("hehe\n");
//	//}
//	////flag为假,打印haha
//	//if (!flag)
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//单目操作符 - 只有一个操作数
//
//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d\n", a);
//	return 0;
//}

//
//int  main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));//
//	printf("%d\n", s);//
//
//	//int a = 10;
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));//单位是字节
//	//printf("%d\n", sizeof(int [10]));//40 - int [10]是arr数组的类型
//
//
//	//printf("%d\n", sizeof(a));//计算a所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//sizeof是一个操作符，不是函数
//
//	return 0;
//}

//
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//~ 按位取反
//	//11111111111111111111111111111111
//	//00000000000000000000000000000000
//	//
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);//10
//	printf("%d\n", a);//9
//
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，  先++，后使用
//
//	//int b = a--;//后置--，先使用，后--
//	//int b = --a;
//	//printf("%d\n", a);//
//	//printf("%d\n", b);//
//
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//& - 取地址操作符
//	int * pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;//* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a);//20
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a == b)
//	//if(a != b)
//	//if(a>b)
//	//if(a < b)
//	if(a <= b)
//	{
//
//	}
//	return 0;
//}
// = 赋值 == 判断相等

//== 
//比较2个字符串相等 不能使用 == 
//

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if (a && b)
//	if(a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++ || ++b || d++;
//    printf("a = %d\nb = %d\nc = %d\nd =%d\n", a, b, c, d);
//
//    return 0;
//}
//
//
//
//
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 - 要从做向右依次计算，但是整个表达式的结果是最后一个表达式的结果
//
//	int d = (c = 1, a = c + 3, b = a - 4, c += b);
//
//	//c=10  a=8         b=4    
//	printf("%d\n", d);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1     4
//	printf("%d\n", arr[4]);//[] - 就是下标引用操作符
//	//[] 的操作数是2个：arr , 4
//	// 
//	//3+5；
//	return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);//() - 函数调用操作符
//	test();
//
//	return 0;
//}

//结构成员访问操作符
//.
//->

//结构体
//
//int float char short 
//double long 
//
//书：书名，书号，定价
//人：名字，年龄，性别
//

//创建了一个自定义的类型
//struct Book
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//int num = 10;
//	//结构体变量名.成员名
//	struct Book b = {"C语言", "C20210509", 55};
//	struct Book * pb = &b;
//
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//
//	//printf("书名：%s\n", (*pb).name);
//	//printf("书号：%s\n", (*pb).id);
//	//printf("定价：%d\n", (*pb).price);
//
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("定价：%d\n", b.price);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//
//	return 0;
//}
//
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	//发现a和b都是char类型的，都没有达到一个int的大小
//	//这里就会发生整形提升
//
//	printf("%d\n", c); //-126
//
//	return 0;
//}


//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//	return 0;
//}

//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	printf("%u\n", sizeof(!c));//4 gcc - 4
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	short s = 5;
//	sizeof(s = a + 3);
//	a + b;//值属性，类型属性 int
//	return 0;
//}

//
//
//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}
//
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//优先级不起作用，结合性决定了，顺序
//
//	return 0;
//}
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    //2-3*4 = -10
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}
//


//int main()
//{
//	int i = 1;
//
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//
//	return 0;
//}

//VS  - 12
//gcc - 10

//作业跟上！

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));//4*4=16
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    //[hello bit\0]
//    printf("%d %d\n", sizeof(str), strlen(str));
//    //10 9
//    //strlen - 函数-求字符串长度的，找\0之前出现的字符个数
//    //sizeof - 操作符-计算变量/类型所占内存大小，单位是字节
//
//    char acX[] = "abcdefg";//a b c d e f g \0
//    char acY[] = {'a','b','c','d','e','f','g' };
//
//        //A.数组acX和数组acY等价 no
//        //B.数组acX和数组acY的长度相同 no
//        //C.数组acX的长度大于数组acY的长度 yes
//        //D.数组acX的长度小于数组acY的长度 no
//    //int a[2][] = { {0,1,2},{3,4,5} };//no
//    //int a[][3] = { {0,1,2},{3,4,5} };//yes
//   // int a[2][4] = { {0,1,2},{3,4},{5} };//no
//    //int a[][3] = { {0,,2},{},{3,4,5} };//no
//
//    return 0;
//}
//


//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
//


//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	//int arr3[5] = {0};
//	//数组名是数组首元素的地址 - 0x0012ff44
//	//3 = 5;//err
//	/*arr3 = arr1;
//	arr1 = arr2;
//	arr2 = arr3;*/
//
//	return 0;
//}
//
//
//