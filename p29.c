#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // allocate memory for the array
    arr = (int*) malloc(n * sizeof(int));

    // input elements of the array
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // find the largest element in the array
    largest = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // output the largest element
    printf("The largest element in the array is: %d\n", largest);

    // free the memory allocated for the array
    free(arr);

    return 0;
}
