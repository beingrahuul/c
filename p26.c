#include <stdio.h>

int factorial(int n) {
  if (n == 0)
      return 1;
  else
      return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    int factor = factorial(num);

    printf("The factorial of the number is: %d\n", factor);

    return 0;
}