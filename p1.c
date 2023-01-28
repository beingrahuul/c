#include <stdio.h>

int main (){
  char x;
  printf("Enter a character(x): ");
  scanf("%c", &x);
  printf("\n");

  if(x >= 48 && x <= 57){
    printf("x is a digit");
  }else if (x >= 65 && x <= 90)
  {
    printf("x is a capital character");

  }else if (x >= 97 && x <= 122)
  {
    printf("x is a small character");
  }else{
    printf("x is a special character");
  }
  
}