// 11강 조건문(if, else if, else) 설명
// 출력문, 변수, 연산자, 데이터 타입
// 코드는 위에서 아래로 순차적으로 실행한다.
// 제어문 (조건문, 반복문)
#include <stdio.h>

int main(void)
{
  int age = 20;

  // 조건문은 조건식 참인 경우에 실행된다.
  // 양립할 수 없다.
  if (age >= 20)
  {
    printf("성인입니다.\n");
  }
  if (age < 20)
  {
    printf("미성년자입니다.\n");
  }

  int age_grade;

  if (age < 10)
  {
    age_grade = 0;
  }

  if (age >= 10 && age < 20)
  {
    age_grade = 10;
  }

  if (age >= 20 && age < 30)
  {
    age_grade = 20;
  }

  if (age >= 30 && age < 40)
  {
    age_grade = 30;
  }

  if (age >= 40 && age < 50)
  {
    age_grade = 40;
  }

  if (age_grade == -1)
  {
    printf("40대 이상입니다.");
  }
  else
  {
    if (age_grade == 0)
    {
      printf("10세 미만 아동입니다.\n");
    }
    else
    {
      printf("%d대 입니다.", age_grade);
    }
  }

  return 0;
}