//#include <stdio.h>
//
//// ������
//// �����Ҷ� ����ϴ� ��ȣ
//
//// l-r value
//// int a = 5
//// l-value : a (������� �ʰ� �����ִ� ����)
//// r-value : 5
//
//int main()
//{
//	int a = 5;
//	int b = 7;
//
//	// �������(arithmetic)
//	// �⺻���� ��Ģ���� �۾��� ���Ǵ�
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//
//	// ��������
//	// �ÿ��ڴ� 27600���� ������ �ֽ��ϴ�.
//	// ����ڴ� �Ʒ��� �Ի�ǥ�� ���� ���� ��������
//	// A : 10000�� B : 5000�� C : 1000�� D
//
//	int user_money = 27600;
//	int A, B, C, D, E;
//
//	printf("�ݾ� : %d��\n", user_money);
//	A = user_money / 10000;
//	printf("A : %d\n", A);
//	user_money = user_money % 10000;
//	B = user_money / 5000;
//	printf("B : %d\n", B);
//	user_money = user_money % 5000;
//	C = user_money / 1000;
//	printf("C : %d\n", C);
//	user_money = user_money % 1000;
//	D = user_money / 500;
//	printf("D : %d\n", D);
//	user_money = user_money % 500;
//	C = user_money / 100;
//	printf("E : %d\n", E);
//	user_money = user_money % 100;
//	
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}