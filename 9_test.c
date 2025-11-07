// 13강 개념 : 증감연산자 1부
// 변수, 출력문, 연산자, 조건문
// 제어문(조건문, 반복문)
// 반복문 1 ~ 10
// 1만 가지고 1부터 10까지 출력
// 증감연산자
// i = i + 1 --> i의 값을 1씩 증가시킨다.
// 후위 증감 연산: 변수의 값을 먼저 사용하고 다음에 값을 증가하거나 감소시킨다.
// i++;, i--;
// 전위 증감 연산: 변수의 값을 먼저 증가시키거나 감소 시킨 후에 사용한다.
// ++i, --i;
#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
  int i = 1;
  printf("i: %d\n", i);
  i = i + 1;
  printf("i: %d\n", i);
  i += 1;
  printf("i: %d\n", i);
  i++; // 후위 증감 연산
  printf("i: %d\n", i);
  ++i; // 전위 증감 연산
  printf("i: %d\n", i);
  i = i - 1;
  printf("i: %d\n", i);
  i -= 1;
  printf("i: %d\n", i);
  i--; // 후위 증감 연산
  printf("i: %d\n", i);
  --i; // 전위 증감 연산
  printf("i: %d\n", i);

  return 0;
}