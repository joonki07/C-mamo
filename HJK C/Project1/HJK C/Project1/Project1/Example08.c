//#include "Header.h"
//
//// 반복문 while
//// 조건애 따라 반복 횟수를 결정하는 경우에 많이 사용되는 반복문
//
////초기식;
////while (조건식)
////{
////	조건식이 만족하는 동안 실행할 명령문;
////}
//
//int main()
//{
//	int number = 1;
//
//	while (number < 11)
//	{
//		printf("%d\n", number);
//		number++;
//	}
//
//	// while문 설계시유의사항
//	// while문 내부에서 작업하는 명령문 중에서 조건을 바꿀 명령이 없다면 무한으로 실행됩니다.
//	int number = 1;
//	while (number < 11)
//	{
//		printf("%d\n", number);
//		break; // break는 반복문을 종료하는 명령문입니다.
//	}
//
//	// while문 내부에서 사용되는 제어문
//	// 1. break : 반복
//	// 2. continue : 반복문을 종료하지 않고, 해당
//
//	int number = 1;
//	while (number < 11)
//	{
//		number++;
//		printf("%d ", number);
//		// 숫자가 짝수인 경우
//		if (number % 2 == 0)
//		{
//			continue; // 건너뜁니다,
//			printf("해당 문장은 실행되지 않습니다");
//		}
//	}
//	printf("-- 반복문 탈출 --\n");
//
//
//	return 0;
//}