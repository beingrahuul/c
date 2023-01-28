#include <stdio.h>

int main() {
  int fnum, snum, temp;
  fnum = 1;
  snum = 1;
  printf("%d ", fnum);
  for(int i=0; i < 20; i++){
    temp = snum;
    snum = fnum + snum;
    fnum = temp;
    printf("%d ", temp);
  }
}