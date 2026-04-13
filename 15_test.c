// 30강: 비트, 바이트, 기본변수타입 설명 
// - 컴퓨터가 숫자를 얼마나 저장할 수 있는지는 자료형 크기(byte)로 결정된다.
// - 자료형마다 크기가 다르다.
// 데이터 저장 단위
// 정수: char(1 byte), short(2 byte), int(4 byte), long(4 byte), long long(8 byte)
// 실수: float(4 byte), double(8 byte), long double(16 byte)
// 비트 1개 → 1비트, 비트 8개 → 1바이트, 1바이트(8비트), 2⁸ → 256, 9비트, 2⁹ → 512, 2바이트(16비트), 2¹⁶ → 65,536, 4바이트(32비트), 2³² → 4,294,967,296
#include <stdio.h>

#pragma warning(disable : 4996)

int main(void) {
    char a = 127; // char는 -128~127까지 표현할 수 있다. (1 byte)
    printf("%d\n", a);

    short b = 32000; // short는 -32,768~32,767까지 표현할 수 있다. (2 byte)
    printf("%d\n", b);
   
    unsigned char c = 255; // unsigned char는 0~255까지 표현할 수 있다. (1 byte), unsigned는 양수만 표현할 수 있다.
    printf("%d\n", c);

    return 0;
}
