//#include "Header.h"
//
//// C언어의 배열 정렬 기법
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
///// 배열을 출력하는 기능
///// </summary>
///// <param name="arr">출력을 진행할 배열</param>
///// <param name="count">배열 데이터의 개수, 요소의 개수, 배열의 길이</param>
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