// 15강 개념 : 반복문(for)
#include <stdio.h>

#pragma warning(disable: 4996)

int main(void) {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    printf("== 반복문(for) ==\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}