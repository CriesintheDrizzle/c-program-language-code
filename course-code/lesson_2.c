#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//һ����֧���
// 1��if else
//int main()
//{
//	//int age = 10;
//	//if (age >= 18)
//	//	printf("����\n");
//
//	//if (age >= 18)
//	//	printf("����\n");
//	//else
//	//	printf("δ����\n");
//
//	//if (age < 18)
//	//	printf("����\n");
//	//else if (age >= 18 && age < 26)
//	//	printf("����\n");
//	//else if (age >= 26 && age < 40)
//	//	printf("����\n");
//	//else if (age >= 40 && age < 60)
//	//	printf("׳��\n");
//	//else if (age >= 60 && age <= 100)
//	//	printf("����\n");
//	//else printf("�ϲ���\n");
//
//	//else�������⡪�����񡪡�������C/C++��̡�
//	//�������ʲô������ӡ
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

//2��switch���
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n"); 
//		break;
//	case 2:
//		printf("���ڶ�\n"); 
//		break;
//	case 3:
//		printf("������\n"); 
//		break;
//	case 4:
//		printf("������\n"); 
//		break;
//	case 5:
//		printf("������\n"); 
//		break;
//	case 6:
//		printf("������\n"); 
//		break;
//	case 7:
//		printf("������\n"); 
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//���һ��break��ü���
//	default:
//		printf("�������\n");
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
//        {//switch����Ƕ��ʹ��
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


//����ѭ�����
//1��while���
//int main()
//{
//	int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;//��whileѭ���У�break����������ֹѭ����

	//	printf("%d ", i);
	//	i++;
	//}

//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ���
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//�������

//putchar��getchar
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
//	printf("���������룺");
//	scanf("%d", password);
//	printf("��ȷ�����룺");
//	//��������
//	//getchar();����\n
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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


//2��for���
//int main()
//{
//	int i = 0;
//	//for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//break��continue��for����е����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//����ѭ��
//			//continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}


//3��do...while���

//continue��break��do...while�е����
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;//1 2 3 4
//		    continue;//1 2 3 4 ��ѭ��
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//}




//��ϰ��

//1.����n�Ľ׳�
//int main()
//{
//	int n, i, m;
//	printf("������n��ֵ��\n");
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


//2.����1��+2��+3��+...+10��
//int main()
//{
//	int i, n;
//	int m = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		m = 1;//����n�Ľ׳�֮ǰ����m��ʼΪ1
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		sum = sum + m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//3.��һ�����������в��Ҿ����ĳ���������ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k(7)��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ��ˣ����±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�������\n");
//	}
//	return 0;
//}

//4.��д���룬��ʾ����ַ��������ƶ������м���
//welcome to bit!!!!!!
//####################

//w##################!
//we################!!�Դ�����
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
//		Sleep(1000);//����һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ�����zwtyxl��
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password, "zwtyxl") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������������\n");
//		}
//	}
//	if (i == 3)
//		printf("����������������\n");
//
//	return 0;
//}


//6.дһ��������Ϸ
//1)�Զ�����һ��1~100֮��������
//2)�����֣��¶��˾͹�ϲ�㣬��Ϸ�������´��˻������´��˻��ǲ�С�ˣ������£�ֱ���¶ԡ�
//3)�ɼ����棬�����˳���Ϸ
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
	//��������Ϸ��ʵ��
	//1.���������
	//rand����������һ��0~32767֮�������
	//ʱ�䡪ʱ���


	int ret = rand() % 100 + 1;//%100��������0��99��Ȼ��+1����Χ�ͱ��1��100��
	//printf("%d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}