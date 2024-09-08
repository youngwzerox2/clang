/*
    문자열
        C언어에서 문자열은 큰따옴표("")를 이요해서 표현
        문자열은 문자(char)로 이루어진 배열
        문자열 끝은 '\0'(NULL 문자로)로 표시
*/

#include <stdio.h>

int main(void)
{
    char good[]= "GOOD!";
    char *bad = "Bad!";

    printf("1) %s\n", good);
    printf("2) %s\n", bad);

    printf("2-2) %p %p\n", good, bad);

    // 배열 기반의 문자열 변수
    good[0] = 'H';  // 요소로 값 변경 가능
    // good = "New Good"; 배열 이름 포인터 상수라 변경불가능

    printf("3) %s\n", good);

    // bad[0] = 'S';    // 요소로 값 변경 불가능
    bad = "New Bad";    // 가능!
    
    printf("4) %s\n", bad);

    printf("4-2) %p %p\n", good, bad);

    return 0;
}