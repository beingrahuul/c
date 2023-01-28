#include <stdio.h>

int sum_of_elements(int *arr, int size) {
    int sum = 0;
    int *end = arr + size;

    for (; arr < end; arr++) {
        sum += *arr;
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sum_of_elements(arr, size);

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
