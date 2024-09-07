/*

*/

#include <stdio.h>

// int main(void) 
// {
//     for(int i = 0; i < 7; i++) {
//         for(int j = 0; j < i + 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

int main(void) 
{
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            if(j < 3 - i ) {
                printf(" ");
            } else if(j > 3 + i) {
                printf(" ");
            } else if(j < i - 3) {
                printf(" ");
            } else if(i + j > 9) {
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}