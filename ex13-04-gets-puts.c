/*
    gets() - 문자열 입력

    puts() - 문자열 출력
*/

#include <stdio.h>

int main(void)
{
    char ch[30];

    gets(ch);

    puts(ch);   // 자동으로 줄바꿈
    puts(ch);
    puts(ch);

    return 0;
}