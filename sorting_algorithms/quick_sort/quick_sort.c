#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int start, int end) {
  // create pivot as last element
  int pivot = arr[end];
  // index of smaller element
  int i = start - 1; 
  
  for(int j = start; j < end; j++) {
    // If current element is smaller than or equal to pivot
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  } 
  swap(&arr[i + 1], &arr[end]);
  return (i + 1);
}

void quick_sort(int arr[], int start, int end) {
  if (start < end) {
    int k = partition(arr, start, end);
    quick_sort(arr, start, k - 1);
    quick_sort(arr, k + 1, end);
  }
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  printf("-----------TEST 1--------------\n");
  printf("Original Array: ");
  int arr[] = { 5, 9, 2, 6, 3 };
  int n = sizeof(arr) / sizeof(arr[0]);
  print_arr(arr, n);
  
  quick_sort(arr, 0, n - 1);
  
  printf("Sorted Array: ");
  quick_sort(arr, 0, n - 1);
  print_arr(arr, n);
  
  return 0;
}