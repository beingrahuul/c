#include <stdio.h>

struct Distance {
   int feet;
   float inch;
};

int main() {
   struct Distance d1, d2, result;

   printf("Enter feet and inches for first distance:\n");
   scanf("%d%f", &d1.feet, &d1.inch);
   printf("Enter feet and inches for second distance:\n");
   scanf("%d%f", &d2.feet, &d2.inch);

   result.inch = d1.inch + d2.inch;
   result.feet = d1.feet + d2.feet;
   if(result.inch >= 12) {
      result.inch -= 12;
      result.feet++;
   }
   printf("Total distance: %d feet %.2f inches\n", result.feet, result.inch);

   return 0;
}
