#include <stdio.h>

int main() {
  char x;
  printf("Enter the character: ");
  scanf("%c", &x);

  switch (x)
  {
  case 'a': {
    printf("%c is a vowel\n", x);
    break;
  }

  case 'e': {
    printf("%c is a vowel\n", x);
    break;
  }

  case 'i': {
    printf("%c is a vowel\n", x);
    break;
  }

  case 'o': {
    printf("%c is a vowel\n", x);
    break;
  }

  case 'u': {
    printf("%c is a vowel\n", x);
    break;
  }
  
  default:
    printf("%c is not a vowel\n", x);
    break;
  }
}