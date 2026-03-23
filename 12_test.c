// 19강 개념 : 이중 반복문, 다중 반복문
#include <stdio.h>

#pragma warning(disable: 4996)

int main(void) {
    // int i = 1;
    // while (i <= 3) {
    //     printf("사랑해\n");
    //     printf("사랑해\n");
    //     printf("사랑해\n");
    //     i++;
    // }

    // int j = 1;
    // while (j <= 3) {
    //     printf("사랑해\n");
    //     j++;
    // }

    // 이중 반복문: 반복문 안에 또 다른 반복문이 한 번 더 들어간 구조
    // int i = 1;
    // while (i <= 3) {
    //     printf("i : %d\n", i); // i번째
    //     int j = 1;
    //     while (j <= 3) {
    //         printf("사랑해\n");
    //         j++;
    //     }
    //     i++;
    // }

    // 다중 반복문: 반복문이 3번 이상 중첩된 구조(3중, 4중 등)
    // int i = 1;
    // while (i <= 3) {
    //     printf("i : %d\n", i); // i번째
    //     int j = 1;
    //     while (j <= 3) {
    //         int k = 1;
    //         while (k <=3) {
    //             printf("사랑해\n");
    //             k++;
    //         }
    //         j++;
    //     }
    //     i++;
    // }

    for (int i = 1; i <= 3; i++) {
        printf("i : %d\n", i); // i번째
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 3; k++) {
                printf("사랑해\n");
            }
        }
    }

    return 0;
}