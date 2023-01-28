#include <stdio.h>

int GCF(int a, int b){

  int max;
  if(a > b){
    max = a;
  }else{
    max = b;
  }

  int arr[max];

  for(int i = 0; i <= max; i++){
    arr[i] = 0;
  }

  for(int i = 2; i <= a; i++){
    if(a%i == 0){
      printf("%d\t", i);
      arr[i] = arr[i] + 1;
    }
  }

  printf("\n");

  for(int i = 2; i <= b; i++){
    if(b%i == 0){
      printf("%d\t", i);
      arr[i]++;
    }
  }

  printf("\n");
  int temp = 0, index = 0;
  for(int i = 0; i <= max; i++){
    if(arr[i] >= temp){
      temp = arr[i];
      index = i;
    }
  }

  if(temp >= 2){
    return index;
  }else{
    return 1;
  }
}

int LCM(int a, int b) {
  int lcm;

  lcm = (a * b) / GCF(a, b);

  return lcm;
}

int main(){
  int a, b, gcf, lcm;
  printf("Enter first Number: ");
  scanf("%d", &a);

  printf("Enter Second Number: ");
  scanf("%d", &b);

  gcf = GCF(a, b);
  lcm = LCM(a, b);
  printf("Greatest Common Factor = %d.\n", gcf);
  printf("Least Common Multiple = %d.\n", lcm);

}