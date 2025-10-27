#include <stdio.h>

// 6강 변수 a와 b의 값을 교체
int main(void)
{
  int a; // 변수 선언
  // 수정 가능 지역 시작
  a = 20;
  int b = 40; // 변수 초기화
  // 수정 가능 지역 끝
  int c = a;
  a = b;
  b = c;
  // 수정 가능 지역 끝

  printf("== 문제시작 ==\n");
  printf("a: %d\n", a);
  // 출력 => a : 40
  printf("b: %d\n", b);
  // 출력 => b : 20

  return 0;
}