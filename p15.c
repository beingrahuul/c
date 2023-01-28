//WAP to insert and delete an element to and from array at specified position
#include <stdio.h>

int insert(int arr[], int length){
  int num, pos, temp;

  printf("Enter the Position of element in Array you want to Insert\n");
  scanf("%d", &pos);

  printf("Enter the element you want to insert\n");
  scanf("%d", &num);

  for(int i = length - 1; i >= pos-1; i--){
    arr[i + 1] = arr[i];
    if(i == pos-1){
      arr[i] = num;
    }
  }

  for(int i = 0; i <= length; i++) {
    printf("%d\t", arr[i]);
  }
}

int delete(int arr[], int length){
  int num, pos, temp;

  printf("Enter the Position of element in Array you want to Delete\n");
  scanf("%d", &pos);

  for(int i = pos - 1; i < length; i++){
    arr[i] = arr[i + 1];
  }

  length -= 1;
  
  for(int i = 0; i < length; i++) {
    printf("%d\t", arr[i]);
  }
}


int main () {
  int arr[20], length, choice;

  printf("Enter the length of array: ");
  scanf("%d", &length);

   for(int i=0; i < length; i++){
    printf("Enter the element of array at arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  printf("Press 1 to do insert element in Array\n");
  printf("Press 2 to do Delete  element in Array\n");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    insert(arr, length);
    break;
  
  case 2:
    delete(arr, length);
    break;
  default:
    break;
  }

}