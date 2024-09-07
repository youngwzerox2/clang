#include <stdio.h>

int main(void)
{
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {21, 22, 23, 24},
            {25, 26, 27, 28},
            {29, 20, 21, 22}
        }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
   
        printf("\n");
    }


    return 0;
}