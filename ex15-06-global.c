/*
    전역변수
        프로그램 시작과 동시에 메모리 공간에 할당되어
        종료할 때 까지 존재
        프로그램 모든 영역에 접근가능
        전역변수와 지역변수 이름이 동일한 경우 지역변수가 사용된다.
*/

#include <stdio.h>

// 전역변수
int number = 0;

void printNumber(void)
{
    printf("전역변수 number는 %d을 저장하고 있다.\n", number);
    number += 3;
}

int main(void)
{
    //지역변수 number
    int number = 3;
    printf("지역변수 number는 %d을 저장하고 있다.\n", number);
    printNumber();
    printNumber();
    printNumber();

    return 0;
}