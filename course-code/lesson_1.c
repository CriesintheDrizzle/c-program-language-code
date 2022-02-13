#define _CRT_SECURE_NO_WARNINGS 1
//一、写代码
//1.写出主函数
//如何执行呢？-C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//写个代码，在屏幕上打印：hehe
//printf-库函数-在屏幕上打印信息的
//printf的使用，得打招呼（引用头文件stdio.h）

#include<stdio.h>
//int main()
//{
//	printf("hehe\n");  
//printf("%d\n", 100);
//	return 0;          
//}

//二、数据类型

//a
//'a'-字符a

//int main()
//{
//	//char ch;      //定义一个空间来存储字符
//
//	//计算类型或者变量所占空间的大小—sizeof—关键字—操作符
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//三、常量与变量

//1、变量
//int a = 100;                      //全局变量。大括号外
//
//int main()
//{
//	//创建一个变量
//	//类型  变量的名字=0
//	//类型  变量的名字；—不推荐
//
//	int age = 20;                  //局部变量age、weight。大括号内
//	double weight = 52.1;
//	int a = 10;
//
//	age = age + 1;
//	weight = weight - 3;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//%d- 整型
//	//%f- 浮点型
//	//%lf-双精度
//	printf("%d\n", a);             //当局部变量和全局变量名字冲突的情况下，局部优先。但不建议把局部与全局变量名字一样
//
//	return 0;
//}

//写一个代码求2个整数的和
//scanf函数是输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//2、变量的作用域
//若是同一工程，不同文件使用变量需要声明：extern int g_val；

//int g_val = 2021;//三次都可打印
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	int a = 10;
//	printf("%d\n", a);//a的作用域
//	{
//		int b = 10;
//		printf("2:%d\n", g_val);
//	}
//	//printf("%d", b);//打印不了
//	printf("3:%d\n", g_val);
//	return 0;
//}

//生命周期
//变量的生命周期；变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：整个工程


//3、常量
//四类 


//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};

//#define MAX 2000
//int main()
//{
//  1、字面常量
//	3.14;
//	10;
//	'a';
//	"abcf";
//
//	2、const修饰的常变量
//	const int num = 10;//num为常变量—具有常属性
//	num = 20;
//	printf("num=%d", num);
//	int arr[10];
//
//	const int n = 10;
//	int arr2[n];//加上const仍然不行
//
//	3、define定义的标识符常量：见107行
//	int n = MAX;
//	printf("%d", n);
//
//	4、枚举常量
//	可以一一列举的常量
//	enum Sex s = MALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}



//四、字符串
//#include<string.h>
//int main()
//{
//	//"abdcdj";
//	//"hello";
//
//	//字符数组—数组是一组同一类型的元素
//	//字符串在结尾隐藏了一个\0
//	//\0是字符串的结束标志
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//求字符串长度strlen（）
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr2));//随机值
//
//
//	return 0;
//}


//五、转义字符

//int main()
//{
//    //在屏幕上打印：c:\code\test.c
//    //下行程序打印不出来
//    //printf("c:\code\test.c\n");
//    //应改为：
//    //printf("c:\\code\\test.c\n");
//
//    //printf("(are you ok??)");//??)—]—三字母词
//    
//    //printf("%c\n", '\130');//八进制130对应十进制88—X
//    //printf("%c\n", '\101');//A-65-八进制是：101
//
//    //printf("%c\n", '\x30');//48-'0'
//
//    //printf("%d\n", strlen("c:\test\328\test.c"));
//
//    return 0;
//}

//六、初识选择语句

//int main()
//{
//	int input;
//	printf("你要好好学习吗（1/0）？\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}


//七、初识循环语句

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer!");
//	}
//	return 0;
//}


//八、初识函数

//add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	int sum = 0;
//	scanf("%d %d", &x, &y);
//
//	//sum = x + y;
//	//函数方式解决
//	sum = add(x, y);
//	printf("sum=%d", sum);
//	return 0;
//}


//九、初识数组

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//可赋值
//	//char ch[5] = { 'z','w','t' };//不完全初始化，其余值默认为0.
//
//	int i, a[10];
//	while(i<10)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//	return 0;
//}


//十、操作符

//操作符:~按位取反
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//十一、关键字

//int main()
//{
	//1、auto-是自动的，每个局部变量都是auto修饰的
	//int a = 10;//一般会省略
	//新的C语言语法中也有其他用法-暂时不考虑

	//2、extern是用来申明外部符号的

	//3、register 寄存器关键字
	//register int num = 100;//建议num的值存放在寄存器中

	//4、union(共用体)

	//5、void 空

	//6、volatile

	//typedef：类型重定义


	//return 0;
//}


//typedef：类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}


//static—静态的
//1.static修饰局部变量
//2.static修饰全局变量—使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其他源文件不行
//3.static修饰函数—使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用

//void test()
//{
//	static int a = 1;//加上了static：2-11。本质上是改变了变量的存储类型(栈区变为静态区）
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//十二、define定义宏
//define是一个预处理指令

//#define ADD(X,Y) X+Y
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	//printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}


//十三、初识指针
//指针就是地址

//int main()
//{
//	int a = 10;//a在内存中要分配空间的—四个字节
//	int* pa;//*说明pa是指针变量 int说明pa执行的对象是int类型的
//	printf("%p\n", &a);//%p专门用来打印地址
//	pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//
//	char* pc;
//	char ch = 'w';
//	pc = &ch;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*解引用操作 *pa就是通过pa里边的地址，找到a
//
//	printf("%d\n", a);
//	return 0;
//}

//指针变量的大小
//int main()
//{
//	//都为4字节
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}



//十四、结构体

//创建一个学生
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
//	printf("1：%s  %d  %lf\n", s.name, s.age, s.score);//结构体变量，成员变量
//
//	struct Stu* ps = &s;
//	printf("2：%s  %d  %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3：%s  %d  %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}