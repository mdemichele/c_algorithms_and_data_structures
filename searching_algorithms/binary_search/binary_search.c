#include <stdlib.h>
#include <stdio.h>

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int binary_search(int arr[], int i, int j, int x) {
  if (i > j) { 
    return 0; 
  } else {
      int k = j - i / 2;
      if (x == arr[k]) {
        return 1;
      } else if (x < arr[k]) {
          binary_search(arr, i, k - 1, x);
      } else {
          binary_search(arr, k + 1, j, x);
      }
  }
}

int main() {
  
  int arr[] = {1, 3, 5, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  print_arr(arr,n);
  int answer = binary_search(arr, 0, n, 5);
  printf("%d\n", answer);
  
  return 0;
}

