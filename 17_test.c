// 33강: 포인터 변수의 타입별 차이
//
// 일반타입 변수
// char, short, int, long, long long + unsigned --> 8개
//
// 포인터타입 변수
// char*, short*, int*, long*, long long* + unsigned --> 8개
// 
// int a; // 4 byte
// char* p1 = &a; // 8 byte 
// int p2 = 10; // 자신이 바라보는 대상을 정수라 생각
// int* p2 = 10; // 자신이 바라보는 대상을 4바이트 주소라 생각
#include <stdio.h>

int main(void) {
    // 포인터 변수는 자신이 바라보는 대상을 주소값으로 생각한다.
    int* p1 = 4; // 4 바이트
    char* p2 = 5; // 1 바이트
    short* p3 = 4; // 2 바이트

    printf("p1: %lld\n", (long long)p1);
    printf("p1 + 1 : %lld\n", (long long)(p1 + 1));

    printf("p2: %lld\n", (long long)p2);
    printf("p2 + 1 : %lld\n", (long long)(p2 + 1));
    printf("p3 + 1 : %lld\n", (long long)(p3 + 1));

    int x = (int)(p1 + 3) + (int)(p2 + 2);
    printf("x: %d\n", x);

    return 0;
}