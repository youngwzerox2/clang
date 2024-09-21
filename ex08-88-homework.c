#include <stdio.h>

int main(void)
{
    for(int k=0; k<3; k++) {
        for(int i=0; i<9; i++) {
            for(int j=0; j<3; j++) {
                int dan = 1+j+(k*3);
                int multiply = i+1;

                int result = dan * multiply;

                if(dan == 10)break;

                printf("%d X %d = %d\t", dan, multiply, result);
            }

            printf("\n");
        }

        printf("\n");
    }

    

    return 0;
}