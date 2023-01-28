int perfect(int a){
  int sum = 0;
  for(int i = 1; i <= a; i++){
    if(a%i == 0){
      sum = sum + i;
    }
  }

  sum = sum - a;
  if(sum == a){
    printf("%d is perfect number", a);
  }
}

int main(){
  int a;
  printf("Enter a Number: ");
  scanf("%d", &a);

  printf("Enter Second Number: ");
  scanf("%d", &b);

  gcf = GCF(a, b);
  lcm = LCM(a, b);
  printf("Greatest Common Factor = %d.\n", gcf);
  printf("Least Common Multiple = %d.\n", lcm);

  perfect(a);
}