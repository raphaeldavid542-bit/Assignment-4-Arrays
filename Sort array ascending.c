#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, j, temp;
    int arr[100];


    printf("Input the size of array : ");
    scanf("%d", &n);


    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nElements of array in sorted ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
