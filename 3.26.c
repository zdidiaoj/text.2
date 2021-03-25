#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值，数组是使用下标来访问的，下标从0开始，所以：
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[ i ] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////青蛙跳台阶
//int Fb_list(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n==2)
//	{
//		return 2;
//	}
//	else
//	{
//		 return Fb_list(n - 1) + Fb_list(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fb_list(n);
//	printf("%d\n", ret);
//	return 0;
//}


//汉诺塔问题
//void move(char get, char put)
//{
//	printf("%c-->%c\n", get, put);
//
//}
//void hanoit(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoit(n - 1, a, c, b);
//		move(a, c);
//		hanoit(n - 1, b, a, c);
//	}
//}
//
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	hanoit(m, 'A', 'B', 'C');
//	return 0;
//}