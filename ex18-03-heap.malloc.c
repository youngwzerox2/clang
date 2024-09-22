/*
    malloc 함수를 사용하여 지역변수 문제 해결 예제!
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getString(void)
{
    char *str = (char*)malloc(sizeof(char) * 100);
    printf("좋아하는 단어는?");
    gets(str);

    return str;
}

int main(void)
{
    char *result = getString();
    printf("당신이 좋아하는 단어는: %s\n", result);

    if(result != NULL) free(result);

    return 0;
}