#include <stdlib.h>
#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {
  // temporary array
  int temp[end - start + 1];
  
  // iterators
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
  
  // add elements left in the first interval
  while (i <= mid) {
    temp[k] = arr[i];
    i++; k++;
  }
  
  // add elements left in the second interval
  while (j <= end) {
    temp[k] = arr[j];
    j++; k++;
  }
  
  // Copy temp to original interval
  for (i = start; i <= end; i++) {
    arr[i] = temp[i - start];
  }
}

void merge_sort(int arr[], int start, int end) {
  if (start < end) {
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
  }
}



void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int main() {
  
  int arr[] = { 9, 8, 4, 6, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  print_arr(arr, n);
  merge_sort(arr, 0, n - 1);
  print_arr(arr, n);
  
  return 0;
}