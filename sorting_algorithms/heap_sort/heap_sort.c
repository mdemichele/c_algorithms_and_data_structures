#include <stdlib.h>
#include <stdio.h>






void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int main() {
  
  printf("----------------TEST 1------------------\n");
  printf("Original Array: ")
  int arr[] = { 9, 8, 4, 6, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  print_arr(arr, n);
  
  return 0;
}