/*
    2. do ~ while 문
        while문과 동일하나, 최소 한번은 실행된다.
*/

#include <stdio.h>

int main(void)
{
    int num = 5;
    do {
        printf("num is %d now\n", num);
        num++;
    } while(num < 3);

    // int num = 5;
    // printf("num is %d now\n", num);
    // while (num < 3)
    // {
    //     printf("num is %d now\n", num);
    //     num++;
    // }
    
    

    return 0;
}