#include <stdio.h>
//include : c언어 include 폴더를 의미
//stdio.h : Standard Input Output 기본 입출력 코드 뭉치


int main(void)
{
	/*printf("\tHello C!\n");
	printf("Hello World!\n");
	printf("큰따옴표 : \" \"\n");
	printf("작은따옴표 : \' \'\n");
	printf("역슬래시 : \\ \n");*/

	//int : 함수의 출력이 정수값 (출력 형태)
	//main : 함수 이름
	//void : 함수의 입력 값 (void = 값을 받지 않음.)(입력형태)
	//printf : 출력함수
	// ; : 코드 한줄 종료
	//return : 함수 종료
	// {} : 코드블럭(스코프)


	/* 특수 문자의 종류
	
	\n : 개행
	\t : 수평탭
	\\ : 역슬래쉬(\)를 문자값으로 넣고 싶을 때
	\" \" : 출력값 안에서 " 를 사용하고싶을 때
	\' : 작은따옴표 사용
	\a : 경고음 소리 발생

	*/

	// 숫자입력의 서식문자
	//8진수 정수 : %o
	//10진수 정수(음수,양수) : ★ %d, %i
	//16진수 정수 : %x
	//실수 : ★ %f, %lf
	//한개의 문자(char) : ★%c
	//문자열 : %s
	//10진수 정수(양수) : %u
	//퍼센트 기호 출력 : %%

	//printf("%d 더하기 %d는 %d입니다. \n", 3, 5, 3 + 5);  //3 더하기 5는 8입니다.

	//printf("%d - %d = %d 입니다.\n", 3, 5, 3 - 5);

	//printf("50의 8진수 표기 : %o\n", 50);
	//printf("50의 10진수 표기 : %d\n", 50);
	//printf("50의 16진수 표기 : %x\n", 50);

	//scanf함수
	//scanf_s([서식문자], [저장할 변수]);

	//int input_num;
	//printf("정수값을 입력해주세요 : \n");
	//scanf_s("%d", &input_num);  //input_num에 입력받은 값 저장

	//printf("입력된 정수값은 %d 입니다.", input_num); //입력받은 값 출력

	//예제1) 계산기
	//int input_a;
	//int input_b;

	//printf("정수 a값을 입력해주세요 : \n");
	//scanf_s("%d", &input_a);

	//printf("정수 b값을 입력해주세요 : \n");
	//scanf_s("%d", &input_b);

	//printf("%d + %d = [%d] \n", input_a, input_b, input_a + input_b);
	//printf("%d - %d = [%d] \n", input_a, input_b, input_a - input_b);
	//printf("%d * %d = [%d] \n", input_a, input_b, input_a * input_b);
	//printf("%d / %d = [%lf] \n", input_a, input_b, (double)input_a / (double)input_b);  //나눗셈 실수 주의

	//예제2)원의 반지름을 입력 받아서 넓이를 계산하는 프로그램

	int r;
	double pi = 3.14;
	printf("반지름을 입력하세요 : \n");
	scanf_s("%d", &r);
	printf("원의 넓이는 [%f]입니다.", (double)r * (double)r * pi);

	return 0;

}