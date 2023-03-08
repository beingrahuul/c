//Write a program in C to count the number of vowels and consonants in a string using a pointer.


#include <stdio.h>
#include <string.h>

void count(char *str, int length, int *vowel){
  for(int i = 0; i < length; i++){
    if(*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'o' || *(str + i) == 'u'){
      *vowel = *vowel + 1;
    }
  }
}

int count_space (char *str, int length) {
  int space = 0;
  for(int i = 0; i < length; i++){
    if(*(str + i) == ' '){
      space++;
    }
  }

  return space;
}


int main(){
  char str[100];
  int vowels = 0, consonants = 0;
  int *ptr_v = &vowels;

  printf("Enter a string: ");
  fgets(str, 100, stdin);
  int length =  strlen(str) - 1;
  
  count(str, length, ptr_v);

  consonants = length - vowels - count_space(str, length);

  printf("vowels: %d, consonants: %d", vowels, consonants);
}