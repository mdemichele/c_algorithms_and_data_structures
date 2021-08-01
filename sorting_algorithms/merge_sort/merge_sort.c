#include <stdlib.h>
#include <stdio.h>

// HELPER FUNCTION THAT MERGES THE TWO PARTITIONS
void merge(int arr[], int start, int mid, int end) {
  // temporary array
  int temp[end - start + 1];
  
  // iterators
  // i: Keeps track of first element index in the left partition 
  // j: Keeps track of first element index in the right partition 
  // k: Keeps track of temp index 
  int i = start, j = mid+1, k = 0;
  
  // traverse both arrays and in each iteration add smaller of both elements in temp 
  while (i <= mid && j <= end) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      i++; k++;
    } else {
      temp[k] = arr[j];
      j++; k++;
    }
  }
  
  // add any elements remaining in the left partition 
  while (i <= mid) {
    temp[k] = arr[i];
    i++; k++;
  }
  
  // add any elements remaining in the right partition 
  while (j <= end) {
    temp[k] = arr[j];
    j++; k++;
  }
  
  // Copy temp array to original array 
  for (i = start; i <= end; i++) {
    arr[i] = temp[i - start];
  }
}

// MAIN MERGE SORT FUNCTION: CALLS MERGE RECURSIVELY
void merge_sort(int arr[], int start, int end) {
  if (start < end) {
    int mid = (start + end) / 2;
    // Partition off left side 
    merge_sort(arr, start, mid);
    // Partition off right side 
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
  }
}


// HELPER FUNCTION TO PRINT AN ARRAY
void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int main() {
  
  printf("--------------------TEST 1------------------------------\n");
  printf("Original array: ");
  int arr[] = { 9, 8, 4, 6, 1 };
  int n = sizeof(arr) / sizeof(arr[0]);
  print_arr(arr, n);
  
  merge_sort(arr, 0, n - 1);
  
  printf("Sorted array: ");
  print_arr(arr, n);
  printf("\n");
  
  return 0;
}