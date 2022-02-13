#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//一、库函数
//函数strcpy
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}

//函数memset
//int main()
//{
//	char arr[] = "hello sb";
//	memset(arr, 'x', 5);
//
//	printf("%s", arr);
//
//	return 0;
//}


//二、自定义函数

//例子：写一个函数找出两个数中的较大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("max=%d\n", max);
//
//	return 0;
//}

//例子：交换两个数—下面代码有问题
//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//
//	return 0;
//}
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//三、函数的参数

//四、函数的调用

//练习题
//1.写一个函数可以判断一个数是不是素数。
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//2. 写一个函数判断一年是不是闰年。p45-3：34
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//3. 写一个函数，实现一个整形有序数组的二分查找。
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	int mid = (left + right) / 2;
//
//	while (left<=right)
//	{
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//必须先在main函数求个数
//
//	//数组arr传参，实际上传递的不是数组的本身，仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key, sz);
//
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，其下标为：%d\n", ret);
//	}
//	return 0;
//}

//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num); 
//	
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


//五、函数的嵌套调用和链式访问
//1）嵌套调用
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

//2）链式访问
//#include<string.h>
//int main()
//{
//    //int len = strlen("abc");
//    //printf("%d\n", len);
//    ////链式访问
//    //printf("%d\n", strlen("abc"));//把一个函数的返回值作为另外一个函数的参数。
//
//    //char arr1[20] = { 0 };
//    //char arr2[] = { "bit" };
//    //printf("%s\n", strcpy(arr1, arr2));
//
//    //printf("%d", printf("%d", printf("%d", 234)));//printf函数返回值是打印在屏幕上的字符的个数
//
//    return 0;
//}

//函数另一种编写方式
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}


//六、函数递归—大事化小

//练习一接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出 1 2 3 4.
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归—自己调用自己
//	print(num);
//
//	return 0;
//}

//练习二—编写函数不允许创建临时变量，求字符串的长度。
//1.
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\0']
//	//模拟实现一个strlen的函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
//2.
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//练习三—求n的阶乘。（不考虑溢出）
//1.普通方法（迭代）
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//2.递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}


//练习四—求第n个斐波那契数。（不考虑溢出）
//int count = 0;
//int Fib(int n)
//{
//	//统计第三个斐波那契数的计算次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	return 0;
//}