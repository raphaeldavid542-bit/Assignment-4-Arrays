#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int arr[100];
    int count;

    printf("Print all unique elements of an array:\n");
    printf("------------------------------------------\n");


    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);


    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    printf("The unique elements found in the array are: ");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }



    return 0;
}
