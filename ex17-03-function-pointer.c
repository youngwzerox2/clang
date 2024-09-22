/*
    함수 포인터
        함수도 메모리 주소가 존재
        함수의 이름이 함수가 저장된 메모리 공간의 주소값
*/

#include <stdio.h>

void myFunc(int num1, int num2)
{
    printf("num1: %d, num2: %d\n", num1, num2);
}

void runFunc(int (*fptr)(int, int), int num1, int num2)
{
    fptr(num1, num2);
}

int main(void)
{
    /*
        매개변수로 int형 변수 두개 선언되어 있고, 
        int형 데이터를 반환하는 함수의 주소를 저장할 수 있는
        함수 포인터 fptr선언
    */
    int (*fptr)(int, int);
    fptr = myFunc;
    fptr(9, 6);

    runFunc(myFunc, 9, 6);

    return 0;
}