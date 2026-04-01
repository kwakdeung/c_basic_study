// 25강: 함수(매개변수, 리턴)
// 함수 : 자판기
// 매개변수 : 자판기 동전투입구
// 리턴 : 음료 배출구

#include <stdio.h>

#pragma warning(disable:4996)

int plus(int a, int b) {
    int c = a + b;

    return c; // 함수 실행 결과
}

int is_adult_age(int age) {
    if (age >= 20) {
        return 1;
    }

    return 0;
}


int main(void) {
    // 함수 - 매개변수, 리턴
    int rs = plus(10, 20) + plus(30, 40);
    printf("rs: %d\n", rs);

    printf("성인인가? %d\n", is_adult_age(19));
    printf("성인인가? %d\n", is_adult_age(20));

    return 0;
}