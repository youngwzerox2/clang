/*
    데이터(Data)영역
        전역변수와 정적(static) 변수가 저장되는 영역
        프로그램시작(런타임)과 함께 할당되며, 프로그램 종료시 소멸

    스택(Stack)영역
        함수 호출과 관계되는 지역변수와 매개변수가 저장되는 영역
        함수 호출과 함께 할당되며, 함수 호출이 완료 되면 소멸

    힙(Heap)영역
        사용자(개발자)가 직접관리할 수 있는 메모리 영역
        힙영역은 사용자에 의해 메모리 공간이 동적으로 할당되고 해제된다.

*/

#include <stdio.h>

int globalNumber = 10;

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int multiply(int x, int y)
{
    int product = x * y;
    return product;
}

int main(void) {
    int num1 = 5;
    int num2 = 5;
    int sum = add(num1, num2);
    int total = multiply(sum, 2);

    printf("Result: %d\n", total);

    printf("globalNumber: %d\n", globalNumber);

    return 0;
}