//Write a program in C to store n elements in an array and print the elements using pointer.

#include <stdio.h>

void printArray(int *arr, int length){
  for (int i = 0; i < length; i++){
    printf("%d\t", *(arr + i));
  }
} 

int main(){
  int length;

  printf("Enter the length of array: ");
  scanf("%d", &length);

  int arr[length];
  for (int i = 0; i < length; i++){
    printf("Enter the element at arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  
  printArray(arr, length);
}