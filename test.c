#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	/*int coding = 0;
	printf("你回去敲代码吗？ （选择1 or 0) :>");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会有好的offer\n");

	}
	else
	{
		printf("放弃，回家卖红薯\n");
	}
	return 0;*/
}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", Add(1, 2));
//	return 0;


	/*printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;*/

	/*printf("%c\n", '\'');
	printf("%s\n", "\"");
	return 0;*/

	/*printf("c:\code\test.c\n");
	return 0;*/

	/*char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;*/

	/*int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;*/


	/*printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	return 0;*/
	/*printf("hello world");*/
	/*return 0;*/
	
	
	
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////define定义标识符常量
//#define MAX 1000
////define定义宏
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum=%d\n", sum);
//	sum = 10*ADD(2, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//修饰函数
//static int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//修饰全局变量
//static int g_val = 2018;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	//static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("加入比特\n");
//	int line = 0;
//	while (line <= 20000);
//	{
//		line++;
//		printf("我要继续努力敲代码\n");
//
//	}
//	if (line > 20000);
//	printf("迎娶白富美\n");
//	return 0;
//}
//}

#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////判断一个数是否为奇数，返回"1"为奇数，返回"0"为偶数
//int IsOdd(int num)
//{
//	if (0 == num % 2)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	//判断一个数是否为奇数
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", IsOdd(i));
//	int num = 0;
//	while (num <= 100)
//	{
//		//函数调用时需要写出函数的类型和函数的参数
//		if (1 == IsOdd(num))
//		{
//			printf("%d ", num);
//		}
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i < 0) return 0;
//	
//	if (1 == i % 2)
//	{
//		printf("i为奇数\n");
//	}
//	else
//	{
//		printf("i为偶数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//
//}

//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[15];//学号
//};
//int main()
//{
//	//结构体的初始化
//	//打印结构体的信息
//	struct Stu s = { "张山", 20, "男", "20180101" };
//	//为结构成员访问操作符
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//	//->操作符
//	struct Stu *p = &s;
//	printf("name=%s age=%d sex=%s id=%s\n", p->name, p->age, p->sex, p->id);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int i = 1;
//	int n = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		printf("%d", k);
//		k++;
//		printf("%d", k);
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;//找到了，返回下标
//	}
//	return -1;
//}
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	int key = 9;
//	int m=bin_search(arr1, left, right, key);
//	printf("%d\n", m);
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left<=right)
//	{
//		printf("找到了 key=%d\n",key);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char psw[10] ="";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//			break;
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	else
//	{
//		printf("log in\n");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char intput[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是傻逼，就取消关机！\n请输入:>");
//		scanf("%s", &intput);
//		if (0 == strcmp(intput, "我是傻逼"));
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*****  1 . play    *****\n");
//	printf("*****  0 . exit    *****\n");
//	printf("************************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int intput = 0;
//	printf("%d", random_num);
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &intput);
//		if (random_num > intput)
//		{
//			printf("猜小了\n");
//			
//		}
//		else if (random_num < intput)
//		{
//			printf("猜大了\n");
//			
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int intput = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &intput);
//		switch (intput)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (intput);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px,int *py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1=%d num2=%d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap1::num1=%d num2=%d\n", num1, num2);
//
//}

//int main()
//{
//	char intput[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入:>");
//		scanf("%s", &intput);
//		if (0 == strcmp(intput, "我是猪"));
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//
//}


//int get_max(x,y)
//{
//	return (x > y) ? (x) : (y);
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Strlen(const char*str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + Strlen(str+1);
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//#include <string.h>
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}




//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	/*printf("\n");
//	printf("%d", printf("%d", 43));*/
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen  (strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to wu han";
	char arr2[] = "#################";
	int left = 0;
	//int right = sizeof(arr1) - 1;

	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}
