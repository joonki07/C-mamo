#include "Header.h"

// C���� ����()

int main()
{
	FILE* fp = NULL;
	// ���Ͽ� ���� �۾��� ���� ����ϴ� ���� ������

	//���� ����
	//fopen(���ϸ�, ���� �۾� ���)
	fp = fopen("Sample_file.txt", "w");

	//���� �ȿ� ���� �ۼ�
	//fprintf(���� ������, �ۼ��� ����)
	fprintf(fp, "This is Sample_file text!\n");
	fprintf(fp, "number %d", 17 );

	printf("���� ���� �Ϸ�!\n");

	return 0;
}