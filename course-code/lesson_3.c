#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//һ���⺯��
//����strcpy
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

//����memset
//int main()
//{
//	char arr[] = "hello sb";
//	memset(arr, 'x', 5);
//
//	printf("%s", arr);
//
//	return 0;
//}


//�����Զ��庯��

//���ӣ�дһ�������ҳ��������еĽϴ�ֵ
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
//	//�����ĵ���
//	int max = get_max(a, b);
//
//	printf("max=%d\n", max);
//
//	return 0;
//}

//���ӣ��������������������������
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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("������a=%d,b=%d\n", a, b);
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
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//���������Ĳ���

//�ġ������ĵ���

//��ϰ��
//1.дһ�����������ж�һ�����ǲ���������
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

//2. дһ�������ж�һ���ǲ������ꡣp45-3��34
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

//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������main���������
//
//	//����arr���Σ�ʵ���ϴ��ݵĲ�������ı�����������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);
//
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ����±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}

//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
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


//�塢������Ƕ�׵��ú���ʽ����
//1��Ƕ�׵���
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

//2����ʽ����
//#include<string.h>
//int main()
//{
//    //int len = strlen("abc");
//    //printf("%d\n", len);
//    ////��ʽ����
//    //printf("%d\n", strlen("abc"));//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
//
//    //char arr1[20] = { 0 };
//    //char arr2[] = { "bit" };
//    //printf("%s\n", strcpy(arr1, arr2));
//
//    //printf("%d", printf("%d", printf("%d", 234)));//printf��������ֵ�Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//
//    return 0;
//}

//������һ�ֱ�д��ʽ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}


//���������ݹ顪���»�С

//��ϰһ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234����� 1 2 3 4.
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
//	//�ݹ顪�Լ������Լ�
//	print(num);
//
//	return 0;
//}

//��ϰ������д��������������ʱ���������ַ����ĳ��ȡ�
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
//	//ģ��ʵ��һ��strlen�ĺ���
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


//��ϰ������n�Ľ׳ˡ��������������
//1.��ͨ������������
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
//2.�ݹ�
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


//��ϰ�ġ����n��쳲����������������������
//int count = 0;
//int Fib(int n)
//{
//	//ͳ�Ƶ�����쳲��������ļ������
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