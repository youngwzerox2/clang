#include <stdio.h>

int main(void)
{
    int iarr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*iarrptr)[3] = iarr;

    printf("iarr[0]: %d\n", iarr[0][0]);
    printf("iarrptr[0]: %d\n", iarrptr[0][0]);
    printf("*iarrptr: %d\n", (*iarrptr)[0]);

    return 0;
}