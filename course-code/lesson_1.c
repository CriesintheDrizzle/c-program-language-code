#define _CRT_SECURE_NO_WARNINGS 1
//һ��д����
//1.д��������
//���ִ���أ�-C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����C���Դ����е���main����-���

//д�����룬����Ļ�ϴ�ӡ��hehe
//printf-�⺯��-����Ļ�ϴ�ӡ��Ϣ��
//printf��ʹ�ã��ô��к�������ͷ�ļ�stdio.h��

#include<stdio.h>
//int main()
//{
//	printf("hehe\n");  
//printf("%d\n", 100);
//	return 0;          
//}

//������������

//a
//'a'-�ַ�a

//int main()
//{
//	//char ch;      //����һ���ռ����洢�ַ�
//
//	//�������ͻ��߱�����ռ�ռ�Ĵ�С��sizeof���ؼ��֡�������
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//�������������

//1������
//int a = 100;                      //ȫ�ֱ�������������
//
//int main()
//{
//	//����һ������
//	//����  ����������=0
//	//����  ���������֣������Ƽ�
//
//	int age = 20;                  //�ֲ�����age��weight����������
//	double weight = 52.1;
//	int a = 10;
//
//	age = age + 1;
//	weight = weight - 3;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//%d- ����
//	//%f- ������
//	//%lf-˫����
//	printf("%d\n", a);             //���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ����ȡ���������Ѿֲ���ȫ�ֱ�������һ��
//
//	return 0;
//}

//дһ��������2�������ĺ�
//scanf���������뺯��

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

//2��������������
//����ͬһ���̣���ͬ�ļ�ʹ�ñ�����Ҫ������extern int g_val��

//int g_val = 2021;//���ζ��ɴ�ӡ
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	int a = 10;
//	printf("%d\n", a);//a��������
//	{
//		int b = 10;
//		printf("2:%d\n", g_val);
//	}
//	//printf("%d", b);//��ӡ����
//	printf("3:%d\n", g_val);
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ���������


//3������
//���� 


//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};

//#define MAX 2000
//int main()
//{
//  1�����泣��
//	3.14;
//	10;
//	'a';
//	"abcf";
//
//	2��const���εĳ�����
//	const int num = 10;//numΪ�����������г�����
//	num = 20;
//	printf("num=%d", num);
//	int arr[10];
//
//	const int n = 10;
//	int arr2[n];//����const��Ȼ����
//
//	3��define����ı�ʶ����������107��
//	int n = MAX;
//	printf("%d", n);
//
//	4��ö�ٳ���
//	����һһ�оٵĳ���
//	enum Sex s = MALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}



//�ġ��ַ���
//#include<string.h>
//int main()
//{
//	//"abdcdj";
//	//"hello";
//
//	//�ַ����顪������һ��ͬһ���͵�Ԫ��
//	//�ַ����ڽ�β������һ��\0
//	//\0���ַ����Ľ�����־
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	//���ַ�������strlen����
//	int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr2));//���ֵ
//
//
//	return 0;
//}


//�塢ת���ַ�

//int main()
//{
//    //����Ļ�ϴ�ӡ��c:\code\test.c
//    //���г����ӡ������
//    //printf("c:\code\test.c\n");
//    //Ӧ��Ϊ��
//    //printf("c:\\code\\test.c\n");
//
//    //printf("(are you ok??)");//??)��]������ĸ��
//    
//    //printf("%c\n", '\130');//�˽���130��Ӧʮ����88��X
//    //printf("%c\n", '\101');//A-65-�˽����ǣ�101
//
//    //printf("%c\n", '\x30');//48-'0'
//
//    //printf("%d\n", strlen("c:\test\328\test.c"));
//
//    return 0;
//}

//������ʶѡ�����

//int main()
//{
//	int input;
//	printf("��Ҫ�ú�ѧϰ��1/0����\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//�ߡ���ʶѭ�����

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer!");
//	}
//	return 0;
//}


//�ˡ���ʶ����

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
//	//������ʽ���
//	sum = add(x, y);
//	printf("sum=%d", sum);
//	return 0;
//}


//�š���ʶ����

//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�ɸ�ֵ
//	//char ch[5] = { 'z','w','t' };//����ȫ��ʼ��������ֵĬ��Ϊ0.
//
//	int i, a[10];
//	while(i<10)
//	{
//		printf("%d ", a[i]);
//		i++;
//	}
//	return 0;
//}


//ʮ��������

//������:~��λȡ��
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//ǿ������ת��
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//ʮһ���ؼ���

//int main()
//{
	//1��auto-���Զ��ģ�ÿ���ֲ���������auto���ε�
	//int a = 10;//һ���ʡ��
	//�µ�C�����﷨��Ҳ�������÷�-��ʱ������

	//2��extern�����������ⲿ���ŵ�

	//3��register �Ĵ����ؼ���
	//register int num = 100;//����num��ֵ����ڼĴ�����

	//4��union(������)

	//5��void ��

	//6��volatile

	//typedef�������ض���


	//return 0;
//}


//typedef�������ض���
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}


//static����̬��
//1.static���ξֲ�����
//2.static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���.c���ڲ�����ʹ�ã�����Դ�ļ�����
//3.static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ��

//void test()
//{
//	static int a = 1;//������static��2-11���������Ǹı��˱����Ĵ洢����(ջ����Ϊ��̬����
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

//ʮ����define�����
//define��һ��Ԥ����ָ��

//#define ADD(X,Y) X+Y
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	//printf("%d\n", ADD(2, 3));
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}


//ʮ������ʶָ��
//ָ����ǵ�ַ

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�ġ��ĸ��ֽ�
//	int* pa;//*˵��pa��ָ����� int˵��paִ�еĶ�����int���͵�
//	printf("%p\n", &a);//%pר��������ӡ��ַ
//	pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
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
//	*pa = 20;//*�����ò��� *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//	return 0;
//}

//ָ������Ĵ�С
//int main()
//{
//	//��Ϊ4�ֽ�
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



//ʮ�ġ��ṹ��

//����һ��ѧ��
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1��%s  %d  %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
//
//	struct Stu* ps = &s;
//	printf("2��%s  %d  %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3��%s  %d  %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}