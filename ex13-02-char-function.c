/*
    char 관련 함수
        getchar() - 문자 입력 함수

        putchar() - 문자 출력 함수
*/

#include <stdio.h>

int main(void)
{
    // char ch = getchar();
    // printf("입력한 문자: %c\n", ch);

    int ch1, ch2, temp;
    ch1 = getchar();
    ch2 = getchar();

    temp = ch1;
    ch1 = ch2;
    ch2 = temp;

    putchar(ch1);
    putchar(ch2);

    return 0;
}