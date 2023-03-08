#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2;
    int i, n;
    arr1 = (int*) calloc(5, sizeof(int));

    for (i = 0; i < 5; i++) {
        arr1[i] = i + 1;
    }
    printf("Initial array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    arr2 = (int*) realloc(arr1, 10 * sizeof(int));
    for (i = 5; i < 10; i++) {
        arr2[i] = i + 1;
    }

    printf("Array after reallocation:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr2);
    return 0;
}