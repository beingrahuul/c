//WAP to read and print employee details like Employee ID, EName, salary using structures

#include <stdio.h>

typedef struct employee{
  int id;
  char name[100];
  int salary;
}emp;


void getinfo(emp *x){
  printf("Enter Employee name: ");
  fgets(x->name, 100, stdin);

  printf("Enter Employee id: ");
  scanf("%d", &x->id);

  printf("Enter Employee salary: ");
  scanf("%d", &x->salary);
}

void printinfo(emp *x){

  printf("ID: %d\n", x->id);
  printf("Name: %s", x->name);
  printf("Salary: %d\n", x->salary);

}

int main () {
  emp e1;

  emp *ptr_e1 = &e1;

  getinfo(ptr_e1);
  printinfo(ptr_e1);
}