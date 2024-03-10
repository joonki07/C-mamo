//#include "Header.h"
//#include "Random.h"
//
////문제) 정답은 0부터 99 사이의 숫자를 하나 랜덤으로 가지게 됩니다.
////     사용자가 숫자를 입력했을 때, 그 숫자가 정답보다 작은 값이라면 UP
////     숫자가 정답보다 큰 값이라면 DOWN을 출력하며
////     정답을 맞추었을 경우 정답을 출력하고 프로그램이 종료되는 업 다운 게임을 설계합니다.
//
//int main()
//{
//	srand(time(NULL));
//	// stdlib.h의 srand는 () 안에 수를 넣으면 그 수에 해당하는
//	// seed 값으로 선택한 결과물이 나오게 됩니다.
//	// srand는 난수 알고리즘을 실행하기 위해 사용하는 수를 의미합니다.
//
//	// time.h의 time은 () 안에 수를 넣으면 시간을 처리하는 함수
//	//NULL이 들어갈 경우 현재 시간을 초 단위로 처리합니다.
//	//(1970년 1월 1일 기준부터 현재까지의 시간을 초로 전환한 값)
//	
//	// 예시)
//	//int rand_number = rand() % 40; // 0 ~ 39
//	//printf("%d", rand_number);
//
//	int rand_number = rand() % 100;
//	int number;
//	while (1)
//	{
//		printf("숫자를 입력해주세요\n>>");
//		scanf("%d", &number);
//
//		if (rand_number > number)
//		{
//			printf("UP\n");
//		}
//		else if (rand_number < number)
//		{
//			printf("DOWN\n");
//		}
//		else
//		{
//			printf("정답입니다!!");
//			break;
//		}
//	}
//	
//
//
//	return 0;
//}