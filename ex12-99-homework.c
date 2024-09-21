#include <stdio.h>

int main(void)
{
    int array[7][7];

    for(int i=0; i<7; i++) {
        for(int j=0; j<7; j++) {
            array[i][j] = j+1 + (i*7);

            printf("%d ", array[i][j]);
        }
        printf("\n");
    
        for(int i=0; i<13; i++) {
            if(i<7) {
                for(int j=0; j<i+1; j++) {
                    if(i%2==0) {
                        printf("%d\t", array[i-j][j]);
                    } else {
                        printf("%d\t", array[j][i-j]);
                    }
                }
            } else {
                for(int j=0; j<13-i; j++) {
                    if(i%2!=0) {
                        printf("%d\t", array[i-6+j][6-j]);
                    } else {
                        printf("%d\t", array[6-j][i-6+j]);
                    }
                }
            }

            printf("\n");
        }
    }
    return 0;
}