//#include "Header.h"
//#include <windows.h>
//
//
//void Title()
//{
//	printf("1. 물건 구매\n");
//	printf("2. 프로그램 종료\n");
//}
//
//int Input()
//{
//	int data;
//	scanf("%d", &data);
//	return data;
//}
//
//void textColor(int color_number)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
//}
//
//int main()
//{
//	system("title kiosk");
//	system("mode con clos=60 lines=30");
//
//	while (1)
//	{
//		Title();
//
//		switch (Input())
//		{
//		case 1:
//			printf("1. 커피\n2. 에이드\n3. 생과일 주스\n"); break;
//		case 2:
//			printf("프로그램을 종료하겠습니다.\n");
//			exit(0);
//		}
//	}
//
//	return 0;
//}