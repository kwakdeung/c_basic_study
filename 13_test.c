// 21강: 함수(매개변수, 리턴)
// 함수의 특징
// 1. 함수는 정의되어야만 사용이 가능하다.
// 2. 함수는 정의했으면 실행을 해야한다.
// 3. 함수 선언시 함수명은 중복선언이 불가능하다.
#include <stdio.h>

// void 함수명 소괄호 중괄호
void print_2_dan() { // 함수 정의
    int dan = 2;
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", dan, i, dan * i);
    }
}

int main(void) {
    // 구구단: 2단
    for (int i = 1; i <= 10; i++) {
        print_2_dan(); // 함수 실행
    }    
    // 2단 출력 10번
    // 중복x
    // 코드의 길이 짧게 출력

    return 0;
}