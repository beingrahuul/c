//Write a program in C to swap elements using call by reference

#include <stdio.h>

int swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a = 5, b = 7;
  int *ptr_a = &a;
  int *ptr_b = &b;
  printf("Before swap:\n");
  printf("a = %d, b = %d\n", a, b); 
  
  swap(ptr_a, ptr_b);
  printf("After swap:\n");
  printf("a = %d, b = %d", a, b);
}