#include <stdlib.h>
#include <stdio.h>

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void selection_sort(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    int min = arr[i];
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min) {
        min = arr[j];
        minIndex = j;
      }
    }
    int temp = arr[i];
    arr[i] = min;
    arr[minIndex] = temp;
  }
}

int main() {
  
  int arr[] = { 9, 3, 6, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  print_arr(arr, n);
  selection_sort(arr, n);
  print_arr(arr, n);
  
  
  return 0;
}