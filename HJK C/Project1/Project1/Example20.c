//#include "Header.h"
//
//// ����ü(struct)
//// ����� ���� Ÿ��
//// ����ü �ȿ� ���� ���� ������ ������ ����ü ������ ����(��� ����)
//// �� ����� ���ϰ� ����ϴ� �뵵�� ����ϴ�.
//
//#include <stdlib.h>
//#include <string.h>
//
//// ����ü ��� ����
//// 1. ���α׷����� ����ϰ� ���Ǵ� ������ �̸��� ��Ȱ���ϴ� ���� �����մϴ�.
//// 2. Ư�� ����ü�� Ư�� ��� ������� Ư¡����, ���α׷� ������ Ư�� �����Ϳ� ���� ǥ���� ��Ȯ�ϰ� �� �� �ֽ��ϴ�.
//
//// ����ü �迭
////
//
////����ü ����
////
//
//struct Student
//{
//	int sid;
//	char sname[10];
//	int sage;
//};
//
//// �Ű������� �Ϲ� ����ü�� ���
//void printStruct(struct Student s)
//{
//	printf("�й� : %d �̸� : %s ���� : %d \n", s.sid, s.sname, s.sage);
//}
//
//// �Ű������� ����ü �������� ���
//void printStructPointer(struct Student* s)
//{
//	printf("�й� : %d �̸� : %s ���� : %d \n", s->sid, s->sname, s->sage);
//}
//
//int main()
//{
//	struct Student s1; // ����ü Student ���� s1 ����
//	s1.sid = 1;
//	// s1.sname = "ȫ�浿"; // ����
//	strcpy(s1.sname, "ȫ�浿");
//	s1.sage = 17;
//	printf("�й� : %d �̸� : %s ���� : %d \n", s1.sid, s1.sname, s1.sage);
//	struct Student s2;
//	s2.sid = 2;
//	strcpy(s2.sname, "������");
//	s2.sage = 18;
//	printf("�й� : %d �̸� : %s ���� : %d \n", s2.sid, s2.sname, s2.sage);
//	struct Student s3 = {3, "������", 19}; // ����ü ������ �ʱ�ȭ
//	printf("�й� : %d �̸� : %s ���� : %d \n", s3.sid, s3.sname, s3.sage);
//	struct Student s4 = s3; // ����ü ����
//	printf("(����)�й� : %d �̸� : %s ���� : %d \n", s4.sid, s4.sname, s4.sage);
//
//	struct Student* s5 = NULL;
//
//	s5 = &s4; // �ּ� �� ����
//
//	// �� ����
//	s5->sid = 5;
//	strcpy(s5->sname, "���̿�");
//	s5->sage = 17;
//	printf("�й� : %d �̸� : %s ���� : %d \n", s5->sid, s5->sname, s5->sage);
//
//	// ����ü �迭 ���
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