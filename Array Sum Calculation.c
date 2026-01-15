#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int arr[100];


    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);


    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    printf("\nSum of all elements stored in the array is : %d", sum);


    return 0;
}
