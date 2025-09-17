// include: 가져오기 기능
// <stdio.h>: 표준 입출력 라이브러리,
// std - standard(표준)
// i - input(표준 입력) => 키보드
// o - output(표준 출력) => 모니터
#include <stdio.h>

// int main() - main 함수 생성
// int - 함수의 return 타입
// return 0 - 함수의 return value
// ; - 문장의 마침표
// {} - 중괄호, 블록(함수의 시작과 끝)
int main(void)
{
    printf("안녕하세요\n");
    printf("저는 \"홍길동\"입니다.\n"); // \" : 쌍따옴표 출력

    printf("번호: %d, 나이: %d\n", 15, 20); // %d : decimal, 10진수 정수 출력, 서식지정자

    return 0;
    // 0 → 보통 성공(에러 없음) 을 나타내는 값.
    // 0 이 아닌 값이면 → “에러가 있었다”는 것을 나타내는 값
    // 즉, return 0; = 프로그램 종료 + 성공 신호
}