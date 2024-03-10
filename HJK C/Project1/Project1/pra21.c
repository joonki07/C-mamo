#include "Header.h"

// C언어에서 파일()

int main()
{
	FILE* fp = NULL;
	// 파일에 대한 작업을 위해 사요하는 파일 포인터

	//파일 오픈
	//fopen(파일명, 파일 작업 모드)
	fp = fopen("Sample_file.txt", "w");

	//파일 안에 내용 작성
	//fprintf(파일 포인터, 작성할 내용)
	fprintf(fp, "This is Sample_file text!\n");
	fprintf(fp, "number %d", 17 );

	printf("파일 생성 완료!\n");

	return 0;
}