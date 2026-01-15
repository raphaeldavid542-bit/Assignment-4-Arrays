#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[6][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    int i, j;


    printf("2D Array elements:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
