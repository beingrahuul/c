#include <stdio.h>

int LinearSearch(int arr[], int x, int length){
  int found=0;
  for(int i = 0; i < length; i++){
    if(arr[i] == x){
      printf("%d is at pos a[%d]\n", x, i);
      found += 1;
      break;
    }
  }

  if(found == 0){
    printf("%d is not in array\n", x);
  }
}


int binarySearch(int arr[], int x, int length){
  int mid, high, low;
  low = 0;
  high = length - 1;

  while (low <= high){
    mid = low + (high - low) / 2;
    if(arr[mid] == x){
      return mid;
    }else if (arr[mid] < x){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  
  return -1;
}


int SelectionSort(int arr[], int length){
  for(int i = 0; i < length; i++){
    int temp, min = i;
    for(int j = i+1; j < length; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }

    if (min != i) {
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
  }

  for (int i = 0; i < length; i++){
    printf("%d\t", arr[i]);
  }

}


int BubbleSort(int arr[], int length){
  int temp;
  for(int i = 0; i < length - 1; i++){
    for(int j = 0; j < length - i; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for (int i = 0; i < length; i++){
    printf("%d\t", arr[i]);
  }
}

int main(){

  int choice, num,  a[20], i, length, ele, pos;
  printf("Enter the Numbers of elements: ") ;
  scanf("%d", &length);
  
  for (i = 0; i < length; i++){
    printf("\nEnter the element of array at a[%d]: ", i);
    scanf("%d", &a[i]);
  }
  
  printf("Press 1 to do Linear Search in Array\n");
  printf("Press 2 to do Binary search in Array\n");
  printf("Press 3 to do Selection Sort in Array\n");
  printf("Press 4 to do Bubble Sort in Array\n");

  printf("Enter your choice: ");
  scanf("%d", &choice);
    
  switch (choice){
    case 1: {
      printf("Enter the element you want to find in array: ");
      scanf("%d", &num);
      LinearSearch(a, num, length);
      break;
    }

    case 2: {
      printf("Enter the element you want to find in array: ");
      scanf("%d", &num);
      int result = binarySearch(a, num, length);
      if(result >= 0){
        printf("%d is at pos a[%d]\n", num, result);
      }else{
        printf("%d is not in array\n", num, result);
      }
      break;
    }

    case 3: {
      SelectionSort(a, length);
      break;
    }

    case 4: {
      BubbleSort(a, length);
      break;
    }

    default:
        printf("wrong Input\n");
  }
  return 0;
}