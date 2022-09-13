#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 32;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	while (e)
//	{
//		c = a ^ b;
//		a = a >> 1;
//		b = b >> 1; 
//		if (d = c & 1 == 1)
//		{
//			count++;
//		}
//		e--;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int b = 0;
//	int a = 0;
//	int count = 16;
//	int countl = 16;
//	scanf("%d", &a);
//	b = a;
//	printf("从右到左，奇数为：");
//	while (count)
//	{
//			if (a&1 == 1)
//			{
//				printf("1 ");
//
//			}
//			else
//			{
//				printf("0 ");
//
//			}
//			a = a >> 2;
//			count--;
//	}
//	printf("\n");
//	b = b >> 1;
//	printf("从右到左，偶数为：");
//	while (countl)
//	{
//
//		if (b & 1 == 1)
//		{
//			printf("1 ");
//
//		}
//		else
//		{
//			printf("0 ");
//
//		}
//		b=b >> 2;
//		countl--;
//
//	}
//	return 0;
//}
//int main()
//{
//	int countl = 32;
//	int count = 0;
//	int a = 0;
//	scanf("%d", &a);
//	while (countl)
//	{
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//		countl--;
//
//	}
//	printf("%d", count);
//	return 0;
//}
int main()
{
	int a = 5;
	int b = 3;
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("%d %d", a, b);
	return 0;
}