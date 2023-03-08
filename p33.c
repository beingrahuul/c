// Create a structure item (char item_name[10],int qty,float price,float total_amt). Enter details regarding items. 
//Create a pointer variable *pitem of a structureitem and access the elements or members of a structure using pointer variableby using -> operator.

#include <stdio.h>

typedef struct items{
  char item_name[10];
  int qty;
  float price;
  float total_amt;
}item;


void printinfo(item *x){
  printf("Name: %s\n", x->item_name);
  printf("Quantity: %d\n", x->qty);
  printf("Price: %.2f\n", x->price);
  printf("Total: %.2f\n", x->total_amt);
}

int main () {
  item i1 = {"soap", 5, 35.2, (i1.qty * i1.price)};

  item *ptr_i1 = &i1;
  printinfo(ptr_i1);
}