/*
    2차원 배열

*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", arr[0][0]);
    printf("%d\n", arr[1][1]);

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}