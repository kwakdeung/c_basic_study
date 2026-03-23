// 16강 개념 : 반복문(for) - 정해진 횟수만큼 반복해서 코드를 실행할 때 사용하는 반복문
#include <stdio.h>

#pragma warning(disable: 4996)

int main(void) {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    // for (초기식; 조건식; 증감식) {
    //   반복 실행할 코드
    // }

    printf("== 반복문(for) ==\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}