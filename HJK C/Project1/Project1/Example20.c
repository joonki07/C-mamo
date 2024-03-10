//#include "Header.h"
//
//// 구조체(struct)
//// 사용자 정의 타입
//// 구조체 안에 여러 가지 변수를 선언해 구조체 내부의 변수(멤버 변수)
//// 로 만들어 편하게 사용하는 용도로 만듭니다.
//
//#include <stdlib.h>
//#include <string.h>
//
//// 구조체 사용 목적
//// 1. 프로그램에서 빈번하게 사용되는 변수의 이름을 재활용하는 것이 가능합니다.
//// 2. 특정 구조체의 특정 멤버 변수라는 특징으로, 프로그램 내에서 특정 데이터에 대한 표현을 명확하게 할 수 있습니다.
//
//// 구조체 배열
////
//
////구조체 선언
////
//
//struct Student
//{
//	int sid;
//	char sname[10];
//	int sage;
//};
//
//// 매개변수가 일반 구조체일 경우
//void printStruct(struct Student s)
//{
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s.sid, s.sname, s.sage);
//}
//
//// 매개변수가 구조체 포인터인 경우
//void printStructPointer(struct Student* s)
//{
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s->sid, s->sname, s->sage);
//}
//
//int main()
//{
//	struct Student s1; // 구조체 Student 변수 s1 선언
//	s1.sid = 1;
//	// s1.sname = "홍길동"; // 문자
//	strcpy(s1.sname, "홍길동");
//	s1.sage = 17;
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s1.sid, s1.sname, s1.sage);
//	struct Student s2;
//	s2.sid = 2;
//	strcpy(s2.sname, "김재하");
//	s2.sage = 18;
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s2.sid, s2.sname, s2.sage);
//	struct Student s3 = {3, "이한음", 19}; // 구조체 생성과 초기화
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s3.sid, s3.sname, s3.sage);
//	struct Student s4 = s3; // 구조체 복사
//	printf("(복사)학번 : %d 이름 : %s 나이 : %d \n", s4.sid, s4.sname, s4.sage);
//
//	struct Student* s5 = NULL;
//
//	s5 = &s4; // 주소 값 전달
//
//	// 값 수정
//	s5->sid = 5;
//	strcpy(s5->sname, "신이울");
//	s5->sage = 17;
//	printf("학번 : %d 이름 : %s 나이 : %d \n", s5->sid, s5->sname, s5->sage);
//
//	// 구조체 배열 사용
//	struct Student S_Array[5] =
//	{
//		{1, "A", 17}
//		,
//		{2, "B", 20}
//		,
//		{3, "C", 25}
//		,
//		{4, "D", 26}
//		,
//		{5, "E", 22}
//	};
//
//	return 0;
//}