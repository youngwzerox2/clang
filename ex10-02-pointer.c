#include <stdio.h>

int main(void)
{
    int num = 10;
    int *pnum;
    pnum = &num;

    printf("%d\n", *pnum);
    printf("1) num의 주소값: %p\n", &num);
    printf("2) pnum의 값: %p\n", pnum);

    num = 14;

    printf("3) num의 주소값: %p\n", &num);
    printf("4) pnum의 값: %p\n", pnum);
    printf("5) pnum을 이용한 num의 값 가져오기: %d\n", *pnum);

    *pnum = 30;

    printf("6) num의 주소값: %p\n", &num);
    printf("7) pnum의 값: %p\n", pnum);
    printf("8) pnum을 이용한 num의 값 가져오기: %d\n", *pnum);

    (*pnum)++;
    (*pnum)++;

    printf("9) pnum을 이용한 num의 값 가져오기: %d\n", *pnum);

    int num2= 20;
    pnum = &num2;

    printf("10) num의 주소값: %p\n", &num);
    printf("11) pnum의 값: %p\n", pnum);
    printf("12) pnum을 이용한 num의 값 가져오기: %d\n", *pnum);

    return 0;
}