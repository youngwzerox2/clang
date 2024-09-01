/*
    for문

        for(변수 초기화; 조건식; 증감식)
        {
            반복 실행할 코드;
        }

*/

#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 3; i++) {
        printf("i is %d now\n", i);     
    }

    // i is 0 now
    // i is 1 now
    // i is 2 now

    return 0;
}