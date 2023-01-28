//WAP to find max and min element of array

#include <stdio.h>

void main() {
  int min, max, length, arr[20], i, j;

  printf("Enter the length of array: ");
  scanf("%d", &length);
  for(i=0; i < length; i++){
    printf("Enter the element at array[%d]: ", i);
    scanf("%d", &arr[i]);
    printf("\n"); 
  }

  min = arr[0];
  max = 0;
  for(i=0; i < length; i++){
    if(arr[i] > max){
      max = arr[i];
    }

    if(arr[i] < min){
      min = arr[i];
    }
  }

  printf("MAX: %d, MIN: %d", max, min);
}

