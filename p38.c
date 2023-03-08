#include <stdio.h>

int main() {
   FILE *fp;
   char name[50];
   int age;
   float height;

   // Open file in write mode
   fp = fopen("person.txt", "w");

   // Write data to file using fprintf function
   fprintf(fp, "Name\tAge\tHeight\n");
   fprintf(fp, "Rahul\t22\t5.8\n");
   fprintf(fp, "Krish\t20\t5.6\n");
   fprintf(fp, "Mayank\t19\t5.8\n");

   // Close file
   fclose(fp);

   return 0;
}
