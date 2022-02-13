#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、分支语句
// 1）if else
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("成年\n");
//
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//
//	//if (age < 18)
//	//	printf("少年\n");
//	//else if (age >= 18 && age < 26)
//	//	printf("青年\n");
//	//else if (age >= 26 && age < 40)
//	//	printf("中年\n");
//	//else if (age >= 40 && age < 60)
//	//	printf("壮年\n");
//	//else if (age >= 60 && age <= 100)
//	//	printf("老年\n");
//	//else printf("老不死\n");
//
//	//else悬空问题—代码风格—《高质量C/C++编程》
//	//下面代码什么都不打印
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//	if (b == 2)
//	//		printf("hehe\n");
//	//else
//	//	printf("haha\n");
//
//	return 0;
//}

//2）switch语句
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n"); 
//		break;
//	case 2:
//		printf("星期二\n"); 
//		break;
//	case 3:
//		printf("星期三\n"); 
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n"); 
//		break;
//	case 6:
//		printf("星期六\n"); 
//		break;
//	case 7:
//		printf("星期天\n"); 
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//最后一个break最好加上
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//二、循环语句
//1）while语句
//int main()
//{
//	int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;//在while循环中，break用于永久终止循环。

	//	printf("%d ", i);
	//	i++;
	//}

//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue的作用是跳过本次循环continue后边的代码，直接去判断部分
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//代码分析

//putchar与getchar
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//getchar
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%d", password);
//	printf("请确认密码：");
//	//清理缓冲区
//	//getchar();处理\n
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//2）for语句
//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//break和continue在for语句中的情况
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//跳出循环
//			//continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}


//3）do...while语句

//continue和break在do...while中的情况
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//1 2 3 4
//		    continue;//1 2 3 4 死循环
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//}




//练习题

//1.计算n的阶乘
//int main()
//{
//	int n, i, m;
//	printf("请输入n的值：\n");
//	scanf("%d", &n);
//	if (n == 1 || n == 0)
//	{
//		m = 1;
//		printf("%d!=%d", n, m);
//	}
//	else
//	{
//		int m = 1;
//		for (i = 1; i <= n; i++)
//			m = m * i;
//		printf("%d!=%d", n, m);
//	}
//	return 0;
//}


//2.计算1！+2！+3！+...+10！
//int main()
//{
//	int i, n;
//	int m = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		m = 1;//计算n的阶乘之前，把m初始为1
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		sum = sum + m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//3.在一个有序数组中查找具体的某个数—二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k(7)的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，其下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该数\n");
//	}
//	return 0;
//}

//4.编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!!
//####################

//w##################!
//we################!!以此类推
//...
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "zwt i love you!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串“zwtyxl”
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "zwtyxl") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均输入错误\n");
//
//	return 0;
//}


//6.写一个猜字游戏
//1)自动产生一个1~100之间的随机数
//2)猜数字：猜对了就恭喜你，游戏结束；猜错了会告诉你猜大了还是猜小了，继续猜，直到猜对。
//3)可继续玩，除非退出游戏
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand函数返回了一个0~32767之间的数字
	//时间—时间戳


	int ret = rand() % 100 + 1;//%100的余数是0—99，然后+1，范围就变成1—100；
	//printf("%d\n", ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}