//#include "Header.h"
//
//// �ݺ��� while
//// ���Ǿ� ���� �ݺ� Ƚ���� �����ϴ� ��쿡 ���� ���Ǵ� �ݺ���
//
////�ʱ��;
////while (���ǽ�)
////{
////	���ǽ��� �����ϴ� ���� ������ ���ɹ�;
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
//	// while�� ��������ǻ���
//	// while�� ���ο��� �۾��ϴ� ���ɹ� �߿��� ������ �ٲ� ������ ���ٸ� �������� ����˴ϴ�.
//	int number = 1;
//	while (number < 11)
//	{
//		printf("%d\n", number);
//		break; // break�� �ݺ����� �����ϴ� ���ɹ��Դϴ�.
//	}
//
//	// while�� ���ο��� ���Ǵ� ���
//	// 1. break : �ݺ�
//	// 2. continue : �ݺ����� �������� �ʰ�, �ش�
//
//	int number = 1;
//	while (number < 11)
//	{
//		number++;
//		printf("%d ", number);
//		// ���ڰ� ¦���� ���
//		if (number % 2 == 0)
//		{
//			continue; // �ǳʶݴϴ�,
//			printf("�ش� ������ ������� �ʽ��ϴ�");
//		}
//	}
//	printf("-- �ݺ��� Ż�� --\n");
//
//
//	return 0;
//}