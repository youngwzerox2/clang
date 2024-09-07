/*
    문자열
        문자의 배열이다.
        문자들의 연속된 시퀀스를 나타내며,
        문자열 종료 문자인 NULL문자('\0')로 끝난다.

    NULL문자('\0')
        문자열 끝을 나타내는 특수한 문자이다.
*/

#include <stdio.h>

int main(void)
{
    /*
        문자 개수보다 한개 더 많은 13출력
        이는 오류가 아닌 마지막에 '\0'이라는
        문자를 삽입하기 때문이다.
    */
    char greet[] = "Hello, Guys!";  
    printf("1차원 배열 greet의 길이는: %d\n", sizeof(greet));

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);

    // I Love Programming!\0(10칸 공백)
    mind[7] = '\0';
    printf("%s\n", mind);

    for(int i = 0; i < 30; i++)
    {
        if(mind[i] == '\0'){
            printf("*");
        }else {
            printf("%c", mind[i]);
        }

    }

    printf("\n");

    printf("mind sizeof: %d\n", sizeof(mind));

    return 0;
}