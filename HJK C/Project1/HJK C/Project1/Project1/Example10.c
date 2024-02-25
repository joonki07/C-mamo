//#include "Header.h"
//
//// 반복문 for문
//// 특정 횟수만큼의 반복을 설계하고자 할 때 사용되는 가장 많이 사용되는 반복문
//
//// 사용되는 경우 예시
//// 1. 특정 횟수만큼 특정 작업
//
//
//int main()
//{
//	// 1. for문의 일반적인 예시
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번 반복중입니다!\n", i + 1);
//	}
//	// 코드 풀이
//	// int i = 0; (최초 1회)
//
//	// 
//	int num = 0;
//	for (int i = 0; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			num += i;
//		}
//	}
//	printf("%d", num);
//
//	int i, j;
//	int number;
//	printf(" >>");
//	scanf("%d", &number);
//
//	for (i = 2; i < number; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//		
//	}
//
//	return 0;
//}