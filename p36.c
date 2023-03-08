#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main() {
   union Data data;
   // Access and print union members
   data.i = 10;
   printf("i = %d\n", data.i);
   
   data.f = 3.14;
   printf("f = %f\n", data.f);
   
   strcpy(data.str, "Hello");
   printf("str = %s\n", data.str);

   // Calculate the size of the union
   printf("Size of union Data: %d bytes\n", sizeof(data));

   return 0;
}
