#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, pos, value;
    int arr[100];


    printf("Input the size of array : ");
    scanf("%d", &n);


    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    printf("\nThe current list of the array : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nInput the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);


    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos - 1] = value;
    n++;


    printf("After Insert the element the new list is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
