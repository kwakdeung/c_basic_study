// 31강: 포인터 - 값이 들어있는 집의 주소
// 포인터 변수 - 주소를 저장하는 변수
// 사용 이유 - 원본 데이터에 직접 접근하기 위해
// 1. 함수에서 원본값 바꾸기
// 2. 큰 데이터를 복사하지 않으려고 - 데이터 전체를 복사하지 않고 주소만 넘기면 되니까 빠르고 메모리도 아낌
// 3. 배열, 문자열 다루기
// 4. 동적 메모리 할당 - 프로그램 실행 중에 필요한 만큼 메모리를 할당하는 것
// 5. 구조체/자료구조 연결

#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
    int i = 30; // 지역 변수 i, 별칭 i
    int j = 40;
    int d = 40;
    int *p = &i; // 포인터 변수 p, 별칭 p의 i의 실제 주소값을 저장한다.
    // *(p) : p에 저장되어 있는 i의 실제 주소로 찾아간다.
    *(p) = 50; // i = 50;
    char a;    // 5 byte
    short s;   // 7 byte
    printf("i: %d\n", i);

    // 메인함수 실행 -> RAM -> RAM 관리는 운영체제가 한다.
    printf("&i : %lld\n", (long long)&i); // &i : i의 실제 주소
    printf("&j : %lld\n", (long long)&j); // i와 j는 주소값이 4byte 차이가 난다. (int는 4byte이기 때문)
    printf("&d : %lld\n", (long long)&d); // j와 d는 주소값이 4byte 차이가 난다. (int는 4byte이기 때문)
    return 0;
}