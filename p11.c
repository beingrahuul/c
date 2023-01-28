  #include <stdio.h>
  #include <math.h>

  double factorial(int n) {
      if (n == 0)
          return 1;
      else
          return n * factorial(n - 1);
  }


  double sum_series(double x, int n) {
      double result = 0;
      int power = 1;
      for (int i = 1; i <= n; i++){
        if (i % 2 == 0) {
          result -= pow(x, power)/factorial(power);
          power += 2;
        }else {
          result += pow(x, power)/factorial(power);
          power += 2;
        }
      }
      return result;
  }

  void main(){
    printf("Sum = %.2lf", sum_series(5, 3));
  }