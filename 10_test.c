// 14강 개념 : 반복문(while)
#include <stdio.h>

#pragma warning(disable : 4996)


int main(void) {
    // 반복문
    // int i = 1; // 시작값
    // while (i <= 10) { // 끝값
    //     printf("%d\n", i); // 1, 2, 3, 4, 5... 10
    //     i++; // 보폭
    // }


    // printf("== 반복문 v2 ==\n");

    // int j = 10; // 시작값
    // while (j >= 1) { // 끝값
    //     printf("%d\n", j); // 1, 2, 3, 4, 5... 10
    //     j--; // 보폭
    // }

    int dan = 2;
    int i = 1;
    while (i < 10) {
        printf("%d * %d = %d\n", dan, i, dan * i);
        i++;
    }

    return 0;
}