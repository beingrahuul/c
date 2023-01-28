#include <stdio.h>


void printABCED() {
  char c = 'A';
  for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
          printf("%c", c);
          c++;
      }
      printf("\n");
      c = 'A';
  }

  printf("------------\n");

}

void printFIVE() {
  int x = 5;
  int length = x;
  for(int i = 0; i < length; i++){
    for(int j = 0; j < x; j++){
      printf("%d", x);
    }
    printf("\n");
    x--;
  }

  printf("------------\n");

}

void printINC() {
  int x = 5;
  int length = x;
  for(int i = 1; i <= length; i++){
    for(int j = 1; j <= i; j++){
      printf("%d", j);
    }
    printf("\n");
    x--;
  }

  printf("------------\n");

}

void printSTAR() {
  int length = 5;
  for(int i = 0; i <= length; i++){
    for(int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }

  printf("------------\n");

}


int main() {
    printSTAR();
    printABCED();
    printFIVE();
    printINC();

    return 0;
}
