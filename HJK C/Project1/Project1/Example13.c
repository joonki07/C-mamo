//#include "Header.h"
//
//// C����� �迭 ���� ���
//
///// <summary>
///// 
///// </summary>
///// <param name="arr"></param>
///// <param name="count"></param>
//void bubble_sort(int arr[], int count)
//{
//	int temp;
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
///// <summary>
///// �迭�� ����ϴ� ���
///// </summary>
///// <param name="arr">����� ������ �迭</param>
///// <param name="count">�迭 �������� ����, ����� ����, �迭�� ����</param>
//void Array_Print(int arr[], int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
///// <summary>
///// 
///// </summary>
///// <param name="arr"></param>
///// <param name="count"></param>
//void selection_sort(int arr[], int count)
//{
//	int min, temp;
//
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count; j++)
//		{
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//	}
//}
//int main()
//{
//	int numbers[] = { 9,3,5,6,2,7,1,10,4,8 };
//	int length = sizeof(numbers) / sizeof(int);
//
//	Array_Print(numbers, length);
//	bubble_sort(numbers, length);
//	Array_Print(numbers, length);
//
//	return 0;
//}