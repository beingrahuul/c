#include <stdio.h>
#include <string.h>

struct student {
   char charname[10];
   int marks[3];
   int total;
   float percentage;
};

int main() {
   struct student s[5];
   int i, j;

   // Input data for all students
   for(i = 0; i < 5; i++) {
      printf("Enter name of student %d: ", i+1);
      scanf("%s", s[i].charname);
      s[i].total = 0;
      for(j = 0; j < 3; j++) {
         printf("Enter marks of subject %d for %s: ", j+1, s[i].charname);
         scanf("%d", &s[i].marks[j]);
         s[i].total += s[i].marks[j];
      }
      s[i].percentage = (float)s[i].total/(3*100) * 100;
   }

   // Print data for all students
   printf("Details of all students:\n");
   for(i = 0; i < 5; i++) {
      printf("Name: %s, Marks: %d %d %d, Total: %d, Percentage: %.2f\n", s[i].charname, s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].total, s[i].percentage);
   }

   return 0;
}
