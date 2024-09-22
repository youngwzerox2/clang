/*
    더블포인터 변수
        포인터 변수의 주소값을 저장하는 변수
        포인터의 포인터 변수
*/

#include <stdio.h>

int main(void)
{
    int num = 3;
    int *ptr1 = &num;
    int **dptr = &ptr1;
    int *ptr2;

  
    printf("%d %d %d\n", num, *ptr1, **dptr);

    ptr2 = *dptr;
    *ptr2 = 9;

    printf("%d %d %d\n", num, *ptr1, **dptr);

    printf("num: %p\n", &num);
    printf("ptr1: %p\n", &ptr1);
    printf("ptr2: %p\n", &ptr2);
    printf("dptr: %p\n", &dptr);

    printf("ptr1: %p\n", ptr1);
    printf("ptr2: %p\n", ptr2);
    printf("dptr: %p\n", dptr);

    return 0;
}