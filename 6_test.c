// 9강 자료형, 데이터 타입이 존재하는 이유
// - 메모리를 효율적으로 사용하기 위해
// 데이터 타입
// - 정수형
// char(1 byte), short(2 byte), int(4 byte), long long(8 byte)
// - 실수형
// float(4 byte), double(8 byte)
#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
  // int
  int a = 2200000000;
  printf("a: %d\n", a);

  // long long
  long long b = 2200000000;
  printf("b: %lld\n", b);

  // char
  char age = 128;
  printf("age: %d\n", age);

  // short
  short age0 = 150;
  printf("age0: %d\n", age0);

  // char : -128 ~ 127
  // unsigned char : 0 ~ 255
  unsigned char age1 = 255;
  printf("age1: %d\n", age1);
  printf("%d\n", sizeof(age1));

  return 0;
}