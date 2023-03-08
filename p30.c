//Write a program in C to print a string in reverse using a pointer.

#include <stdio.h>
#include <string.h>

void reverse(char *str, char *reverse_str, int length){
  for(int i = 0; i < length; i++){
    *(reverse_str + i) = *(str + length - i - 1);
  }
}


int main(){
  char str[100], reverse_str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);
  int length =  strlen(str) - 1;
  reverse(str, reverse_str, length);
  puts(reverse_str);
}